/**
 * select_directory
 *
 * Extracted from fsn.c lines 45066-45110
 * Category: Filesystem
 */

void select_directory(int param_1)

{
  undefined4 uStack_28;
  uint uStack_24;
  
  if (param_1 == *(int *)(curcontext + 0x44)) {
    clear_current_selection();
    if (mark_menu_widget != '\0') {
      draw_mark_overlay();
    }
  }
  else {
    if (*(int *)(curcontext + 0x44) != 0) {
      finalize_draw_frame();
      *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
           *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
      clear_current_selection();
      curcontext[0xc50] = 0;
    }
    XtSetSensitive(menu_directory_cascade,1);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(curcontext + 0x44) = param_1;
    build_path_string((int)curcontext + 0x4c,param_1);
    draw_mark_overlay();
    refresh_display();
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    XtSetValues(menu_monitor_directory,&uStack_28,1);
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    XtSetValues(current_picked_item,&uStack_28,1);
    XtSetSensitive(menu_monitor_directory,-1 < *(int *)(param_1 + 0x74) << 0xd);
    update_widget_state();
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      add_directory_monitor(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
