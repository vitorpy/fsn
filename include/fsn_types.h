/**
 * fsn_types.h
 *
 * Basic type definitions replacing Ghidra's undefined types.
 * Provides standardized types for cross-platform compatibility.
 */

#ifndef FSN_TYPES_H
#define FSN_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* Standard library includes for system calls */
#include <unistd.h>      /* getcwd, etc */
#include <math.h>        /* powf, etc */
#include <sys/stat.h>    /* lstat */
#include <sys/statvfs.h> /* statvfs */
#include <sys/time.h>    /* gettimeofday */
#include <dirent.h>      /* opendir, readdir */

/* ============================================================
 * Ghidra Decompilation Helper Macros
 * ============================================================ */

/* CONCAT44 - concatenate two 32-bit values into 64-bit */
#define CONCAT44(hi, lo) (((uint64_t)(uint32_t)(hi) << 32) | (uint32_t)(lo))
#define CONCAT22(hi, lo) (((uint32_t)(uint16_t)(hi) << 16) | (uint16_t)(lo))
#define CONCAT11(hi, lo) (((uint16_t)(uint8_t)(hi) << 8) | (uint8_t)(lo))

/* Rounding helpers */
#define ROUND(x) ((int)((x) + 0.5f))
#define FLOOR(x) ((int)(x))

/* C++ operator new replacement */
#define __nw__FUi(size) malloc(size)

/* ============================================================
 * Ghidra Type Definitions
 * ============================================================ */

/* Ghidra's 'code' type - represents a function
 * Used in GP-indirect calls: (**(code **)(gp + offset))(args)
 * These are MIPS calling convention and will NOT work on x86_64!
 * Functions using these will compile but crash at runtime.
 *
 * We define it as a variadic function returning int to accept any call pattern.
 */
typedef int (*code)(...);

/* Replace Ghidra's undefined types with standard types */
typedef uint8_t   undefined;
typedef uint8_t   undefined1;
typedef uint16_t  undefined2;
typedef uint32_t  undefined4;
typedef uint64_t  undefined8;

/* Standard shorthand types */
typedef uint8_t   byte;
typedef uint8_t   uchar;
typedef uint16_t  ushort;
typedef uint32_t  uint;
typedef uint32_t  dword;
typedef uint16_t  word;
typedef uint64_t  ulong;
typedef uint64_t  ulonglong;
typedef int64_t   longlong;

/* Boolean type (if not using stdbool.h) */
#ifndef __cplusplus
#ifndef bool
typedef int bool;
#define true  1
#define false 0
#endif
#endif

/* Note: fsn_igl.h should be included AFTER X11 headers due to type conflicts.
 * Include fsn_igl.h explicitly in source files that need it, after fsn_state.h */

/* Include stub declarations */
#include "fsn_stubs.h"
#include "fsn_stubs_generated.h"

#endif /* FSN_TYPES_H */
