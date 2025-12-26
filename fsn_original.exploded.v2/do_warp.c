/**
 * do_warp
 *
 * Extracted from fsn.c lines 51818-51841
 * Category: Filesystem
 */

void do_warp(int param_1)

{
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_main_gl_window();
  save_matrix_state();
  if (param_1 == 0) {
    if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
      set_camera_lookat((double)view_init_x,(double)view_init_y,0,&local_4);
    }
    else {
      FUN_00426e34(curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */,&local_4,&local_8,local_c);
      set_camera_lookat((double)local_4,(double)local_8);
    }
  }
  else {
    set_camera_lookat((double)DAT_100174bc,(double)DAT_100174c0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004106d8):
     * Function: do_warp
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Loads camera/view parameters from a context structure (offsets 0x18, 0x1c, 0x20, 0x28 = X, Y, Z, duration), converts floats to doubles, and calls a warp/animation function (likely `warp_to` at GP-31400) with position and timing args on stack.
     * **C pseudocode:**
     * ```c
     * // At 4107fc (alternate path after halt_baddata):
     * ctx = curcontext;  // GP-30172
     * float x = ctx->target_x;      // offset 0x18
     * float y = ctx->target_y;      // offset 0x1c
     * float z = ctx->target_z;      // offset 0x20
     * int duration = ctx->warp_time; // offset 0x28
     * // Stack args for warp_to call:
     * // sp+16,20 = z (as double)
     * // sp+24 = 0
     * // sp+32 = some_value (v1)
     * // sp+36 = 0
     * // sp+40 = 0
     * // sp+28 = duration
     * // $f12,$f14 = x,y (as doubles in regs)
     * warp_to((double)x, (double)y, (double)z, 0, some_value, 0, 0, duration);
     * ```
     * The first block (4107e0-4107f8) is similar but uses different source registers ($f16, $f18) - likely the "else" branch warping to a different location.
     */
halt_baddata();
}
