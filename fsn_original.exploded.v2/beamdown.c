/**
 * beamdown
 *
 * Extracted from fsn.c lines 65662-65676
 * Category: Other
 */

void beamdown(void)

{
  if (DAT_10017491 != '\0') {
    DAT_10007988 = 3;
    do {
      redraw_gl_scene();
      FUN_0042a8e4();
      DAT_10007988 = DAT_10007988 + -1;
    } while (-1 < DAT_10007988);
    DAT_10007988 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429350):
     * Function: beamdown
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks a byte flag at offset+1; if non-zero, runs a countdown loop from 3 to 0, calling two GP-indirect functions each iteration (likely pushmatrix and popmatrix or similar GL state functions), then clears the counter.
     * 2. **C pseudocode:**
     * ```c
     * void beamdown(char *param) {
     * if (param[1] == 0) return;
     * int *counter = &DAT_10017988;  // gp-0x8068 + 0x7988
     * *counter = 3;
     * while (*counter >= 0) {
     * func_gp_8534();  // likely pushmatrix or gl state
     * func_gp_8780();  // likely popmatrix or gl draw
     * (*counter)--;
     * }
     * *counter = 0;
     * }
     * ```
     * The loop at 0x42938c-0x4293c4 decrements from 3→2→1→0→-1, calling two functions 4 times total. The `bgez` at 0x4293c0 continues while counter >= 0 after decrement. GP offsets -31436 (0x8534) and -30848 (0x8780) need resolution to identify the actual functions.
     */
halt_baddata();
}
