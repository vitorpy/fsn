/**
 * restorecontext
 *
 * Extracted from fsn.c lines 51703-51709
 * Category: Filesystem
 */

void restorecontext(void)

{
  set_context_state(saved_context_state,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
