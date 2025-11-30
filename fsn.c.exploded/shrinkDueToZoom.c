/**
 * shrinkDueToZoom
 *
 * Extracted from fsn.c lines 38603-38609
 * Category: Filesystem
 */

void shrinkDueToZoom(void)

{
  init_gl_state(search_gl_init_callback,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
