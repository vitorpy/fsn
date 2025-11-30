/**
 * init_color_menus
 *
 * Extracted from fsn.c lines 38121-38153
 * Category: UI
 */

void init_color_menus(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xe3f48f1;
  local_8 = 1;
  if (displayHeight == 0) {
    XtSetValues(file_height_none_toggle,&local_c,1);
    XtSetSensitive(dir_height_menu_button,0);
  }
  else if (displayHeight == 1) {
    XtSetValues(file_height_linear_toggle,&local_c,1);
  }
  else if (displayHeight == 2) {
    XtSetValues(file_height_exag_toggle,&local_c,1);
  }
  if (displayDirectoryHeight == 0) {
    XtSetValues(dir_flat_toggle,&local_c,1);
  }
  else if (displayDirectoryHeight == 1) {
    XtSetValues(dir_files_only_toggle,&local_c,1);
  }
  else if (displayDirectoryHeight == 2) {
    XtSetValues(dir_children_toggle,&local_c,1);
  }
  if (altcontext[0xc51] != '\0') {
    XtSetValues(autoscan_split_toggle,&local_c,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
