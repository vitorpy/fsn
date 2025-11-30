/**
 * FUN_0041ec98
 *
 * Extracted from fsn.c lines 59671-59684
 * Ghidra address: 0x0041ec98
 * Category: Other
 */

void FUN_0041ec98(void)

{
  FUN_0041eaf8(topdir);
  FUN_0041dba0();
  FUN_0041c3e4();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
  XtSetSensitive(menu_process_deletes,0);
  XtSetSensitive(menu_undo_deletes,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
