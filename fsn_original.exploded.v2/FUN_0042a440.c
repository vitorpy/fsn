/**
 * FUN_0042a440
 *
 * Extracted from fsn.c lines 66383-66392
 * Ghidra address: 0x0042a440
 * Category: Other
 */

void FUN_0042a440(undefined4 param_1,undefined4 param_2,int param_3)

{
  set_gl_context(param_2,0);
  if (param_3->pos_x /* was: *(int *)(param_3 + 0x34) */ == 1) {
    XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x10));
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a440):
     * Function: FUN_0042a440
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls a function via GP-30856 with (a1, 0) as args. Then checks if param3[13] (offset 52) == 1; if so, loads a global pointer, gets its field at offset 16, and calls another function via GP-31600 with that as the argument.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042a440(undefined4 param1, undefined4 param2, int *param3) {
     * some_func(param2, 0);           // GP-30856
     * if (param3[13] == 1) {          // offset 52 = index 13
     * XRaiseWindow(curcontext[4]); // GP-31600 = XRaiseWindow, curcontext[4] = display's window
     * }
     * }
     * ```
     * GP offsets to resolve: -30856 (likely XtVaSetValues or similar), -31600 (XRaiseWindow), -30332 (curcontext pointer).
     */
halt_baddata();
}
