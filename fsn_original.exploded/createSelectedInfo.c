/**
 * createSelectedInfo
 *
 * Extracted from fsn.c lines 58056-58107
 * Category: UI
 */

void createSelectedInfo(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAT_10016b30 = XmStringCreate("Move file",&default_charset);
  DAT_10016b34 = XmStringCreate("Move file out",&default_charset);
  DAT_10016b38 = XmStringCreate("Move file in",&default_charset);
  DAT_10016b3c = XmStringCreate("Copy file",&default_charset);
  DAT_10016b40 = XmStringCreate("Copy file out",&default_charset);
  DAT_10016b44 = XmStringCreate("Copy file in",&default_charset);
  DAT_10016b48 = XmStringCreate("Link file",&default_charset);
  DAT_10016b4c = XmStringCreate("Link file out",&default_charset);
  DAT_10016b50 = XmStringCreate("Link file in",&default_charset);
  uVar1 = XmCreateForm(param_1,"selectedInfo",param_2,param_3);
  XtManageChild(uVar1);
  *param_2 = 0xe3f4b1d;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  uVar2 = XmCreateTextField(uVar1,"fileName",param_2,3);
  *(undefined4 *)(curcontextwindows + 0x1c) = uVar2;
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f4ca5,FUN_0041fb20,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f35b3,FUN_0041fcc0,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x10,0,FUN_0041fa18,
                    *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x20,0,FUN_0041fadc,0);
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 0xc));
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x1c));
  *param_2 = 0xe3f4b1d;
  param_2[1] = 3;
  param_2[2] = 0xe3f4ba9;
  uVar2 = *(undefined4 *)(curcontextwindows + 0x1c);
  param_2[4] = 0xe3f40cb;
  param_2[5] = 1;
  param_2[6] = 0xe3f46dd;
  param_2[7] = 1;
  param_2[8] = 0xe3f40b5;
  param_2[3] = uVar2;
  param_2[9] = blankXmString;
  uVar1 = XmCreateLabel(uVar1,"fileInfo",param_2,5);
  *(undefined4 *)(curcontextwindows + 0x20) = uVar1;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
