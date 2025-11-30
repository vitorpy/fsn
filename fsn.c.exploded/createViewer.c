/**
 * createViewer
 *
 * Extracted from fsn.c lines 51255-51303
 * Category: UI
 */

void createViewer(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = XmCreateForm(param_1,"viewer",param_2,param_3);
  *(undefined4 *)(curcontextwindows + 0x10) = uVar1;
  install_help_callback(*(undefined4 *)(curcontextwindows + 0x10),&viewerHelp);
  *param_2 = 0xe3f3701;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  uVar1 = XmCreateRowColumn(*(undefined4 *)(curcontextwindows + 0x10),"viewerButtons",param_2,3);
  XtManageChild(uVar1);
  XtAddEventHandler(uVar1,4,0,window_event_handler,*(undefined4 *)(curcontextwindows + 8));
  uVar2 = XmCreatePushButton(uVar1,&gl_button_name,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,gl_window_callback,*(undefined4 *)(curcontextwindows + 8));
  uVar2 = XmCreatePushButton(uVar1,&edit_button_name,param_2,0);
  XtAddCallback(uVar2,0xe3f35b3,editCB,*(undefined4 *)(curcontextwindows + 8));
  XtManageChild(uVar2);
  uVar2 = XmCreatePushButton(uVar1,"saveFile",param_2,0);
  *(undefined4 *)(curcontextwindows + 0x18) = uVar2;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x18));
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x18),0xe3f35b3,context_menu_callback,
                *(undefined4 *)(curcontextwindows + 8));
  *param_2 = 0xe3f4b1d;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  param_2[6] = 0xe3f3701;
  param_2[7] = 3;
  param_2[8] = 0xe3f3753;
  param_2[9] = uVar1;
  param_2[10] = 0xe3f3d12;
  param_2[0xb] = 0;
  uVar1 = XmCreateScrolledText(*(undefined4 *)(curcontextwindows + 0x10),"viewerText",param_2,6);
  *(undefined4 *)(curcontextwindows + 0x14) = uVar1;
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x14),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x14));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
