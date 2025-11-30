/**
 * unpruneTree
 *
 * Extracted from fsn.c lines 42103-42113
 * Category: Other
 */

void unpruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  refresh_directory_view();
  update_display();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
