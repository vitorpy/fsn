/**
 * drawOverview
 *
 * Extracted from fsn.c lines 60767-60781
 * Category: Graphics
 */

void drawOverview(void)

{
  if (overviewActive != '\0') {
    FUN_0041fd70();
    cpack(DAT_100175f0);
    clear();
    if (topdir != 0) {
      FUN_00420408(topdir,0);
    }
    swapbuffers();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
