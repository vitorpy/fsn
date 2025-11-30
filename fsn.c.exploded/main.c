/**
 * main
 *
 * Extracted from fsn.c lines 36916-37125
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
  toplevel = XtAppInitialize(&app_context,&app_class_name,&PTR_s__landscape_100000e0,5,&iStackX_0,
                             param_2,&fallback_resources,&uStack_a0,1);
  display = XtDisplay(toplevel);
  init_toplevel_resources(toplevel);
  if (iStackX_0 < 2) {
    if (relative_path_flag == '\0') {
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
  init_app_state();
  init_database_state();
  setup_event_handlers();
  glwidget_translations = XtParseTranslationTable(glwidget_translations);
  blankXmString = XmStringCreate(&blank_string_literal,&default_charset);
  emptyXmString = XmStringCreate(&empty_string_literal,&default_charset);
  uVar1 = XtDisplay(toplevel);
  uVar1 = XmInternAtom(uVar1,"WM_PROTOCOLS",0);
  uVar2 = XmInternAtom(display,"WM_DELETE_WINDOW",0);
  XmAddProtocolCallback(toplevel,uVar1,uVar2,quit_application,0);
  XtAppAddActions(app_context,&xt_actions_table,0x10);
  uStack_a8 = XtCreateManagedWidget("mainw",xmMainWindowWidgetClass,toplevel,&uStack_a0,0);
  install_help_callback(uStack_a8,&topHelp);
  uStack_ac = get_panel_value(uStack_a8);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,uStack_a8,&uStack_a0,0);
  uStack_a0 = 0xe3f40cb;
  uStack_98 = 0xe3f4b1d;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_84 = create_panel_component(panel_widget,&uStack_a0,2);
  uStack_88 = 0xe3f40f2;
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f3701;
  uStack_90 = 0xe3f40cb;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_8c = 3;
  copy_button_widget = uStack_84;
  panel_vsep_widget = XtCreateManagedWidget("panelvsep",xmSeparatorWidgetClass,panel_widget,&uStack_a0,4);
  init_panel_layout();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    display_mode_flags = 0x3000;
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
  context_top_widget = XtCreateManagedWidget(&context_widget_name,xmDrawingAreaWidgetClass,pane_form_widget,&uStack_a0,4);
  setup_context_widgets();
  XtManageChild(*(undefined4 *)(curcontextwindows + 0xc));
  XmMainWindowSetAreas(uStack_a8,uStack_ac,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  post_realize_setup(toplevel);
  XtSetSensitive(copy_button_widget,0);
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
  set_window_property(*(undefined4 *)(curcontextwindows + 0xc),&uStack_a0,8);
  load_filetype_rules_wrapper("/usr/lib/filetype/workspace.ctr");
  init_gl_lists();
  init_icon_context();
  setup_rendering();
  if ((*pcStack_bc != '/') && (relative_path_flag == '\0')) {
    pcStack_c0 = getcwd((char *)0x0,0x400);
    strcat(pcStack_c0,"/");
    strcat(pcStack_c0,pcStack_bc);
    pcStack_bc = pcStack_c0;
  }
  display_status_message(pcStack_bc);
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
    setup_directory_handler();
  }
  if (initialLegend != '\0') {
    toggle_legend();
  }
  if (initialControls != '\0') {
    show_controls();
  }
  init_color_menus();
  XtSetSensitive(copy_button_widget,1);
  XtSetSensitive(uStack_ac,1);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 8),1);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 0xc),1);
  init_display_state();
  init_database_display();
  setup_fam_monitoring();
  refresh_toplevel(toplevel);
  do {
    if ((redraw_flag != '\0') && (iVar3 = XtAppPending(app_context), iVar3 == 0)) {
      redraw_gl_scene();
      redraw_flag = '\0';
    }
    XtAppNextEvent(app_context,auStack_124);
    XtDispatchEvent(auStack_124);
  } while( true );
}
