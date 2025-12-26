/**
 * myContext
 *
 * Extracted from fsn.c lines 66720-66726
 * Category: Other
 */

void myContext(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a960):
     * Function: myContext
     *
     * Based on my analysis:
     * ---
     * **Summary for myContext (0x42a960-0x42a9a4):**
     * **1. What it does:**
     * Wrapper function that calls an Xt function (likely XtVaSetValues or similar) at GP-30856 with args (a1, NULL), ignoring a0 and a2.
     * **2. C pseudocode:**
     * ```c
     * void myContext(Widget w, ArgList args, Cardinal num_args) {
     * /* GP-30856: XtSetValues or similar Xt function */
     * XtSetValues(args, NULL);  /* Only passes args, ignores widget and count */
     * }
     * ```
     * Given the function name "myContext" and that it's near other context-related functions (newcontext, swapcontext, savecontext, etc. at 0x42a4c8-0x42a88c), this appears to be a thin wrapper around an Xt intrinsics call, possibly for setting context-related widget attributes. The unusual signature (ignoring a0 and a2) suggests it may be a callback adapter or specialized context operation.
     */
halt_baddata();
}
