/**
 * highlightFile
 *
 * Extracted from fsn.c lines 49665-49676
 * Category: Filesystem
 */

void highlightFile(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_view_recursive();
  }
  else {
    refresh_context_view();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
