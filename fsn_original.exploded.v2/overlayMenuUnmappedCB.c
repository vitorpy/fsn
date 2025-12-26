/**
 * overlayMenuUnmappedCB
 *
 * Extracted from fsn.c lines 61938-61947
 * Category: UI
 */

void overlayMenuUnmappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  FUN_00421e58(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004221c8):
     * Function: overlayMenuUnmappedCB
     *
     * **What it does:**
     * Calls XtParent(widget) to get the parent widget, then calls XtUnmanageChild(parent) to hide it. Standard Motif callback to unmap a popup menu's parent container.
     * **C equivalent:**
     * ```c
     * void overlayMenuUnmappedCB(Widget w, XtPointer client_data, XtPointer call_data) {
     * Widget parent = XtParent(w);
     * XtUnmanageChild(parent);
     * }
     * ```
     * GP offsets resolved:
     * - gp-31896 (0x8368) = XtParent
     * - gp-31076 (0x869c) = XtUnmanageChild
     */
halt_baddata();
}
