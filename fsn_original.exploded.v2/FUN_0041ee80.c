/**
 * FUN_0041ee80
 *
 * Extracted from fsn.c lines 59725-59735
 * Ghidra address: 0x0041ee80
 * Category: Other
 */

void FUN_0041ee80(void)

{
  FUN_0041ed94(topdir);
  redraw_gl_scene();
  FUN_0042a8e4();
  XtSetSensitive(menu_process_deletes,0);
  XtSetSensitive(menu_undo_deletes,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ee80):
     * Function: FUN_0041ee80
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
