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
  halt_baddata();
}
