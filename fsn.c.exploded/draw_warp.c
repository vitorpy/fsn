/**
 * draw_warp
 *
 * Extracted from fsn.c lines 38395-38404
 * Category: Graphics
 */

void draw_warp(void)

{
  cpack(cpack_color);
  clear();
  swapbuffers();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
