/**
 * gp_mapping.h - GP offset to IGL function mapping
 *
 * Archaeological decode of MIPS GP-indirect calls to actual IGL functions.
 * The original FSN used GP-relative addressing for function calls.
 * This header maps those offsets to the actual function names.
 *
 * Phase 15: Decoded by cross-referencing with clean functions (draw_dir, draw_directory)
 * that use named IGL calls.
 *
 * Usage: Replace (**(code **)(unaff_gp + OFFSET))(args) with GP_FUNC_OFFSET(args)
 *
 * NOTE: Some offsets may need revision as we decode more functions.
 */

#ifndef FSN_GP_MAPPING_H
#define FSN_GP_MAPPING_H

#include "fsn_igl.h"
#include <string.h>  /* strlen */

/* ============================================================
 * GP Offset → IGL Function Mapping
 * ============================================================
 *
 * Methodology: Cross-reference GP-indirect calls with clean functions
 * that use the same IGL operations with named calls.
 *
 * Clean functions used as Rosetta Stone:
 * - draw_dir: loadname, pushmatrix, translate, cpack, rotate, rect, scale, rectf, popmatrix
 * - draw_directory: pushmatrix, popmatrix, pushname, popname, cpack, linewidth, bgnline, v3f, endline
 */

/* Matrix operations */
#define GP_FUNC_7b48()              pushmatrix()
#define GP_FUNC_7b28()              popmatrix()
#define GP_FUNC_7b60(x, y)          translate((x), (y))
#define GP_FUNC_7b68(angle, axis)   rotate((angle), (axis))
#define GP_FUNC_7b6c(x, y)          scale((x), (y))

/* Primitive drawing */
#define GP_FUNC_7b7c()              bgnline()
#define GP_FUNC_7b94()              endline()
#define GP_FUNC_7c68(v)             v3f((float*)(v))
#define GP_FUNC_7dc0(v)             v3f((float*)(v))

/* Color */
#define GP_FUNC_7b9c(c)             cpack((c))

/* Picking/selection names */
#define GP_FUNC_7db0(n)             pushname((n))
#define GP_FUNC_7de8()              popname()
#define GP_FUNC_7e1c(n)             loadname((n))

/* Line attributes */
#define GP_FUNC_7e0c(w)             linewidth((w))

/* Text */
#define GP_FUNC_7a08(s)             charstr((s))

/* Standard library */
#define GP_FUNC_7c20(s)             strlen((s))

/* Scale variants (some calls may have different patterns) */
#define GP_FUNC_7e20(x, y)          scale((x), (y))

/* Unknown/needs research - these appear in some functions */
/* -0x78f8: Complex args, possibly draw-related */
/* -0x793c: Takes (node, char) - possibly recursive draw call */
/* -0x7d30: Takes (0) - possibly enable/disable something */
/* -0x794c: Takes (int, param, int) - possibly texture or pattern */
/* -0x78c8: Returns short - possibly getname or gselect */
/* -0x7d1c: Takes (short) - possibly setname or highlight */
/* -0x77d8: Takes (val, &float, &float, &float, &float) - possibly getbounds */

#endif /* FSN_GP_MAPPING_H */
