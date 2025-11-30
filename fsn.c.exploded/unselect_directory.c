/**
 * unselect_directory
 *
 * Extracted from fsn.c lines 45001-45025
 * Category: Filesystem
 */

void unselect_directory(void)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(curcontext + 0x44) != 0) {
    curcontext[0xc50] = 0;
    finalize_draw_frame();
    XtSetSensitive(menu_directory_cascade,0);
    clear_current_selection();
    *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
         *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(curcontext + 0x44) = 0;
    curcontext[0x4c] = 0;
    draw_mark_overlay();
    uStack_24 = blankXmString;
    uStack_28 = 0xe3f40b5;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&uStack_28,1);
    update_widget_state();
    refresh_display();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
