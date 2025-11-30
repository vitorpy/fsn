/**
 * FUN_0042b5ac
 *
 * Extracted from fsn.c lines 67371-67396
 * Ghidra address: 0x0042b5ac
 * Category: Other
 */

void FUN_0042b5ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_res8 [2];
  
  local_res8[0] = param_3;
  if (DAT_10007c28 == 0) {
    DAT_10007c28 = XCreateFontCursor(display,0x5c);
  }
  iVar1 = XmTrackingLocate(toplevel,DAT_10007c28,0);
  if (iVar1 != 0) {
    *local_res8[0] = 1;
    do {
      iVar2 = XtHasCallbacks(iVar1,0xe3f3e9f);
      if (iVar2 == 2) {
        XtCallCallbacks(iVar1,0xe3f3e9f,local_res8);
        halt_baddata();
      }
      iVar1 = XtParent(iVar1);
    } while (iVar1 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
