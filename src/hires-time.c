#include "hires-time.h"

static int get_epoch_micros(lua_State* L) {
    struct timeval t;
    if (gettimeofday(&t, NULL) < 0) {
        lua_pushnil(L);
        lua_pushstring(L, "failed to measure the hires time");
    } else {
        lua_pushnumber(L, t.tv_sec * 1000000 + t.tv_usec);
        lua_pushnil(L);
    }

    return 2;
}

static const struct luaL_Reg R[] = {
    {"get_epoch_micros", get_epoch_micros},
    {NULL, NULL},
};

#ifdef __cplusplus
extern "C" {
#endif

LUALIB_API int luaopen_hires_time(lua_State * L) {
    /*
     * Register module
     */
#if !defined(LUA_VERSION_NUM) || LUA_VERSION_NUM < 502 // lua < 5.2
    luaL_register(L, HIRESTIME_LIBNAME, R);
#else
    lua_newtable(L);
    luaL_setfuncs(L, R, 0);
#endif

    /*
     * Register module information
     */
    lua_pushliteral(L, HIRESTIME_VERSION);
    lua_setfield(L, -2, "_VERSION");

    lua_pushliteral(L, HIRESTIME_COPYRIGHT);
    lua_setfield(L, -2, "_COPYRIGHT");

    lua_pushliteral(L, HIRESTIME_DESCRIPTION);
    lua_setfield(L, -2, "_DESCRIPTION");

    return 1;
}

#ifdef __cplusplus
}
#endif

