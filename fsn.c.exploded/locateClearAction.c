/**
 * locateClearAction
 *
 * Extracted from fsn.c lines 50984-50996
 * Category: Filesystem
 */

void locateClearAction(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    refresh_list_display();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
