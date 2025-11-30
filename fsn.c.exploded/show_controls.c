/**
 * show_controls
 *
 * Extracted from fsn.c lines 37909-37927
 * Category: UI
 */

void show_controls(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  ui_layout_setup_wrapper();
  XtManageChild(copy_button_widget);
  local_48 = 0xe3f40f2;
  local_44 = copy_button_widget;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
