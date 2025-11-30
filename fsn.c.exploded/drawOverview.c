/**
 * drawOverview
 *
 * Extracted from fsn.c lines 46350-46364
 * Category: Graphics
 */

void drawOverview(void)

{
  if (overviewActive != '\0') {
    glx_switch_context_wrapper();
    cpack(overview_bg_color);
    clear();
    if (topdir != 0) {
      setup_item_render(topdir,0);
    }
    swapbuffers();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
