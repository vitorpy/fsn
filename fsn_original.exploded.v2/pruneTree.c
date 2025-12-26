/**
 * pruneTree
 *
 * Extracted from fsn.c lines 56033-56044
 * Category: Other
 */

void pruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  FUN_004186a0();
  FUN_0041dba0();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004187e8):
     * Function: pruneTree
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
