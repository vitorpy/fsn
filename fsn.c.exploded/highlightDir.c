/**
 * highlightDir
 *
 * Extracted from fsn.c lines 49492-49503
 * Category: Filesystem
 */

void highlightDir(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_tree_bounds();
  }
  else {
    draw_item_recursive();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
