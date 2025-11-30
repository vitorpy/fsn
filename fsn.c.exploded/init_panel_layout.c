/**
 * init_panel_layout
 *
 * Extracted from fsn.c lines 37933-37946
 * Category: UI
 */

void init_panel_layout(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  
  local_50 = 0xe3f40cb;
  local_4c = 1;
  controlsShowing = 0;
  XtSetValues(panel_vsep_widget,&local_50,1);
  XtUnmanageChild(copy_button_widget);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
