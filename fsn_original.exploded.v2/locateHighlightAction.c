/**
 * locateHighlightAction
 *
 * Extracted from fsn.c lines 66016-66028
 * Category: Filesystem
 */

void locateHighlightAction(undefined4 param_1,int param_2)

{
  if (param_2->child_right /* was: *(int *)(param_2 + 0x30) */ == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    FUN_00429a48();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429b00):
     * Function: locateHighlightAction
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
