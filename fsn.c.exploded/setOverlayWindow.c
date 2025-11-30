/**
 * setOverlayWindow
 *
 * Extracted from fsn.c lines 37374-37380
 * Category: Other
 */

void setOverlayWindow(void)

{
  GLXwinset(display,*(undefined4 *)(curcontextwindows + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
