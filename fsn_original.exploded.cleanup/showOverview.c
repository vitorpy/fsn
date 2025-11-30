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
  halt_baddata();
}
