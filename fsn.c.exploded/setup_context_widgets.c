/**
 * setup_context_widgets
 *
 * Extracted from fsn.c lines 36747-36890
 * Category: UI
 */

void setup_context_widgets(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar1 = XtCreateWidget("contextTopWidget",xmFormWidgetClass,context_top_widget,&local_a0,0);
  *(undefined4 *)(curcontextwindows + 0xc) = uVar1;
  install_help_callback(*(undefined4 *)(curcontextwindows + 0xc),&infoHelp);
  local_9c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f40cb;
  local_90 = 0xe3f46dd;
  local_94 = 1;
  local_8c = 1;
  local_94 = create_context_widget(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,3);
  local_8c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_9c = 3;
  local_84 = 1;
  local_94 = XtCreateManagedWidget
                       ("panelhsep",xmSeparatorWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),&local_a0
                        ,4);
  local_7c = blankXmString;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_80 = 0xe3f40b5;
  local_9c = 3;
  local_8c = 1;
  local_84 = 1;
  uVar1 = 5;
  if (context_count != 0) {
    local_74 = cached_context_ptr;
    local_78 = (char *)0xf6615f6;
    local_6c = (undefined4 *)lhLabelColor;
    local_70 = (char *)0xf661554;
    uVar1 = 7;
  }
  uVar1 = XtCreateManagedWidget
                    ("locateHighlightName",xmLabelWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),
                     &local_a0,uVar1);
  *(undefined4 *)(curcontextwindows + 0x2c) = uVar1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 3;
  local_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  local_84 = 1;
  local_90 = 0xe3f3701;
  local_88 = 0xe3f40cb;
  local_80 = 0xe3f46dd;
  local_8c = 1;
  local_7c = 1;
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    local_78 = "useOverlay";
  }
  else {
    local_78 = "usePopup";
  }
  local_74 = 1;
  local_70 = "glxConfig";
  local_6c = &display_mode_flags;
  uVar1 = XtCreateManagedWidget
                    ("glwidget",glxMDrawWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),&local_a0,7);
  *(undefined4 *)(curcontextwindows + 8) = uVar1;
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"exposeCallback",glwidget_expose_callback,0);
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    pcVar3 = "overlayExposeWindow";
  }
  else {
    pcVar3 = "popupExposeWindow";
  }
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),pcVar3,gl_input_callback,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"resizeCallback",glwidget_resize_callback,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"ginitCallback",glwidget_init_callback,0);
  XtOverrideTranslations(*(undefined4 *)(curcontextwindows + 8),glwidget_translations);
  install_help_callback(*(undefined4 *)(curcontextwindows + 8),&glHelp);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 4;
  local_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  local_90 = 0xe3f3701;
  local_88 = 0xe3f3753;
  local_8c = 4;
  local_84 = *(undefined4 *)(curcontextwindows + 8);
  local_80 = 0xe3f40cb;
  local_78 = (char *)0xe3f40f2;
  local_7c = 4;
  local_74 = *(undefined4 *)(curcontextwindows + 8);
  local_70 = (char *)0xe3f46dd;
  local_68 = 0xe3f4707;
  local_6c = (undefined4 *)0x4;
  local_64 = *(undefined4 *)(curcontextwindows + 8);
  get_window_properties(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,8);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 4;
  local_94 = *(undefined4 *)(curcontextwindows + 8);
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f40f2;
  local_8c = 4;
  local_84 = *(undefined4 *)(curcontextwindows + 8);
  if (curcontextid == 0) {
    pcVar3 = "activeButton0";
  }
  else {
    pcVar3 = "activeButton1";
  }
  uVar1 = XmCreateForm(*(undefined4 *)(curcontextwindows + 0xc),pcVar3,&local_a0,4);
  *(undefined4 *)(curcontextwindows + 0x24) = uVar1;
  uVar1 = XmCreateBulletinBoard
                    (*(undefined4 *)(curcontextwindows + 0x24),"activeButtonMask",&local_a0,0);
  *(undefined4 *)(curcontextwindows + 0x28) = uVar1;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x28));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x24),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x28),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
