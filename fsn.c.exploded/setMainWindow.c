/**
 * setMainWindow
 *
 * Extracted from fsn.c lines 37346-37352
 * Category: Other
 */

void setMainWindow(void)

{
  GLXwinset(display,*(undefined4 *)curcontextwindows);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
