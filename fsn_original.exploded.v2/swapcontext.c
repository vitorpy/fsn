/**
 * swapcontext
 *
 * Extracted from fsn.c lines 66525-66531
 * Category: Other
 */

void swapcontext(undefined1 param_1)

{
  FUN_0042a4d4(1 - curcontextid,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a77c):
     * Function: swapcontext
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Loads `curcontext` pointer, computes `a0 = 1 - *curcontext`, masks original param to get `a1 = param & 0xff`, then calls a function at GP offset -30872 (likely `setcontext` or similar).
     * 2. **C pseudocode:**
     * ```c
     * void swapcontext(int param) {
     * int other_context = 1 - *curcontext;  // Toggle between context 0 and 1
     * int flags = param & 0xff;
     * setcontext(other_context, flags);     // GP[-30872]
     * }
     * ```
     * The logic swaps between two contexts (0↔1) by computing `1 - current`. The `& 0xff` masks the parameter to a byte, passed as the second argument.
     */
halt_baddata();
}
