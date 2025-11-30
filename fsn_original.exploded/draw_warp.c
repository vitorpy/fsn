/**
 * draw_warp
 *
 * Extracted from fsn.c lines 51629-51638
 * Category: Graphics
 */

void draw_warp(void)

{
  cpack(DAT_10017610);
  clear();
  swapbuffers();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
