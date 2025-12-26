/**
 * FUN_0042d338
 *
 * Extracted from fsn.c lines 68084-68142
 * Ghidra address: 0x0042d338
 * Category: UI
 */

void FUN_0042d338(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_34;
  char *local_30;
  undefined4 local_28 [10];
  
  if (file_selection_dialog == 0) {
    local_30 = (char *)XmTextFieldGetString(DAT_10016e48);
    iVar4 = 0;
    if (local_30 != (char *)0x0) {
      pcVar3 = strrchr(local_30,0x2f);
      if (pcVar3 == (char *)0x0) {
        XtFree(local_30);
        iVar4 = 0;
        local_30 = (char *)0x0;
      }
      else {
        *pcVar3 = '\0';
        local_34 = XmStringCreateSimple(local_30);
        local_28[0] = 0xe3f3b57;
        iVar4 = 1;
        *pcVar3 = '/';
        local_28[1] = local_34;
      }
    }
    local_28[iVar4 * 2] = 0xe3f36bf;
    local_28[iVar4 * 2 + 1] = 1;
    file_selection_dialog = XmCreateFileSelectionDialog(param_1,"preferenceFileSB",local_28,iVar4 + 1);
    if (local_30 != (char *)0x0) {
      XmStringFree(local_34);
      uVar1 = XmStringCreateSimple(local_30);
      local_28[0] = 0xe3f3b4f;
      local_28[1] = uVar1;
      XtSetValues(file_selection_dialog,local_28,1);
      XmStringFree(uVar1);
    }
    XtAddCallback(file_selection_dialog,0xe3f44b6,FUN_0042d28c);
    XtAddCallback(file_selection_dialog,0xf6615c9,FUN_0042d314);
    uVar1 = XmFileSelectionBoxGetChild(file_selection_dialog,7);
    XtUnmanageChild(uVar1);
    XtManageChild(file_selection_dialog);
  }
  else {
    XtManageChild(file_selection_dialog);
    uVar1 = XtDisplay(file_selection_dialog);
    uVar2 = XtWindow(file_selection_dialog);
    XMapWindow(uVar1,uVar2);
    uVar1 = XtDisplay(file_selection_dialog);
    uVar2 = XtWindow(file_selection_dialog);
    XRaiseWindow(uVar1,uVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042d338):
     * Function: FUN_0042d338
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
