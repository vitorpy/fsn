/**
 * locateHighlightAction
 *
 * Extracted from fsn.c lines 51211-51223
 * Category: Filesystem
 */

void locateHighlightAction(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    reset_list_state();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
