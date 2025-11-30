/**
 * test_context_layout.c
 *
 * Verifies that FsnContext struct offsets match the hardcoded offsets
 * used in the original binary and legacy code.
 *
 * This ensures the refactor is safe and binary-compatible.
 */

#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "../include/fsn_context.h"

#define CHECK_OFFSET(field, expected) \
    do { \
        size_t off = offsetof(FsnContext, field); \
        if (off != expected) { \
            printf("FAIL: offsetof(%s) = 0x%zx, expected 0x%x\n", #field, off, expected); \
            failed++; \
        } else { \
            printf("OK:   offsetof(%s) = 0x%zx\n", #field, off); \
        } \
    } while(0)

int main() {
    int failed = 0;
    
    printf("Testing FsnContext layout...\n");
    
    /* Basic Camera Vectors */
    CHECK_OFFSET(camera_x, 0x00);
    CHECK_OFFSET(camera_y, 0x04);
    CHECK_OFFSET(camera_z, 0x08);
    
    /* Rotations (shorts) */
    CHECK_OFFSET(rotation_z, 0x0c);
    CHECK_OFFSET(rotation_x, 0x0e);
    CHECK_OFFSET(fov,        0x10);
    
    /* Trig Precomputations (floats) */
    CHECK_OFFSET(sin_z, 0x14);
    CHECK_OFFSET(cos_z, 0x18);
    CHECK_OFFSET(tan_z, 0x1c);
    CHECK_OFFSET(sin_x, 0x20);
    CHECK_OFFSET(cos_x, 0x24);
    CHECK_OFFSET(tan_x, 0x28);
    
    /* Scaling */
    CHECK_OFFSET(scale_factor, 0x34);
    CHECK_OFFSET(zoom_mode,    0x3c);
    
    /* Far fields */
    CHECK_OFFSET(render_time_usec,  0xc4c);
    CHECK_OFFSET(special_mode_flag, 0xc53);

    if (failed) {
        printf("\n%d OFFSET CHECKS FAILED! Do not proceed with refactor.\n", failed);
        return 1;
    }
    
    printf("\nAll offset checks passed. Struct is safe to use.\n");
    return 0;
}
