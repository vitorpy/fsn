/**
 * main_entry.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "main_entry.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "messages.h"

void main(int argc,char **argv)

{
  Display *displayPtr;
  Atom wmProtocolsAtom;
  Atom wmDeleteWindowAtom;
  int iVar3;
  int argc_copy;
  char **argv_copy;
  XEvent event;
  char *pcStack_c0;
  char *pcStack_bc;
  Widget messageHeaderWidget;
  Widget menuBarWidget;
  Widget mainWindowWidget;
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
  argc_copy = argc;
  argv_copy = argv;
  toplevel = XtAppInitialize(&app_context,(String)&app_class_name,(XrmOptionDescList)&PTR_s__landscape_100000e0,5,&argc_copy,
                             argv,(String*)&fallback_resources,(ArgList)&uStack_a0,1);
  display = XtDisplay(toplevel);
  init_toplevel_resources((undefined4)toplevel);
  if (argc_copy < 2) {
    if (relative_path_flag == '\0') {
      pcStack_bc = getcwd((char *)0x0,0x400);
    }
    else {
      pcStack_bc = ".";
    }
  }
  else if ((2 < argc_copy) || (pcStack_bc = argv_copy[1], *pcStack_bc == '-')) {
    fprintf((FILE *)0xfb52904,
            "usage:  %s [-landscape <landscapeName>] [-relative] \n\t[-db <filename>|-dbdir <directory>] [-noscan] [dirname]\n\n\tKnown landscapes are grass, ocean, desert, space,\nand indigo (similar to grass, but looks better on indigo)\n\t-relative uses relative instead of absolute pathnames\n\t-db or -dbdir control where the database is stored\n\t-noscan avoids rescanning directories when visited\n"
            ,*argv_copy);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  init_app_state();
  init_database_state();
  setup_event_handlers();
  glwidget_translations = (char *)XtParseTranslationTable(glwidget_translations);
  blankXmString = (int)XmStringCreate((char*)&blank_string_literal,(XmStringCharSet)&default_charset);
  emptyXmString = (int)XmStringCreate((char*)&empty_string_literal,(XmStringCharSet)&default_charset);
  displayPtr = XtDisplay(toplevel);
  wmProtocolsAtom = (Atom)XmInternAtom(displayPtr,"WM_PROTOCOLS",0);
  wmDeleteWindowAtom = (Atom)XmInternAtom(display,"WM_DELETE_WINDOW",0);
  XmAddProtocolCallback(toplevel,wmProtocolsAtom,wmDeleteWindowAtom,quit_application,0);
  XtAppAddActions(app_context,(XtActionList)&xt_actions_table,0x10);
  mainWindowWidget = XtCreateManagedWidget("mainw",xmMainWindowWidgetClass,toplevel,(Arg*)&uStack_a0,0);
  install_help_callback(mainWindowWidget,&topHelp);
  menuBarWidget = (Widget)get_panel_value((undefined4)mainWindowWidget);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,mainWindowWidget,(Arg*)&uStack_a0,0);
  uStack_a0 = 0xe3f40cb;
  uStack_98 = 0xe3f4b1d;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_84 = (undefined4)create_panel_component(panel_widget,&uStack_a0,2);
  uStack_88 = 0xe3f40f2;
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f3701;
  uStack_90 = 0xe3f40cb;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_8c = 3;
  copy_button_widget = (Widget)uStack_84;
  panel_vsep_widget = XtCreateManagedWidget("panelvsep",xmSeparatorWidgetClass,panel_widget,(Arg*)&uStack_a0,4);
  init_panel_layout();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    display_mode_flags = 0x3000;
  }
  uStack_8c = (undefined4)panel_vsep_widget;
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f40cb;
  uStack_90 = 0xe3f40f2;
  uStack_9c = 1;
  uStack_94 = 3;
  messageHeaderWidget = XmCreateLabel(panel_widget,"messageHeader",(Arg*)&uStack_a0,3);
  XtManageChild(messageHeaderWidget);
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f40cb;
  uStack_90 = 0xe3f40f2;
  uStack_88 = 0xe3f46dd;
  uStack_9c = 1;
  uStack_94 = 3;
  uStack_84 = 1;
  uStack_8c = (undefined4)messageHeaderWidget;
  message_widget = XmCreateLabel(panel_widget,"message",(Arg*)&uStack_a0,4);
  XtManageChild(message_widget);
  install_help_callback(message_widget,&messageHelp);
  set_status_message("a 3D File System Navigator",0);
  uStack_98 = 0xe3f4ba9;
  uStack_94 = (undefined4)message_widget;
  uStack_a0 = 0xe3f4b1d;
  uStack_70 = 0xe3f469e;
  uStack_7c = (undefined4)panel_vsep_widget;
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
  pane_form_widget = XmCreateForm(panel_widget,"paneForm",(Arg*)&uStack_a0,8);
  XtManageChild(pane_form_widget);
  uStack_a0 = 0xe3f4b1d;
  uStack_98 = 0xe3f3701;
  uStack_90 = 0xe3f40cb;
  uStack_88 = 0xe3f46dd;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_8c = 1;
  uStack_84 = 1;
  context_top_widget = XtCreateManagedWidget((String)&context_widget_name,xmDrawingAreaWidgetClass,pane_form_widget,(Arg*)&uStack_a0,4);
  setup_context_widgets();
  XtManageChild((Widget)*(undefined4 *)(curcontextwindows + 0xc));
  XmMainWindowSetAreas(mainWindowWidget,menuBarWidget,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  post_realize_setup((undefined4)toplevel);
  XtSetSensitive(copy_button_widget,0);
  XtSetSensitive(menuBarWidget,0);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 8),0);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 0xc),0);
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
  set_window_property((Widget)*(undefined4 *)(curcontextwindows + 0xc),&uStack_a0,8);
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
  XtSetSensitive(menuBarWidget,1);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 8),1);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 0xc),1);
  init_display_state();
  init_database_display();
  setup_fam_monitoring();
  refresh_toplevel((int)toplevel);
  do {
    if ((redraw_flag != '\0') && (iVar3 = XtAppPending(app_context), iVar3 == 0)) {
      redraw_gl_scene();
      redraw_flag = '\0';
    }
    XtAppNextEvent(app_context,&event);
    XtDispatchEvent(&event);
  } while( true );
}

void parse_command_args(int argc_param,char **argv_param)

{
  Display *display_temp;
  Atom wm_protocols_atom;
  Atom wm_delete_atom;
  int iVar3;
  int argc_local;
  char **argv_local;
  undefined1 auStack_124 [100];
  char *path_concat_buffer;
  char *starting_directory;
  Widget message_header_widget;
  Widget menu_bar_widget;
  Widget main_window_widget;
  undefined4 arg_a0;
  undefined4 arg_9c;
  undefined4 arg_98;
  undefined4 arg_94;
  undefined4 arg_90;
  undefined4 arg_8c;
  undefined4 arg_88;
  Widget copy_button_temp;
  undefined4 arg_80;
  undefined4 arg_7c;
  undefined4 arg_78;
  undefined4 arg_74;
  undefined4 arg_70;
  undefined4 arg_6c;
  undefined4 arg_68;
  undefined4 arg_64;

  arg_a0 = 0xf662094;
  arg_9c = 1;
  argc_local = argc_param;
  argv_local = argv_param;
  toplevel = XtAppInitialize(&app_context,app_class_name,(XrmOptionDescList)PTR_s__landscape_100000e0,5,&argc_local,
                             argv_param,fallback_resources,(Arg*)&arg_a0,1);
  display = XtDisplay(toplevel);
  init_toplevel_resources((int)toplevel);
  if (argc_local < 2) {
    if (relative_path_flag == '\0') {
      starting_directory = getcwd((char *)0x0,0x400);
    }
    else {
      starting_directory = ".";
    }
  }
  else if ((2 < argc_local) || (starting_directory = (char *)argv_local[1], *starting_directory == '-')) {
    fprintf((FILE *)0xfb52904,
            "usage:  %s [-landscape <landscapeName>] [-relative] \n\t[-db <filename>|-dbdir <directory>] [-noscan] [dirname]\n\n\tKnown landscapes are grass, ocean, desert, space,\nand indigo (similar to grass, but looks better on indigo)\n\t-relative uses relative instead of absolute pathnames\n\t-db or -dbdir control where the database is stored\n\t-noscan avoids rescanning directories when visited\n"
            ,*argv_local);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  init_app_state();
  init_database_state();
  setup_event_handlers();
  glwidget_translations = (char *)XtParseTranslationTable(glwidget_translations);
  blankXmString = (int)XmStringCreate(blank_string_literal,default_charset);
  emptyXmString = (int)XmStringCreate(empty_string_literal,default_charset);
  display_temp = XtDisplay(toplevel);
  wm_protocols_atom = XmInternAtom(display_temp,"WM_PROTOCOLS",0);
  wm_delete_atom = XmInternAtom(display,"WM_DELETE_WINDOW",0);
  XmAddProtocolCallback(toplevel,wm_protocols_atom,wm_delete_atom,quit_application,0);
  XtAppAddActions(app_context,xt_actions_table,0x10);
  main_window_widget = XtCreateManagedWidget("mainw",xmMainWindowWidgetClass,toplevel,(Arg*)&arg_a0,0);
  install_help_callback(main_window_widget,&topHelp);
  menu_bar_widget = (Widget)get_panel_value((int)main_window_widget);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,main_window_widget,(Arg*)&arg_a0,0);
  arg_a0 = 0xe3f40cb;
  arg_98 = 0xe3f4b1d;
  arg_9c = 1;
  arg_94 = 1;
  copy_button_temp = (Widget)create_panel_component(panel_widget,&arg_a0,2);
  arg_88 = 0xe3f40f2;
  arg_a0 = 0xe3f4b1d;
  arg_98 = 0xe3f3701;
  arg_90 = 0xe3f40cb;
  arg_9c = 1;
  arg_94 = 1;
  arg_8c = 3;
  copy_button_widget = copy_button_temp;
  panel_vsep_widget = XtCreateManagedWidget("panelvsep",xmSeparatorWidgetClass,panel_widget,(Arg*)&arg_a0,4);
  init_panel_layout();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    display_mode_flags = 0x3000;
  }
  arg_8c = (undefined4)panel_vsep_widget;
  arg_a0 = 0xe3f4b1d;
  arg_98 = 0xe3f40cb;
  arg_90 = 0xe3f40f2;
  arg_9c = 1;
  arg_94 = 3;
  message_header_widget = XmCreateLabel(panel_widget,"messageHeader",(Arg*)&arg_a0,3);
  XtManageChild(message_header_widget);
  arg_a0 = 0xe3f4b1d;
  arg_98 = 0xe3f40cb;
  arg_90 = 0xe3f40f2;
  arg_88 = 0xe3f46dd;
  arg_9c = 1;
  arg_94 = 3;
  copy_button_temp = (Widget)1;
  arg_8c = (undefined4)message_header_widget;
  message_widget = XmCreateLabel(panel_widget,"message",(Arg*)&arg_a0,4);
  XtManageChild(message_widget);
  install_help_callback(message_widget,&messageHelp);
  set_status_message("a 3D File System Navigator",0);
  arg_98 = 0xe3f4ba9;
  arg_94 = (undefined4)message_widget;
  arg_a0 = 0xe3f4b1d;
  arg_70 = 0xe3f469e;
  arg_7c = (undefined4)panel_vsep_widget;
  arg_9c = 3;
  arg_90 = 0xe3f3701;
  arg_88 = 0xe3f40cb;
  arg_80 = 0xe3f40f2;
  arg_78 = 0xe3f46dd;
  arg_68 = 0xe3f46c4;
  arg_8c = 1;
  copy_button_temp = (Widget)3;
  arg_74 = 1;
  arg_6c = 0;
  arg_64 = 0;
  pane_form_widget = XmCreateForm(panel_widget,"paneForm",(Arg*)&arg_a0,8);
  XtManageChild(pane_form_widget);
  arg_a0 = 0xe3f4b1d;
  arg_98 = 0xe3f3701;
  arg_90 = 0xe3f40cb;
  arg_88 = 0xe3f46dd;
  arg_9c = 1;
  arg_94 = 1;
  arg_8c = 1;
  copy_button_temp = (Widget)1;
  context_top_widget = XtCreateManagedWidget(context_widget_name,xmDrawingAreaWidgetClass,pane_form_widget,(Arg*)&arg_a0,4);
  setup_context_widgets();
  XtManageChild((Widget)*(undefined4 *)(curcontextwindows + 0xc));
  XmMainWindowSetAreas(main_window_widget,menu_bar_widget,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  post_realize_setup((int)toplevel);
  XtSetSensitive(copy_button_widget,0);
  XtSetSensitive(menu_bar_widget,0);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 8),0);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 0xc),0);
  set_main_gl_window();
  arg_a0 = 0xe3f4b1d;
  arg_98 = 0xe3f4ba9;
  arg_9c = 4;
  arg_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  arg_90 = 0xe3f3701;
  arg_88 = 0xe3f3753;
  arg_8c = 4;
  copy_button_temp = *(Widget *)(curcontextwindows + 8);
  arg_80 = 0xe3f40cb;
  arg_78 = 0xe3f40f2;
  arg_7c = 4;
  arg_74 = *(undefined4 *)(curcontextwindows + 8);
  arg_70 = 0xe3f46dd;
  arg_68 = 0xe3f4707;
  arg_6c = 4;
  arg_64 = *(undefined4 *)(curcontextwindows + 8);
  set_window_property((void *)*(undefined4 *)(curcontextwindows + 0xc),&arg_a0,8);
  load_filetype_rules_wrapper("/usr/lib/filetype/workspace.ctr");
  init_gl_lists();
  init_icon_context();
  setup_rendering();
  if ((*starting_directory != '/') && (relative_path_flag == '\0')) {
    path_concat_buffer = getcwd((char *)0x0,0x400);
    strcat(path_concat_buffer,"/");
    strcat(path_concat_buffer,starting_directory);
    starting_directory = path_concat_buffer;
  }
  display_status_message(starting_directory);
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
  XtSetSensitive(menu_bar_widget,1);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 8),1);
  XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 0xc),1);
  init_display_state();
  init_database_display();
  setup_fam_monitoring();
  refresh_toplevel((int)toplevel);
  do {
    if ((redraw_flag != '\0') && (iVar3 = XtAppPending(app_context), iVar3 == 0)) {
      redraw_gl_scene();
      redraw_flag = '\0';
    }
    XtAppNextEvent(app_context,(XEvent*)auStack_124);
    XtDispatchEvent((XEvent*)auStack_124);
  } while( true );
}
