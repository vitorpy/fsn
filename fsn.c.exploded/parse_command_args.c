/**
 * parse_command_args
 *
 * Extracted from fsn.c lines 37131-37340
 * Category: UI
 */

void parse_command_args(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_res0;
  undefined4 *local_res4;
  undefined1 auStack_124 [100];
  char *local_c0;
  char *local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
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
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_a0 = 0xf662094;
  local_9c = 1;
  local_res0 = param_1;
  local_res4 = param_2;
  toplevel = XtAppInitialize(&app_context,&app_class_name,&PTR_s__landscape_100000e0,5,&local_res0,
                             param_2,&fallback_resources,&local_a0,1);
  display = XtDisplay(toplevel);
  init_toplevel_resources(toplevel);
  if (local_res0 < 2) {
    if (relative_path_flag == '\0') {
      local_bc = getcwd((char *)0x0,0x400);
    }
    else {
      local_bc = ".";
    }
  }
  else if ((2 < local_res0) || (local_bc = (char *)local_res4[1], *local_bc == '-')) {
    fprintf((FILE *)0xfb52904,
            "usage:  %s [-landscape <landscapeName>] [-relative] \n\t[-db <filename>|-dbdir <directory>] [-noscan] [dirname]\n\n\tKnown landscapes are grass, ocean, desert, space,\nand indigo (similar to grass, but looks better on indigo)\n\t-relative uses relative instead of absolute pathnames\n\t-db or -dbdir control where the database is stored\n\t-noscan avoids rescanning directories when visited\n"
            ,*local_res4);
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
  local_a8 = XtCreateManagedWidget("mainw",xmMainWindowWidgetClass,toplevel,&local_a0,0);
  install_help_callback(local_a8,&topHelp);
  local_ac = get_panel_value(local_a8);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,local_a8,&local_a0,0);
  local_a0 = 0xe3f40cb;
  local_98 = 0xe3f4b1d;
  local_9c = 1;
  local_94 = 1;
  local_84 = create_panel_component(panel_widget,&local_a0,2);
  local_88 = 0xe3f40f2;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f3701;
  local_90 = 0xe3f40cb;
  local_9c = 1;
  local_94 = 1;
  local_8c = 3;
  copy_button_widget = local_84;
  panel_vsep_widget = XtCreateManagedWidget("panelvsep",xmSeparatorWidgetClass,panel_widget,&local_a0,4);
  init_panel_layout();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    display_mode_flags = 0x3000;
  }
  local_8c = panel_vsep_widget;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f40cb;
  local_90 = 0xe3f40f2;
  local_9c = 1;
  local_94 = 3;
  local_b8 = XmCreateLabel(panel_widget,"messageHeader",&local_a0,3);
  XtManageChild(local_b8);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f40cb;
  local_90 = 0xe3f40f2;
  local_88 = 0xe3f46dd;
  local_9c = 1;
  local_94 = 3;
  local_84 = 1;
  local_8c = local_b8;
  message_widget = XmCreateLabel(panel_widget,"message",&local_a0,4);
  XtManageChild(message_widget);
  install_help_callback(message_widget,&messageHelp);
  set_status_message("a 3D File System Navigator",0);
  local_98 = 0xe3f4ba9;
  local_94 = message_widget;
  local_a0 = 0xe3f4b1d;
  local_70 = 0xe3f469e;
  local_7c = panel_vsep_widget;
  local_9c = 3;
  local_90 = 0xe3f3701;
  local_88 = 0xe3f40cb;
  local_80 = 0xe3f40f2;
  local_78 = 0xe3f46dd;
  local_68 = 0xe3f46c4;
  local_8c = 1;
  local_84 = 3;
  local_74 = 1;
  local_6c = 0;
  local_64 = 0;
  pane_form_widget = XmCreateForm(panel_widget,"paneForm",&local_a0,8);
  XtManageChild(pane_form_widget);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f3701;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_9c = 1;
  local_94 = 1;
  local_8c = 1;
  local_84 = 1;
  context_top_widget = XtCreateManagedWidget(&context_widget_name,xmDrawingAreaWidgetClass,pane_form_widget,&local_a0,4);
  setup_context_widgets();
  XtManageChild(*(undefined4 *)(curcontextwindows + 0xc));
  XmMainWindowSetAreas(local_a8,local_ac,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  post_realize_setup(toplevel);
  XtSetSensitive(copy_button_widget,0);
  XtSetSensitive(local_ac,0);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 8),0);
  XtSetSensitive(*(undefined4 *)(curcontextwindows + 0xc),0);
  set_main_gl_window();
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 4;
  local_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  local_90 = 0xe3f3701;
  local_88 = 0xe3f3753;
  local_8c = 4;
  local_84 = *(undefined4 *)(curcontextwindows + 8);
  local_80 = 0xe3f40cb;
  local_78 = 0xe3f40f2;
  local_7c = 4;
  local_74 = *(undefined4 *)(curcontextwindows + 8);
  local_70 = 0xe3f46dd;
  local_68 = 0xe3f4707;
  local_6c = 4;
  local_64 = *(undefined4 *)(curcontextwindows + 8);
  set_window_property(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,8);
  load_filetype_rules_wrapper("/usr/lib/filetype/workspace.ctr");
  init_gl_lists();
  init_icon_context();
  setup_rendering();
  if ((*local_bc != '/') && (relative_path_flag == '\0')) {
    local_c0 = getcwd((char *)0x0,0x400);
    strcat(local_c0,"/");
    strcat(local_c0,local_bc);
    local_bc = local_c0;
  }
  display_status_message(local_bc);
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
  XtSetSensitive(local_ac,1);
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
