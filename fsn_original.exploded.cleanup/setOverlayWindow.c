/**
 * setOverlayWindow
 *
 * Extracted from fsn.c lines 50062-50068
 * Category: Other
 */

void setOverlayWindow(void)

{
  GLXwinset(display,*(undefined4 *)(curcontextwindows + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
