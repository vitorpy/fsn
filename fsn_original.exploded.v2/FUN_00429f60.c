/**
 * FUN_00429f60
 *
 * Extracted from fsn.c lines 66214-66221
 * Ghidra address: 0x00429f60
 * Category: Other
 */

void FUN_00429f60(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_2,0);
  XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x10));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429f60):
     * Function: FUN_00429f60
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls a function with (a1, 0) as arguments, then loads curcontext, gets offset +16 from it, and calls another function with that value.
     * 2. **C pseudocode**:
     * ```c
     * void FUN_00429f60(void *a0, Widget widget, void *a2) {
     * // GP offset -30856 (0x8778) = likely XtSetSensitive or similar
     * some_xt_func(widget, 0);  // FALSE
     * // GP offset -30332 (0x8984) = curcontext
     * // GP offset -31600 (0x8490) = another Xt function
     * void *ctx = *curcontext;
     * Widget w = *(Widget*)(ctx + 16);  // curcontext[4] in 32-bit terms
     * another_xt_func(w);
     * }
     * ```
     * The pattern suggests this is a callback that disables a widget (XtSetSensitive(widget, False)) and then operates on curcontext[4] - likely a related UI element. The a0 and a2 parameters are saved but unused, typical of Xt callback signatures (widget, client_data, call_data).
     */
halt_baddata();
}
