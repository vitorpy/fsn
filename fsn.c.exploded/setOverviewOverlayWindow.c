/**
 * setOverviewOverlayWindow
 *
 * Extracted from fsn.c lines 45837-45843
 * Category: Other
 */

void setOverviewOverlayWindow(void)

{
  GLXwinset(display,overview_gl_context);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
