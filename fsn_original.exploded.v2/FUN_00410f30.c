/**
 * FUN_00410f30
 *
 * Extracted from fsn.c lines 52113-52119
 * Ghidra address: 0x00410f30
 * Category: UI
 */

void FUN_00410f30(void)

{
  XtDestroyWidget();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410f30):
     * Function: FUN_00410f30
     *
     * **Final Answer:**
     * 1. **What it does:** This is a thin wrapper/trampoline that calls `XtDestroyWidget(a0)` via the GOT and returns. Arguments a1/a2 are saved to stack but unused (Ghidra artifact from MIPS calling convention - callee may need to spill args).
     * 2. **C pseudocode:**
     * ```c
     * // FUN_00410f30 - XtDestroyWidget wrapper (used as XtCallback)
     * // Ghidra couldn't decompile the indirect call through GOT
     * void FUN_00410f30(Widget widget, XtPointer client_data, XtPointer call_data) {
     * XtDestroyWidget(widget);
     * }
     * ```
     * **Context:** This is registered as an XtCallback (see `XtAddCallback(uVar1, 0xf6615c9, FUN_00410f30, 0)`). The callback signature matches `(Widget, XtPointer, XtPointer)` - it destroys the widget passed as the first argument, ignoring client_data and call_data. A better name would be `destroyWidgetCB` or `widget_destroy_callback`.
     */
halt_baddata();
}
