/**
 * undisplayHourglass
 *
 * Extracted from fsn.c lines 54372-54381
 * Category: Graphics
 */

void undisplayHourglass(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  XUndefineCursor(display,uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
