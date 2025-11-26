/**
 * main.c - Entry point and main loop
 *
 * Extracted from fsn.c (lines 36896-37368)
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* External function declarations */
extern void init_toplevel_resources(undefined4 param_1);
extern void init_database_state(void);
extern void setup_event_handlers(void);
extern void install_help_callback(undefined4 param_1, void *param_2);
extern undefined4 get_panel_value(undefined4 param_1);
extern undefined4 create_panel_component(undefined4 param_1, undefined4 *param_2, int param_3);
extern void init_panel_layout(void);
extern int init_display_mode(void);
extern void set_status_message(char *param_1, int param_2);
extern void setup_context_widgets(void);
extern void post_realize_setup(undefined4 param_1);
extern void set_window_property(undefined4 param_1, undefined4 *param_2, int param_3);
extern void load_filetype_rules_wrapper(char *param_1);
extern void init_gl_lists(void);
extern void init_icon_context(void);
extern void setup_rendering(void);
extern void display_status_message(char *param_1);
extern void update_display(void);
extern void showOverview(void);
extern void setup_directory_handler(void);
extern void toggle_legend(void);
extern void show_controls(void);
extern void init_color_menus(void);
extern void init_display_state(void);
extern void init_database_display(void);
extern void setup_fam_monitoring(void);
extern void refresh_toplevel(undefined4 param_1);
extern void redraw_gl_scene(void);
extern void GLXwinset(undefined4 param_1, undefined4 param_2);

/* External globals from fsn_state */
extern undefined app_class_name;
extern pointer PTR_s__landscape_100000e0;
extern undefined *fallback_resources;
extern undefined blank_string_literal;
extern undefined default_charset;
extern undefined empty_string_literal;
extern undefined quit_application;
extern undefined xt_actions_table;
extern undefined context_widget_name;

/* Motif widget classes */
extern undefined xmMainWindowWidgetClass;
extern undefined xmFormWidgetClass;
extern undefined xmSeparatorWidgetClass;
extern undefined xmDrawingAreaWidgetClass;

/* X/Motif function declarations */
extern undefined4 XtAppInitialize(void *app_context, void *app_class, void *options, int num_options,
                                   int *argc, undefined4 *argv, undefined **fallback, undefined4 *args, int num_args);
extern undefined4 XtDisplay(undefined4 widget);
extern undefined4 XtParseTranslationTable(undefined4 table);
extern undefined4 XmStringCreate(void *text, void *charset);
extern undefined4 XmInternAtom(undefined4 display, char *name, int only_if_exists);
extern void XmAddProtocolCallback(undefined4 widget, undefined4 protocol, undefined4 atom,
                                   undefined callback, int client_data);
extern void XtAppAddActions(void *app_context, void *actions, int num_actions);
extern undefined4 XtCreateManagedWidget(char *name, undefined widget_class, undefined4 parent,
                                         undefined4 *args, int num_args);
extern undefined4 XmCreateLabel(undefined4 parent, char *name, undefined4 *args, int num_args);
extern void XtManageChild(undefined4 widget);
extern undefined4 XmCreateForm(undefined4 parent, char *name, undefined4 *args, int num_args);
extern void XmMainWindowSetAreas(undefined4 main_window, undefined4 menu_bar, undefined4 command,
                                  undefined4 horiz_sb, undefined4 vert_sb, undefined4 work_region);
extern void XtRealizeWidget(undefined4 widget);
extern void XSetErrorHandler(int handler);
extern void XtSetSensitive(undefined4 widget, int sensitive);
extern int XtAppPending(void *app_context);
extern void XtAppNextEvent(void *app_context, undefined1 *event);
extern void XtDispatchEvent(undefined1 *event);


void init_app_state(void)

{
  size_t sVar1;
  char *__s;
  char *__s_00;

  __s_00 = *(char **)(display + 0x80);
  sVar1 = strlen(__s_00);
  __s = (char *)malloc(sVar1 + 9);
  sprintf(__s,"DISPLAY=%s",__s_00);
  putenv(__s);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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



// WARNING: Control flow encountered bad instruction data

void setMainWindow(void)

{
  GLXwinset(display,*(undefined4 *)curcontextwindows);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void set_main_gl_window(void)

{
  int unaff_gp;

  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)**(undefined4 **)(unaff_gp + -0x767c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
