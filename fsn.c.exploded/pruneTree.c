/**
 * pruneTree
 *
 * Extracted from fsn.c lines 42081-42092
 * Category: Other
 */

void pruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  update_child_nodes();
  refresh_view();
  update_display();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
