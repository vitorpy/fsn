/**
 * warpZoomToFile
 *
 * Extracted from fsn.c lines 57531-57552
 * Category: Filesystem
 */

void warpZoomToFile(int param_1,int param_2)

{
  uint uVar1;
  undefined8 in_f18;
  
  uVar1 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
      do_warp();
    }
    if (param_2 != 0) {
      set_camera_lookat((double)param_2->child_count /* was: *(float *)(param_2 + 0x14) */ -
                   (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)DAT_10017530,
                   ((double)param_2->child_array /* was: *(float *)(param_2 + 0x18) */ +
                   (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)uVar1 << 0x20)) -
                   (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)DAT_10017530);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041aee0):
     * Function: warpZoomToFile
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes interpolated Y and Z coordinates using double-precision math, then calls a function (likely `newWarpCoords`) via GP offset -31400 (0x8558) with the computed coordinates and other parameters on the stack.
     * 2. **C pseudocode:**
     * ```c
     * // $f10 = file->y (offset 24), $f16 = dest->y (offset 24)
     * // $f6 = dest->z (offset 144), t8 = file->unknown (offset 164)
     * double interp_y = dest->y + (file->y * ratio) - ((dest->y - start_y) / duration);
     * double interp_z = base_z + dest->z;
     * // Stack args: ratio (sp+16,20), t8 (sp+28), a3 (sp+32), v0 (sp+36), zeros at 24,40
     * newWarpCoords(a0, a1, interp_y, interp_z, t8, a3, v0, 0);
     * ```
     * The key insight: this is coordinate interpolation for the "warp zoom" animation - blending between current position and target file position using double-precision intermediates, then calling `newWarpCoords` (GP-31400) to apply the warp transformation.
     */
halt_baddata();
}
