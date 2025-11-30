/**
 * setOverviewWindow
 *
 * Extracted from fsn.c lines 45809-45815
 * Category: Other
 */

void setOverviewWindow(void)

{
  GLXwinset(display,main_gl_window);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
