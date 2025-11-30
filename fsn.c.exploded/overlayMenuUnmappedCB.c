/**
 * overlayMenuUnmappedCB
 *
 * Extracted from fsn.c lines 47234-47243
 * Category: UI
 */

void overlayMenuUnmappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  create_gl_window(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
