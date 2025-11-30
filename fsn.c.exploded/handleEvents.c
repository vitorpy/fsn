/**
 * handleEvents
 *
 * Extracted from fsn.c lines 39034-39057
 * Category: Filesystem
 */

void handleEvents(void)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  iVar1 = XtAppPending(app_context);
  if (iVar1 == 0) {
    iVar1 = check_gl_ready();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      XtAppNextEvent(app_context,auStack_60);
      XtDispatchEvent(auStack_60);
      iVar1 = XtAppPending(app_context);
    } while (iVar1 != 0);
    iVar1 = check_gl_ready();
  } while (iVar1 != 0);
LAB_00411a50:
  reset_view_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
