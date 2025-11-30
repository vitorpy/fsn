/**
 * locateClear
 *
 * Extracted from fsn.c lines 50940-50954
 * Category: Filesystem
 */

void locateClear(void)

{
  if (colormap_dirty_flag != 0) {
    update_list_state();
    glx_reset_context_wrapper();
    color(0);
    clear();
    colormap_dirty_flag = 0;
    active_colormap_id = 0;
    draw_overview_content();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
