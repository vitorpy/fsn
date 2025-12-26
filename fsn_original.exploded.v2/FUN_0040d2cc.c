/**
 * FUN_0040d2cc
 *
 * Extracted from fsn.c lines 50615-50627
 * Ghidra address: 0x0040d2cc
 * Category: Filesystem
 */

void FUN_0040d2cc(void)

{
  save_matrix_state();
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    set_camera_lookat((double)view_init_x,(double)view_init_y);
  }
  else {
    set_camera_lookat((double)DAT_100174bc,(double)DAT_100174c0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d2cc):
     * Function: FUN_0040d2cc
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads camera parameters from a structure at GP-30172 (likely `curcontext`), converts floats to doubles, and calls a function at GP-31400 (likely `lookat` or similar camera setup). Offsets 24/28/32/40 are eye position components (x, y, z, and possibly a flag/mode).
     * 2. **C pseudocode**:
     * ```c
     * // struct at v0 = curcontext (GP-30172 = 0x8a24)
     * float eye_x = curcontext->f24;    // offset 0x18
     * float eye_y = curcontext->f28;    // offset 0x1c
     * float eye_z = curcontext->f32;    // offset 0x20
     * int mode = curcontext->i40;       // offset 0x28
     * // Call lookat(eye_x, eye_y, eye_z, at_x, at_y, at_z, twist)
     * // Args on stack: [0x10]=eye_z_hi, [0x14]=eye_z_lo, [0x18]=0, [0x1c]=mode, [0x20]=v1, [0x24]=0, [0x28]=0
     * lookat((double)eye_x, (double)eye_y, eye_z_as_double, 0, mode, v1, 0, 0);
     * ```
     * The pattern matches IrisGL `lookat()` which takes eye position, reference point, and twist angle. The structure offsets (0x18, 0x1c, 0x20, 0x28) align with camera/view parameters in the FSN context structure.
     */
halt_baddata();
}
