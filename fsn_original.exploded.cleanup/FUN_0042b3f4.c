/**
 * FUN_0042b3f4
 *
 * Extracted from fsn.c lines 67332-67365
 * Ghidra address: 0x0042b3f4
 * Category: UI
 */

void FUN_0042b3f4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_4;
  
  if (DAT_100079c0 != 0) {
    XtUnmanageChild(DAT_100079c0);
  }
  local_28 = XmStringCreateLtoR(*param_2,&default_charset);
  local_2c = 0xe3f42e0;
  uVar1 = toplevel;
  if (*(char *)(param_2 + 2) != '\0') {
    uVar1 = param_1;
  }
  local_4 = local_28;
  DAT_100079c0 = XmCreateInformationDialog(uVar1,"HelpDialog",&local_2c,1);
  if (param_2[1] == 0) {
    uVar1 = XmMessageBoxGetChild(DAT_100079c0,7);
    XtUnmanageChild(uVar1);
  }
  else {
    XtAddCallback(DAT_100079c0,0xe3f3e9f,FUN_0042b3f4);
  }
  uVar1 = XmMessageBoxGetChild(DAT_100079c0,2);
  XtUnmanageChild(uVar1);
  XtAddCallback(DAT_100079c0,0xe3f44b6,FUN_0042b390);
  XtManageChild(DAT_100079c0);
  XmStringFree(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
