/**
 * FUN_0042a8e4
 *
 * Extracted from fsn.c lines 66702-66714
 * Ghidra address: 0x0042a8e4
 * Category: Other
 */

void FUN_0042a8e4(void)

{
  int unaff_gp;
  
  if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
    (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a8e4):
     * Function: FUN_0042a8e4
     *
     * Looking at the assembly:
     * 1. **What it does:** Checks if byte at offset 0xC51 (3153) of curcontext is non-zero. If set, calls zfunction(1), then swapbuffers(), then zfunction(1) again. This is a double-buffer swap with Z-buffer enabled.
     * 2. **C pseudocode:**
     * ```c
     * void draw_alt(void) {
     * if (((unsigned char *)curcontext)[0xC51] != 0) {
     * zfunction(1);      // GP offset -30868 = 0x876c
     * swapbuffers();     // GP offset -31436 = 0x8534
     * zfunction(1);
     * }
     * }
     * ```
     * Note: The offset 0xC51 (3153) into curcontext likely checks a "double-buffered" or "needs-redraw" flag. The pattern zfunction→swapbuffers→zfunction suggests enabling Z-test, swapping front/back buffers, then re-enabling Z-test for the next frame.
     */
halt_baddata();
}
