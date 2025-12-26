/**
 * locateClearAction
 *
 * Extracted from fsn.c lines 65789-65801
 * Category: Filesystem
 */

void locateClearAction(undefined4 param_1,int param_2)

{
  if (param_2->child_right /* was: *(int *)(param_2 + 0x30) */ == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    FUN_004294cc();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429578):
     * Function: locateClearAction
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
