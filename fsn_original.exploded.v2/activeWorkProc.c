/**
 * activeWorkProc
 *
 * Extracted from fsn.c lines 51231-51236
 * Category: Other
 */

void activeWorkProc(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f1e4):
     * Function: activeWorkProc
     *
     * ## Analysis
     * **What it does:**
     * 1. Loads `curcontext` pointer via GP-relative addressing (offset -32664 = 0x8068)
     * 2. Reads field at offset 340 (0x154) from curcontext - this is `workCount`
     * 3. Returns 1 if workCount > 0, else 0 (boolean: "is there work remaining?")
     * **C equivalent:**
     * ```c
     * int activeWorkProc(void) {
     * return (curcontext[0x55] > 0) ? 1 : 0;  // offset 340 = index 0x55 (85 as int)
     * }
     * ```
     * Or more idiomatically:
     * ```c
     * int activeWorkProc(void) {
     * return curcontext->workCount != 0;
     * }
     * ```
     * **Context:** The `sltu zero,v0` + `andi t6,0xff` is a MIPS idiom for `(v0 != 0) ? 1 : 0` - converting any non-zero value to exactly 1. This is an X Toolkit WorkProc callback that returns TRUE (1) to be removed or FALSE (0) to keep running.
     */
halt_baddata();
}
