/**
 * FUN_00421180
 *
 * Extracted from fsn.c lines 61064-61072
 * Ghidra address: 0x00421180
 * Category: Other
 */

void FUN_00421180(void)

{
  overviewActive = 0;
  DAT_10006eb4 = 0;
  FUN_00421d3c(DAT_10016c08);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421180):
     * Function: FUN_00421180
     *
     * Looking at this assembly:
     * **What it does:**
     * Sets a byte to 0 at one GP-relative address, clears a word at another GP-relative address (offset 28340/0x6eb4), then calls a function via GP offset -31084 with curcontext[0x6c08/4] as argument. The original a0, a1, a2 are saved to stack but only a0 is used for the call.
     * **C pseudocode:**
     * ```c
     * void FUN_00421180(int a0_unused, int a1_unused, int a2_unused) {
     * // GP-30404 -> some byte flag
     * *(char*)DAT_gp_minus_30404 = 0;
     * // GP-32664 -> base, offset 0x6eb4 -> some word
     * *(int*)(DAT_gp_minus_32664 + 0x6eb4) = 0;
     * // GP-32660 -> curcontext, offset 0x6c08 -> widget or context field
     * // GP-31084 -> function pointer (likely XtUnmanageChild or similar)
     * void *widget = *(void**)(curcontext + 0x6c08);
     * (*func_gp_minus_31084)(widget);
     * }
     * ```
     * This looks like a UI cleanup/reset callback - clears some flags and unmanages a widget. The halt_baddata likely occurred because Ghidra couldn't resolve the GP-relative indirect call at 0x4211bc.
     */
halt_baddata();
}
