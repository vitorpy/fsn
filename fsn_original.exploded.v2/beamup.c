/**
 * beamup
 *
 * Extracted from fsn.c lines 65616-65630
 * Category: Other
 */

void beamup(void)

{
  if (DAT_10017491 != '\0') {
    DAT_10007988 = 1;
    do {
      redraw_gl_scene();
      FUN_0042a8e4();
      DAT_10007988 = DAT_10007988 + 1;
    } while (DAT_10007988 < 4);
    DAT_10007988 = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004292b8):
     * Function: beamup
     *
     * Looking at the assembly:
     * 1. **What it does**: Loops 3 times (i=1,2,3) calling two functions via GP offsets -31436 and -30848, storing the loop counter at `*(gp[-32664] + 31112)`. If initial condition fails (t6==0), skips entirely.
     * 2. **C pseudocode**:
     * ```c
     * if (param != 0) {
     * int *counter = (int*)((char*)DAT_gp_8068 + 31112);  // gp[-32664] + 0x7988
     * *counter = 1;
     * while (*counter < 4) {
     * FUN_gp_8534();  // gp[-31436] - likely a draw/update function
     * FUN_gp_8780();  // gp[-30848] - likely swapbuffers or sync
     * (*counter)++;
     * }
     * *counter = 3;  // ensure final value is 3
     * }
     * ```
     * GP offsets to resolve:
     * - gp[-32664] (0x8068): base pointer for counter storage
     * - gp[-31436] (0x8534): first called function
     * - gp[-30848] (0x8780): second called function
     * The "beamup" name and 3-iteration loop suggest this animates the Star Trek-style beam effect by drawing 3 frames.
     */
halt_baddata();
}
