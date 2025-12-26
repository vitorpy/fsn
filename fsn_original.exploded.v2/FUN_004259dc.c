/**
 * FUN_004259dc
 *
 * Extracted from fsn.c lines 63178-63192
 * Ghidra address: 0x004259dc
 * Category: Other
 */

void FUN_004259dc(int param_1)

{
  int unaff_gp;
  
  if ((int)(param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ << 3) < 0) {
    param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ =
         (byte)((param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ >> 0x1e & ~**(uint **)(unaff_gp + -0x7670) /* -> curcontextflag */) << 6) |
         param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004259dc):
     * Function: FUN_004259dc
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if bit 28 of node->flags (offset 0x74) is set. If not set, returns early. Otherwise, updates the low 6 bits of flags based on a global mask, then calculates a float difference between a global camera/view Y position and node->y (offset 0x38).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_004259dc(DirNode *node) {
     * uint flags = node->flags;  // offset 0x74
     * // Check bit 28 (visibility flag?)
     * if ((flags & 0x10000000) == 0)
     * return;
     * // Update visibility bits [7:6] based on global mask
     * uint mask = ~(*g_visibility_mask);  // gp-30320
     * uint bits = ((flags >> 30) & mask) << 6;
     * node->flags = (node->flags & 0xff3f) | bits;
     * // Calculate Y distance from camera
     * float *camera = *g_camera_ptr;  // gp-30340
     * float dy = camera[1] - node->y;  // offset 0x38
     * // ... continues with distance calculations
     * }
     * ```
     * The `0xff3f` mask clears bits 6-7, then inserts new values derived from the top 2 bits of flags ANDed with an inverted global mask. This looks like visibility/culling logic - checking if a directory node is in view and computing its distance from the camera.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004259dc):
     * Function: FUN_004259dc
     *
     * Looking at the GP offsets and the calling pattern:
     * **1. What the assembly does:**
     * Calls popmatrix(), then rdr2s(s2[52], s2[56], 0), then RGBcolor with 1.0f and s2[88], then another RGBcolor-like call with s2[60] and s2[36]. Sets up for bgnline (a1=4 suggests line primitive).
     * **2. C pseudocode:**
     * ```c
     * popmatrix();                              // GP-31560
     * rdr2s(s2->field_34, s2->field_38, 0);    // GP-31584: relative draw 2D short
     * RGBcolor(s2->field_58, 1.0f, 1.0f);      // GP-31596: first color call (a2 gets 1.0f from f14)
     * RGBcolor(s2->field_3c, s2->field_3c, s2->field_24);  // second color (f14=f12, a2 from s2+36)
     * bgnline();                                // GP-31052: a0=0, a1=4 (line type)
     * ```
     * The s2 register points to a structure (likely a directory/file node). Fields at offsets 52-60 (0x34-0x3c) appear to be 2D coordinates, offset 88 (0x58) and 36 (0x24) are color components. This draws a connecting line between nodes with color interpolation.
     */
halt_baddata();
}
