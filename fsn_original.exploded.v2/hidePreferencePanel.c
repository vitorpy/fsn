/**
 * hidePreferencePanel
 *
 * Extracted from fsn.c lines 67898-67906
 * Category: UI
 */

void hidePreferencePanel(void)

{
  if (DAT_10008940 != 0) {
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042cc54):
     * Function: hidePreferencePanel
     *
     * ## Analysis
     * **What it does:**
     * Loads a widget pointer from global data (offset -30400 from a base pointer at GP-32660). If the widget is non-NULL, calls XtUnmanageChild (at GP-31600) to hide it. This is a standard Motif pattern for hiding a preference dialog.
     * **C pseudocode:**
     * ```c
     * void hidePreferencePanel(Widget w, XtPointer client_data, XtPointer call_data)
     * {
     * // DAT_10008940 is the base pointer, offset -30400 (0x8940) gives preference panel widget
     * Widget prefPanel = *(Widget *)((char *)DAT_10008940 - 30400);
     * if (prefPanel != NULL) {
     * XtUnmanageChild(prefPanel);
     * }
     * }
     * ```
     * **GP offset resolution:**
     * - GP-32660 (0x806c) → pointer to data structure base (likely DAT_10008940 or similar)
     * - Offset -30400 (0x8940) within that structure → preference panel widget
     * - GP-31600 (0x8490) → XtUnmanageChild function pointer
     */
halt_baddata();
}
