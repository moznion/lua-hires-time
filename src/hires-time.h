#ifndef LUAHIRESTIME_LUA_HIRESTIME_H_
#define LUAHIRESTIME_LUA_HIRESTIME_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#ifdef WIN32

#include <windows.h>
#include <stdint.h>

#else

#include <sys/time.h>

#endif

#ifdef __cplusplus
}
#endif

#define HIRESTIME_VERSION "0.1.0-0"
#define HIRESTIME_LIBNAME "hires-time"
#define HIRESTIME_COPYRIGHT "Copyright © 2018 moznion, http://moznion.net/ <moznion@gmail.com>"
#define HIRESTIME_DESCRIPTION "A library to measure the system time with high resolution for lua"

#endif

