#ifndef LUAHIRESTIME_LUA_HIRESTIME_H_
#define LUAHIRESTIME_LUA_HIRESTIME_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include <sys/time.h>

#ifdef __cplusplus
}
#endif

#define HIRESTIME_VERSION "0.0.1-0"
#define HIRESTIME_LIBNAME "hires-time"
#define HIRESTIME_COPYRIGHT "Copyright © 2018 moznion, http://moznion.net/ <moznion@gmail.com>"
#define HIRESTIME_DESCRIPTION "A library to measure the system time with high resolution for lua"

#endif

