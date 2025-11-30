/**
 * drawOverviewOverlay
 *
 * Extracted from fsn.c lines 60920-60931
 * Category: Graphics
 */

void drawOverviewOverlay(void)

{
  if (overviewActive != '\0') {
    FUN_0041fdb0();
    color(0);
    clear();
    FUN_00420acc();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
