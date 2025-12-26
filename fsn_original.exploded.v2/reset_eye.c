/**
 * reset_eye
 *
 * Extracted from fsn.c lines 50574-50581
 * Category: Filesystem
 */

void reset_eye(void)

{
  save_matrix_state();
  set_camera_lookat((double)view_init_x,(double)view_init_y);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d0d8):
     * Function: reset_eye
     *
     * Looking at the assembly:
     * 1. **What it does**: Calls an initial function (GP-31412), then loads camera position floats from curcontext (offsets 24, 28, 32) and a twist value (offset 40), converts floats to doubles, and calls lookat() (GP-31400) with zeros for the "at" point.
     * 2. **C pseudocode**:
     * ```c
     * void reset_eye(int param1, int param2, int param3) {
     * pushmatrix();  // GP-31412 = pushmatrix
     * float *ctx = curcontext;  // GP-30172
     * float from_x = ctx[6];    // offset 24
     * float from_y = ctx[7];    // offset 28
     * float from_z = ctx[8];    // offset 32
     * int twist = ctx[10];      // offset 40 (as int)
     * // lookat(from_x, from_y, from_z, at_x=0, at_y=0, at_z=0, twist)
     * lookat((double)from_x, (double)from_y, (double)from_z,
     * 0.0, 0.0, 0.0, twist);  // GP-31400 = lookat
     * }
     * ```
     * The function saves the incoming parameters (a0, a1, a2) to the stack but never uses them - they're passed through to pushmatrix which takes no args. This sets up the view transformation from the camera position stored in curcontext looking at the origin.
     */
halt_baddata();
}
