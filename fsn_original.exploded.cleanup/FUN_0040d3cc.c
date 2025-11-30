/**
 * FUN_0040d3cc
 *
 * Extracted from fsn.c lines 50633-50674
 * Ghidra address: 0x0040d3cc
 * Category: UI
 */

void FUN_0040d3cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = XmCreateRowColumn(param_1,"controls",param_2,param_3);
  XtManageChild(uVar1);
  install_help_callback(uVar1,&controlHelp);
  uVar2 = XmCreatePushButton(uVar1,"reset",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,reset_eye,0);
  uVar2 = XmCreatePushButton(uVar1,&DAT_1000a458,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0041069c,0);
  uVar2 = XmCreatePushButton(uVar1,&DAT_1000a460,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0040d15c,0);
  uVar2 = XmCreatePushButton(uVar1,"front",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0040d2cc,0);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  uVar2 = XmCreateRowColumn(uVar1,"control_scales",param_2,0);
  XtManageChild(uVar2);
  DAT_10016640 = XmCreateScale(uVar2,"v_scale",param_2,0);
  XtAddCallback(DAT_10016640,0xe3f4ca5,FUN_0040d9a8,0);
  XtAddCallback(DAT_10016640,0xe3f3b93,FUN_0040d9a8,0);
  XtManageChild(DAT_10016640);
  DAT_10016644 = XmCreateScale(uVar2,"z_scale",param_2,0);
  XtAddCallback(DAT_10016644,0xe3f4ca5,FUN_0040da14,0);
  XtAddCallback(DAT_10016644,0xe3f3b93,FUN_0040da14,0);
  XtManageChild(DAT_10016644);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  FUN_00430cb4(uVar1);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  FUN_0042f284(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
