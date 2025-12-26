/**
 * FUN_0040d15c
 *
 * Extracted from fsn.c lines 50587-50609
 * Ghidra address: 0x0040d15c
 * Category: Filesystem
 */

void FUN_0040d15c(void)

{
  save_matrix_state();
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    set_camera_lookat((double)*(float *)curcontext -
                 (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8),
                 (double)*(float *)(curcontext + 4) -
                 (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8));
  }
  else {
    set_camera_lookat((double)*(float *)curcontext -
                 (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8),
                 (double)*(float *)(curcontext + 4) -
                 (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8));
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d15c):
     * Function: FUN_0040d15c
     *
     * Looking at this assembly:
     * 1. **What it does**: Computes interpolated X and Y coordinates using a parameter t (in $f0/$f2), then calls a function (at GP offset -31400) with the interpolated position and additional parameters from curcontext (offsets 68, 72).
     * 2. **C pseudocode**:
     * ```c
     * // v0 = some node/point structure, a0 = curcontext
     * // $f0 contains interpolation factor t (as double)
     * double t = (double)param;
     * float x1 = node->x;      // offset 0x10 (16)
     * float x2 = node->x2;     // offset 0x14 (20)
     * float y1 = node->y;      // offset 0x04 (4)
     * float y2 = node->y2;     // offset 0x18 (24)
     * double interp_x = (double)x1 - ((double)x2 * t);  // $f12
     * double interp_y = (double)y1 - ((double)y2 * t);  // $f14
     * float ctx_val = curcontext[0x44];  // offset 68, passed as double on stack
     * int ctx_int = curcontext[0x48];    // offset 72
     * // Call function at GP[-31400] - likely a positioning/drawing function
     * // Args: $a0=curcontext, $f12=interp_x, $f14=interp_y, stack has ctx values + zeros
     * some_position_func(curcontext, interp_x, interp_y, ctx_val, ctx_int, 0, v1, 0, 0);
     * ```
     * The GP offset -31400 (0x8558) likely resolves to a camera/view positioning function given the interpolation pattern and context structure access.
     */
halt_baddata();
}
