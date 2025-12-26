/**
 * showOverview
 *
 * Extracted from fsn.c lines 60574-60592
 * Category: Other
 */

void showOverview(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_10006eb4 == 0) {
    FUN_0041fdf0();
  }
  else {
    XtManageChild();
    uVar1 = XtDisplay(DAT_10006eb4);
    uVar2 = XtWindow(DAT_10006eb4);
    XMapWindow(uVar1,uVar2);
    XRaiseWindow(display,DAT_10016c08);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420318):
     * Function: showOverview
     *
     * Looking at this MIPS assembly with GP-relative addressing:
     * **What it does:**
     * 1. Calls XtName() on curcontextwindows[0x6eb4/4] (offset 7093 = widget at byte offset 0x6eb4)
     * 2. Calls XtVaSetValues(widget_from_sp, XtNtitle, name_result)
     * 3. Calls XRaiseWindow(display, curcontextwindows[0x6c08/4])
     * 4. Sets a global flag to 1, then returns
     * **C pseudocode:**
     * ```c
     * // After halt_baddata marker in showOverview:
     * char *name = XtName(((Widget*)curcontextwindows)[0x6eb4/sizeof(Widget)]);
     * XtVaSetValues(saved_widget, XtNtitle, name, NULL);
     * XRaiseWindow(display, ((Window*)curcontextwindows)[0x6c08/sizeof(Window)]);
     * overview_visible = 1;  // global flag at gp-30404
     * ```
     * **GP offsets resolved:**
     * - gp-32664 (0x8068): curcontextwindows
     * - gp-31896 (0x8368): XtName
     * - gp-32444 (0x8144): XtVaSetValues
     * - gp-30204 (0x8a04): display (pointer to Display*)
     * - gp-32660 (0x806c): curcontextwindows (again, for window ID)
     * - gp-32388 (0x817c): XRaiseWindow
     * - gp-30404 (0x893c): overview_visible flag
     */
halt_baddata();
}
