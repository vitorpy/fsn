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

#endif /* FSN_TYPES_H */
