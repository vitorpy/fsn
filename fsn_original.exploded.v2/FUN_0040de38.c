/**
 * FUN_0040de38
 *
 * Extracted from fsn.c lines 50868-50884
 * Ghidra address: 0x0040de38
 * Category: UI
 */

void FUN_0040de38(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  
  legendShowing = 0;
  if (legend_widget != 0) {
    local_50 = 0xe3f3701;
    local_4c = 1;
    XtSetValues(pane_form_widget,&local_50,1);
    XtUnmanageChild(DAT_10016658);
    XtUnmanageChild(legend_widget);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040de38):
     * Function: FUN_0040de38
     *
     * Looking at this assembly and using the GP mappings from the project:
     * **1. What it does:**
     * Calls XtSetValues on curcontext[0x6650/4] (widget at offset 0x1994) with an Xt arg list containing resource 0x1399 (XmNset) = 1. Then calls XtUnmanageChild on widgets at offsets 0x6658 and 0x6654 from curcontext.
     * **2. C pseudocode:**
     * ```c
     * Arg args[1];
     * XtSetArg(args[0], XmNset, 1);
     * XtSetValues(((Widget*)curcontext)[0x1994], args, 1);
     * XtUnmanageChild(((Widget*)curcontext)[0x1996]);  /* offset 0x6658 */
     * XtUnmanageChild(((Widget*)curcontext)[0x1995]);  /* offset 0x6654 */
     * ```
     * GP offsets resolved: -32660 (0x806c) = curcontext, -31936 (0x8340) = XtSetValues, -31600 (0x8490) = XtUnmanageChild. The resource string 0x1399 = 5017 decimal corresponds to XmNset (toggle button state).
     */
halt_baddata();
}
