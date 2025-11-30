/**
 * createSelectedInfo
 *
 * Extracted from fsn.c lines 44077-44128
 * Category: UI
 */

void createSelectedInfo(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  move_file_xmstring = XmStringCreate("Move file",&default_charset);
  move_out_label = XmStringCreate("Move file out",&default_charset);
  move_in_label = XmStringCreate("Move file in",&default_charset);
  copy_file_xmstring = XmStringCreate("Copy file",&default_charset);
  copy_out_label = XmStringCreate("Copy file out",&default_charset);
  copy_in_label = XmStringCreate("Copy file in",&default_charset);
  link_file_xmstring = XmStringCreate("Link file",&default_charset);
  link_out_label = XmStringCreate("Link file out",&default_charset);
  link_in_label = XmStringCreate("Link file in",&default_charset);
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
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f4ca5,gl_toggle_callback,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f35b3,gl_button_callback,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x10,0,gl_motion_handler,
                    *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x20,0,gl_event_handler,0);
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
