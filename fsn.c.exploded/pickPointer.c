/**
 * pickPointer
 *
 * Extracted from fsn.c lines 49287-49298
 * Category: Input
 */

void pickPointer(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    get_cursor_state();
  }
  else {
    get_selection_params();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
