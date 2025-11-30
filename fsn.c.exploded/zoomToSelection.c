/**
 * zoomToSelection
 *
 * Extracted from fsn.c lines 45739-45750
 * Category: Input
 */

void zoomToSelection(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_context_bounds(*(undefined4 *)(curcontext + 0x44),*(undefined4 *)(curcontext + 0x48));
  }
  else {
    update_context_display(*(undefined4 *)(curcontext + 0x44),*(undefined4 *)(curcontext + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
