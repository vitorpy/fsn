/**
 * displayHourglass
 *
 * Extracted from fsn.c lines 69759-69788
 * Category: Graphics
 */

void displayHourglass(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_20 [3];
  undefined4 auStack_14 [3];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_10009630 == 0) {
    uVar1 = XtWindow();
    uStack_4 = XCreateBitmapFromData(display,uVar1,&DAT_10009530,0x20,0x20);
    uVar1 = XtWindow(param_1);
    uStack_8 = XCreateBitmapFromData(display,uVar1,&DAT_100095b0,0x20,0x20);
    iVar2 = XtScreen(param_1);
    auStack_20[0] = iVar2->pos_y /* was: *(undefined4 *)(iVar2 + 0x38) */;
    iVar2 = XtScreen(param_1);
    auStack_14[0] = iVar2->pos_x /* was: *(undefined4 *)(iVar2 + 0x34) */;
    iVar2 = XtScreen(param_1);
    XQueryColors(display,iVar2->child_right /* was: *(undefined4 *)(iVar2 + 0x30) */,auStack_20,2);
    DAT_10009630 = XCreatePixmapCursor(display,uStack_4,uStack_8,auStack_20,auStack_14,0xf,0xf);
    XFreePixmap(display,uStack_4);
    XFreePixmap(display,uStack_8);
  }
  uVar1 = XtWindow(param_1);
  XDefineCursor(display,uVar1,DAT_10009630);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042fb78):
     * Function: displayHourglass
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls XDefineCursor twice (GP offset -31628 = 0x8474) on the same widget, then calls XFlush (GP offset -31896 = 0x8368), loads display from curcontextwindows, and calls XUndefineCursor (GP offset -31632 = 0x8470) with the flushed result.
     * **2. C pseudocode:**
     * ```c
     * /* After halt_baddata at 0x42fccc: */
     * XDefineCursor(widget, cursor);          /* First cursor set */
     * saved_cursor = cursor;                   /* Store at -27088(at) for later */
     * XDefineCursor(widget, hourglass_cursor); /* a1 from sp+88 = hourglass cursor */
     * XFlush(display);                         /* s1 = display */
     * display = curcontextwindows[0];          /* Reload display pointer */
     * XUndefineCursor(display, flush_result, saved_cursor);
     * /* Function epilogue and return */
     * ```
     * Wait - re-reading more carefully: the two jalr to -31628(gp) are XDefineCursor, -31896(gp) is XFlush, and -31632(gp) is likely XSync or another X call. The pattern is:
     * ```c
     * XDefineCursor(s0[0], v0);           /* v0 = some cursor */
     * XDefineCursor(s0[0], sp[88]);       /* hourglass cursor from stack */
     * XFlush(s1);                         /* s1 = display */
     * s0 = curcontextwindows;             /* reload from GP */
     * XDefineCursor(s0[0], v0, a2);       /* 3-arg variant or XUndefineCursor */
     * return;
     * ```
     * The function displays an hourglass cursor: sets cursor, flushes display to ensure it shows immediately.
     */
halt_baddata();
}
