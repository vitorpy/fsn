/**
 * swapcontext
 *
 * Extracted from fsn.c lines 51655-51661
 * Category: Filesystem
 */

void swapcontext(undefined1 param_1)

{
  set_context_state(1 - curcontextid,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
