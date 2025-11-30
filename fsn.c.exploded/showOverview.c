/**
 * showOverview
 *
 * Extracted from fsn.c lines 46157-46175
 * Category: Other
 */

void showOverview(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (overview_popup_shell == 0) {
    render_overview_frame();
  }
  else {
    XtManageChild();
    uVar1 = XtDisplay(overview_popup_shell);
    uVar2 = XtWindow(overview_popup_shell);
    XMapWindow(uVar1,uVar2);
    XRaiseWindow(display,overview_x_window);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
