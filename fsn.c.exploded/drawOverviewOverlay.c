/**
 * drawOverviewOverlay
 *
 * Extracted from fsn.c lines 46503-46514
 * Category: Graphics
 */

void drawOverviewOverlay(void)

{
  if (overviewActive != '\0') {
    begin_overview_render();
    color(0);
    clear();
    end_rendering();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
