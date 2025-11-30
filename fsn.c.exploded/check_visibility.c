/**
 * check_visibility
 *
 * Extracted from fsn.c lines 37556-37565
 * Category: Graphics
 */

void check_visibility(void)

{
  pushmatrix();
  gl_picking_setup_wrapper();
  init_display_lists();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
