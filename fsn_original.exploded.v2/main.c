/**
 * main
 *
 * Extracted from fsn.c lines 49604-49813
 * Category: UI
 */

void main(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iStackX_0;
  undefined4 *puStackX_4;
  undefined1 auStack_124 [100];
  char *pcStack_c0;
  char *pcStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_a0 = 0xf662094;
  uStack_9c = 1;
  iStackX_0 = param_1;
  puStackX_4 = param_2;
  toplevel = XtAppInitialize(&app_context,&DAT_1000a178,&PTR_s__landscape_100000e0,5,&iStackX_0,
                             param_2,&fallback_resources,&uStack_a0,1);
  display = XtDisplay(toplevel);
  FUN_0042b844(toplevel);
  if (iStackX_0 < 2) {
    if (DAT_10017498 == '\0') {
      pcStack_bc = getcwd((char *)0x0,0x400);
    }
    else {
      pcStack_bc = ".";
    }
  }
  else if ((2 < iStackX_0) || (pcStack_bc = (char *)puStackX_4[1], *pcStack_bc == '-')) {
    fprintf((FILE *)0xfb52904,
            "usage:  %s [-landscape <landscapeName>] [-relative] \n\t[-db <filename>|-dbdir <directory>] [-noscan] [dirname]\n\n\tKnown landscapes are grass, ocean, desert, space,\nand indigo (similar to grass, but looks better on indigo)\n\t-relative uses relative instead of absolute pathnames\n\t-db or -dbdir control where the database is stored\n\t-noscan avoids rescanning directories when visited\n"
            ,*puStackX_4);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  FUN_0040ae2c();
  FUN_00411674();
  FUN_0040a704();
  DAT_10016634 = XtParseTranslationTable(glwidget_translations);
  blankXmString = XmStringCreate(&DAT_1000a2fc,&default_charset);
  emptyXmString = XmStringCreate(&DAT_1000a300,&default_charset);
  uVar1 = XtDisplay(toplevel);
  uVar1 = XmInternAtom(uVar1,"WM_PROTOCOLS",0);
  uVar2 = XmInternAtom(display,"WM_DELETE_WINDOW",0);
  XmAddProtocolCallback(toplevel,uVar1,uVar2,quit_application,0);
  XtAppAddActions(app_context,&DAT_10000024,0x10);
  uStack_a8 = XtCreateManagedWidget("mainw",_DAT_0e3d4f98,toplevel,&uStack_a0,0);
  install_help_callback(uStack_a8,&topHelp);
  uStack_ac = FUN_0040dff8(uStack_a8);
  panel_widget = XtCreateManagedWidget("panel",_DAT_0e3d331c,uStack_a8,&uStack_a0,0);
  uStack_a0 = 0xe3f40cb;
  uStack_98 = 0xe3f4b1d;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_84 = FUN_0040d3cc(panel_widget,&uStack_a0,2);
  uStack_88 = 0xe3f40f2;
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f3701;
  uStack_90 = 0xe3f40cb;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_8c = 3;
  DAT_1001665c = uStack_84;
  panel_vsep_widget = XtCreateManagedWidget("panelvsep",_DAT_0e3d8f04,panel_widget,&uStack_a0,4);
  FUN_0040df80();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    DAT_100000a4 = 0x3000;
  }
  uStack_8c = panel_vsep_widget;
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f40cb;
  uStack_90 = 0xe3f40f2;
  uStack_9c = 1;
  uStack_94 = 3;
  uStack_b8 = XmCreateLabel(panel_widget,"messageHeader",&uStack_a0,3);
  XtManageChild(uStack_b8);
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f40cb;
  uStack_90 = 0xe3f40f2;
  uStack_88 = 0xe3f46dd;
  uStack_9c = 1;
  uStack_94 = 3;
  uStack_84 = 1;
  uStack_8c = uStack_b8;
  message_widget = XmCreateLabel(panel_widget,"message",&uStack_a0,4);
  XtManageChild(message_widget);
  install_help_callback(message_widget,&messageHelp);
  set_status_message("a 3D File System Navigator",0);
  uStack_98 = 0xe3f4ba9;
  uStack_94 = message_widget;
  uStack_a0 = 0xe3f4b1d;
  uStack_70 = 0xe3f469e;
  uStack_7c = panel_vsep_widget;
  uStack_9c = 3;
  uStack_90 = 0xe3f3701;
  uStack_88 = 0xe3f40cb;
  uStack_80 = 0xe3f40f2;
  uStack_78 = 0xe3f46dd;
  uStack_68 = 0xe3f46c4;
  uStack_8c = 1;
  uStack_84 = 3;
  uStack_74 = 1;
  uStack_6c = 0;
  uStack_64 = 0;
  pane_form_widget = XmCreateForm(panel_widget,"paneForm",&uStack_a0,8);
  XtManageChild(pane_form_widget);
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f3701;
  uStack_90 = 0xe3f40cb;
  uStack_88 = 0xe3f46dd;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_8c = 1;
  uStack_84 = 1;
  DAT_1001664c = XtCreateManagedWidget(&DAT_1000a384,_DAT_0e3d616c,pane_form_widget,&uStack_a0,4);
  FUN_0040a7ec();
  XtManageChild(*(undefined4 *)(curcontextwindows + 0xc));
  XmMainWindowSetAreas(uStack_a8,uStack_ac,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  FUN_0042fb84(toplevel);
  XtSetSensitive(DAT_1001665c,0);
  XtSetSensitive(uStack_ac,0);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 8),0);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 0xc),0);
  set_main_gl_window();
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f4ba9;
  uStack_9c = 4;
  uStack_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  uStack_90 = 0xe3f3701;
  uStack_88 = 0xe3f3753;
  uStack_8c = 4;
  uStack_84 = *(undefined4 *)(curcontextwindows + 8);
  uStack_80 = 0xe3f40cb;
  uStack_78 = 0xe3f40f2;
  uStack_7c = 4;
  uStack_74 = *(undefined4 *)(curcontextwindows + 8);
  uStack_70 = 0xe3f46dd;
  uStack_68 = 0xe3f4707;
  uStack_6c = 4;
  uStack_64 = *(undefined4 *)(curcontextwindows + 8);
  FUN_0042aed4(*(undefined4 *)(curcontextwindows + 0xc),&uStack_a0,8);
  FUN_00433af4("/usr/lib/filetype/workspace.ctr");
  FUN_00427d54();
  FUN_00433f74();
  FUN_00428b6c();
  if ((*pcStack_bc != '/') && (DAT_10017498 == '\0')) {
    pcStack_c0 = getcwd((char *)0x0,0x400);
    strcat(pcStack_c0,"/");
    strcat(pcStack_c0,pcStack_bc);
    pcStack_bc = pcStack_c0;
  }
  FUN_004174d0(pcStack_bc);
  update_display();
  if (initialOverview != '\0') {
    showOverview();
  }
  if ((curcontext[0xc51] == '\0') || (altcontext[0xc51] == '\0')) {
    if (curcontext[0xc51] == '\0') {
      curcontext[0xc51] = 1;
    }
  }
  else {
    FUN_00411230();
  }
  if (initialLegend != '\0') {
    FUN_0040da94();
  }
  if (initialControls != '\0') {
    FUN_0040dee0();
  }
  FUN_0040ed40();
  XtSetSensitive(DAT_1001665c,1);
  XtSetSensitive(uStack_ac,1);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 8),1);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 0xc),1);
  FUN_0042b08c();
  FUN_00415550();
  FUN_00427f5c();
  FUN_0042fd50(toplevel);
  do {
    if ((redraw_flag != '\0') && (iVar3 = XtAppPending(app_context), iVar3 == 0)) {
      redraw_gl_scene();
      redraw_flag = '\0';
    }
    XtAppNextEvent(app_context,auStack_124);
    XtDispatchEvent(auStack_124);
  } while( true );
}
