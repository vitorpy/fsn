/**
 * movement.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "movement.h"
#include "fsn_types.h"
#include "fsn_state.h"

/* movehoriz - Move camera horizontally based on mouse delta
 *
 * Cleaned up from original MIPS artifacts.
 * Maps mouse movement to camera pan with rotation transform.
 * Uses transform matrices at +0x14 (sin_z) and +0x18 (cos_z).
 *
 * Convention: mouse X -> strafe (cam_x), mouse Y -> dolly (cam_y)
 * Rotation matrix applied so panning follows camera heading.
 */
void movehoriz(float delta_x, float delta_y)
{
    float zoom_factor = powf(zoom_base_factor,
        *(float *)(curcontext + 4) / zoom_reference_height);
    if (zoom_factor < 0.01f) zoom_factor = 1.0f;  /* Guard against zero */

    float sin_z = *(float *)(curcontext + 0x14);
    float cos_z = *(float *)(curcontext + 0x18);

    /* Apply 2D rotation matrix to transform screen delta to world delta
     * Screen X (delta_x) -> strafe left/right in world
     * Screen Y (delta_y) -> dolly forward/back in world
     * Inverted because moving camera right makes scene move left
     */
    float world_dx = -(cos_z * delta_x - sin_z * delta_y);
    float world_dy = -(sin_z * delta_x + cos_z * delta_y);

    /* Update camera position */
    *(float *)curcontext += world_dx / zoom_factor;
    *(float *)(curcontext + 4) += world_dy / zoom_factor;

    redraw_flag = 1;
}
