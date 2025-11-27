/**
 * main_entry.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "main_entry.h"
#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "messages.h"

/* Phase 18: Directory scanning */
extern void create_root_directory(char *path);

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
  
  argc_copy = argc;
  argv_copy = argv;
  toplevel = XtAppInitialize(&app_context, "Fsn", NULL, 0, &argc_copy,
                             argv, NULL, NULL, 0);
  display = XtDisplay(toplevel);
  init_toplevel_resources(toplevel);
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
  menuBarWidget = get_panel_value(mainWindowWidget);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,mainWindowWidget,NULL,0);
  {
    /* create_panel_component: 2 args - packing/orientation for RowColumn */
    Arg panel_args[2];
    int pn = 0;
    XtSetArg(panel_args[pn], XmNpacking, XmPACK_TIGHT); pn++;
    XtSetArg(panel_args[pn], XmNorientation, XmHORIZONTAL); pn++;
    copy_button_widget = create_panel_component(panel_widget, panel_args, pn);
  }
  {
    /* panel_vsep_widget: 4 args - form attachments */
    Arg args[4];
    int n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNorientation, XmVERTICAL); n++;
    panel_vsep_widget = XtCreateManagedWidget("panelvsep",xmSeparatorWidgetClass,panel_widget,args,n);
  }
  init_panel_layout();
  iVar3 = init_display_mode();
  if (iVar3 != 0) {
    display_mode_flags = 0x3000;
  }
  {
    /* messageHeaderWidget: 3 args - attached to panel_vsep_widget */
    Arg args[4];
    int n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNleftWidget, panel_vsep_widget); n++;
    messageHeaderWidget = XmCreateLabel(panel_widget,"messageHeader",args,n);
  }
  XtManageChild(messageHeaderWidget);
  {
    /* message_widget: 4 args - below messageHeaderWidget */
    Arg args[4];
    int n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNtopWidget, messageHeaderWidget); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNleftWidget, panel_vsep_widget); n++;
    message_widget = XmCreateLabel(panel_widget,"message",args,n);
  }
  XtManageChild(message_widget);
  install_help_callback(message_widget,&messageHelp);
  set_status_message("a 3D File System Navigator",0);
  {
    /* pane_form_widget: main GL area, BELOW message bar, fills to bottom
     * Original fsn2.c line 48580-48597:
     *   topAttachment=ATTACH_WIDGET, topWidget=message_widget
     *   bottomAttachment=ATTACH_FORM
     *   leftAttachment=ATTACH_WIDGET, leftWidget=panel_vsep
     *   rightAttachment=ATTACH_FORM
     */
    Arg args[8];
    int n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNtopWidget, message_widget); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNleftWidget, panel_vsep_widget); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    pane_form_widget = XmCreateForm(panel_widget,"paneForm",args,n);
  }
  XtManageChild(pane_form_widget);
  {
    /* context_top_widget: 4 args - fill the pane_form */
    Arg args[4];
    int n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    context_top_widget = XtCreateManagedWidget(context_widget_name,xmDrawingAreaWidgetClass,pane_form_widget,args,n);
  }
  setup_context_widgets();
  /* TODO: setup_context_widgets is a stub - skip managing uninitialized widget */
  /* XtManageChild((Widget)*(undefined4 *)(curcontextwindows + 0xc)); */
  XmMainWindowSetAreas(mainWindowWidget,menuBarWidget,0,0,0,panel_widget);
  XtRealizeWidget(toplevel);
  XSetErrorHandler(0);
  post_realize_setup((undefined4)toplevel);
  /* Guard against NULL widgets from stub functions */
  if (copy_button_widget) XtSetSensitive(copy_button_widget,0);
  if (menuBarWidget) XtSetSensitive(menuBarWidget,0);
  /* Skip curcontextwindows - not initialized by stub */
  /* if (*(Widget*)(curcontextwindows + 8)) XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 8),0); */
  /* if (*(Widget*)(curcontextwindows + 0xc)) XtSetSensitive((Widget)*(undefined4 *)(curcontextwindows + 0xc),0); */
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

  /* Phase 18: Initialize directory tree if not already done by display_status_message */
  if (topdir == NULL) {
    fprintf(stderr, "main: Initializing directory tree for: %s\n", pcStack_bc);
    create_root_directory(pcStack_bc);
  }

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
  /* Access widgets using proper pointer indexing (64-bit safe) */
  XtSetSensitive(((Widget *)curcontextwindows)[2],1);  /* glwidget at index 2 */
  XtSetSensitive(((Widget *)curcontextwindows)[3],1);  /* contextTopWidget at index 3 */
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
  init_toplevel_resources(toplevel);
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
  menu_bar_widget = get_panel_value(main_window_widget);
  panel_widget = XtCreateManagedWidget("panel",xmFormWidgetClass,main_window_widget,NULL,0);
  {
    /* create_panel_component: 2 args - packing/orientation for RowColumn */
    Arg panel_args[2];
    int pn = 0;
    XtSetArg(panel_args[pn], XmNpacking, XmPACK_TIGHT); pn++;
    XtSetArg(panel_args[pn], XmNorientation, XmHORIZONTAL); pn++;
    copy_button_temp = (Widget)create_panel_component(panel_widget, panel_args, pn);
  }
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
  /* Access widgets using proper pointer indexing (64-bit safe) */
  XtSetSensitive(((Widget *)curcontextwindows)[2],1);  /* glwidget at index 2 */
  XtSetSensitive(((Widget *)curcontextwindows)[3],1);  /* contextTopWidget at index 3 */
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
