/**
 * fsn_context.h
 *
 * Structured definition of the main FSN context block (curcontext).
 *
 * HISTORY:
 * Original FSN used a raw byte array (char*) and manual offset arithmetic.
 * This header provides a formal C structure to allow safe, typed access.
 *
 * OFFSETS (Verified via binary analysis):
 *   0x00: float camera_x
 *   0x04: float camera_y
 *   0x08: float camera_z
 *   0x0c: short rotation_z (yaw)
 *   0x0e: short rotation_x (pitch)
 *   0x10: short fov
 *   0x14: float sin_z (precomputed)
 *   0x18: float cos_z (precomputed)
 *   0x1c: float tan_z (precomputed)
 *   0x20: float sin_x (precomputed)
 *   0x24: float cos_x (precomputed)
 *   0x28: float tan_x (precomputed)
 *   0x34: float scale_factor
 *   0x3c: int   zoom_mode
 *   ...
 *   0xc4c: int render_time_usec
 */

#ifndef FSN_CONTEXT_H
#define FSN_CONTEXT_H

#include <stdint.h>

/*
 * Explicit padding is used to guarantee alignment matches the original MIPS binary layout
 * regardless of compiler packing rules.
 *
 * We use char arrays for padding to be byte-perfect.
 */
typedef struct FsnContext {
    /* +0x00 */ float camera_x;
    /* +0x04 */ float camera_y;
    /* +0x08 */ float camera_z;
    
    /* +0x0c */ int16_t rotation_z;   /* Yaw (tenths of degrees) */
    /* +0x0e */ int16_t rotation_x;   /* Pitch (tenths of degrees) */
    /* +0x10 */ int16_t fov;          /* Field of View (tenths of degrees) */
    
    /* +0x12 */ char _pad_12[2];      /* Align next float to 0x14 */
    
    /* +0x14 */ float sin_z;          /* Precomputed sin(rot_z) */
    /* +0x18 */ float cos_z;          /* Precomputed cos(rot_z) */
    /* +0x1c */ float tan_z;          /* Precomputed tan(rot_z) */
    
    /* +0x20 */ float sin_x;          /* Precomputed sin(rot_x) */
    /* +0x24 */ float cos_x;          /* Precomputed cos(rot_x) */
    /* +0x28 */ float tan_x;          /* Precomputed tan(rot_x) */
    
    /* +0x2c */ char _pad_2c[8];      /* Padding 0x2c -> 0x34 */
    
    /* +0x34 */ float scale_factor;   /* View scale (default 1.0) */
    
    /* +0x38 */ char _pad_38[4];      /* Padding 0x38 -> 0x3c */
    
    /* +0x3c */ int32_t zoom_mode;    /* 0=normal, non-0=zooming */
    
    /* +0x40 */ char _pad_40[0xc4c - 0x40]; /* Huge gap of unknown state */
    
    /* +0xc4c */ int32_t render_time_usec; /* Frame render time */
    
    /* +0xc50 */ char _pad_c50[3];         /* Padding to 0xc53 */
    /* +0xc53 */ char special_mode_flag;   /* Accessed in stubs.c setScales */
    
    /* End of defined structure - context array is actually 6312 bytes */
} FsnContext;

#endif /* FSN_CONTEXT_H */
