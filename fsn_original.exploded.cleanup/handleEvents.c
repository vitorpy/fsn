/**
 * handleEvents
 *
 * Extracted from fsn.c lines 52417-52440
 * Category: Other
 */

void handleEvents(void)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  iVar1 = XtAppPending(app_context);
  if (iVar1 == 0) {
    iVar1 = FUN_0040f1f0();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      XtAppNextEvent(app_context,auStack_60);
      XtDispatchEvent(auStack_60);
      iVar1 = XtAppPending(app_context);
    } while (iVar1 != 0);
    iVar1 = FUN_0040f1f0();
  } while (iVar1 != 0);
LAB_00411a50:
  FUN_0040cf50();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
