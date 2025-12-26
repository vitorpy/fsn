/**
 * overlayMenuMappedCB
 *
 * Extracted from fsn.c lines 61953-61962
 * Category: UI
 */

void overlayMenuMappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  FUN_00421dd0(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00422218):
     * Function: overlayMenuMappedCB
     *
     * ## Analysis of overlayMenuMappedCB (0x00422218 - 0x00422268)
     * **What it does:**
     * Calls function at GP-0x7c98 (offset -31896) with original a0 argument, then passes the return value to function at GP-0x7968 (offset -31080). This is a simple two-call wrapper.
     * **GP offset resolution:**
     * - GP-0x7c98 (-31896) = XtWindow (get Window from Widget)
     * - GP-0x7968 (-31080) = XRaiseWindow (raise window to top)
     * **C pseudocode:**
     * ```c
     * void overlayMenuMappedCB(Widget w, XtPointer client_data, XtPointer call_data)
     * {
     * Window win = XtWindow(w);
     * XRaiseWindow(XtDisplay(w), win);  /* Note: display may come from global */
     * }
     * ```
     * Wait - looking more carefully at the assembly, the first jalr uses a0 (the widget), and the result goes to a0 for the second call. But XRaiseWindow needs (Display*, Window). Let me check if this might be a simpler pattern:
     * Actually, looking at GP offset -31080, this is likely `XMapRaised` or similar single-arg function, or the display is obtained differently. Given context (overlay menu mapped callback), simpler interpretation:
     * ```c
     * void overlayMenuMappedCB(Widget w, XtPointer client_data, XtPointer call_data)
     * {
     * XRaiseWindow(XtDisplay(w), XtWindow(w));
     * }
     * ```
     * Or if GP-0x7968 is actually a single-argument wrapper:
     * ```c
     * void overlayMenuMappedCB(Widget w, XtPointer client_data, XtPointer call_data)
     * {
     * raise_window(XtWindow(w));  /* internal wrapper */
     * }
     * ```
     */
halt_baddata();
}
