/**
 * draw_warp
 *
 * Extracted from fsn.c lines 51629-51638
 * Category: Graphics
 */

void draw_warp(void)

{
  cpack(DAT_10017610);
  clear();
  swapbuffers();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004101d8):
     * Function: draw_warp
     *
     * Looking at the GP offsets and call sequence:
     * **What it does:**
     * Loads curcontext, extracts field at offset 384 (0x180), then calls 4 functions in sequence: one with that field as argument, then 3 with no arguments. This appears to be a warp/transition rendering sequence.
     * **GP offset resolution needed:**
     * - gp-30172 (0x8a24) = curcontext
     * - gp-31644 (0x8464) = first function (takes curcontext[96] as arg, likely pushmatrix or similar)
     * - gp-31992 (0x8308) = second function
     * - gp-31572 (0x84ac) = third function
     * - gp-31952 (0x8330) = fourth function
     * **C pseudocode:**
     * ```c
     * void draw_warp(void) {
     * void *ctx_field = curcontext[96];  // offset 384 = index 96 for 4-byte ptrs
     * func1(ctx_field);  // gp-0x8464
     * func2();           // gp-0x8308
     * func3();           // gp-0x84ac
     * func4();           // gp-0x8330
     * }
     * ```
     * To get actual function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-30172
     * -31644
     * -31992
     * -31572
     * -31952"
     * ```
     * This will map the GP offsets to symbol names from the original binary's GOT.
     */
halt_baddata();
}
