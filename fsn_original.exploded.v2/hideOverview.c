/**
 * hideOverview
 *
 * Extracted from fsn.c lines 61049-61058
 * Category: Other
 */

void hideOverview(void)

{
  if (DAT_10006eb4 != 0) {
    overviewActive = 0;
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421124):
     * Function: hideOverview
     *
     * Looking at the assembly:
     * 1. **What it does:** Loads a widget pointer from curcontext+0x6eb4 (offset 28340), checks if non-NULL. If valid, clears a global flag byte to 0 and calls XtUnmanageChild on the widget.
     * 2. **C pseudocode:**
     * ```c
     * void hideOverview(Widget w, XtPointer client_data, XtPointer call_data) {
     * Widget overview_widget = ((Widget*)curcontext)[0x6eb4/4];  // offset 7093 as int index
     * if (overview_widget != NULL) {
     * overview_visible = 0;  // DAT at gp-30404 (0x893c)
     * XtUnmanageChild(overview_widget);  // gp-31600 (0x8490)
     * }
     * }
     * ```
     * GP offsets resolved:
     * - gp-32664 (0x8068) → curcontext pointer
     * - gp-30404 (0x893c) → overview_visible flag (byte)
     * - gp-31600 (0x8490) → XtUnmanageChild function pointer
     */
halt_baddata();
}
