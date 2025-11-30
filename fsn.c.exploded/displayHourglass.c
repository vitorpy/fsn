/**
 * displayHourglass
 *
 * Extracted from fsn.c lines 54292-54321
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
  
  if (busy_cursor == 0) {
    uVar1 = XtWindow();
    uStack_4 = XCreateBitmapFromData(display,uVar1,&cursor_buffer,0x20,0x20);
    uVar1 = XtWindow(param_1);
    uStack_8 = XCreateBitmapFromData(display,uVar1,&shell_arg_buffer,0x20,0x20);
    iVar2 = XtScreen(param_1);
    auStack_20[0] = *(undefined4 *)(iVar2 + 0x38);
    iVar2 = XtScreen(param_1);
    auStack_14[0] = *(undefined4 *)(iVar2 + 0x34);
    iVar2 = XtScreen(param_1);
    XQueryColors(display,*(undefined4 *)(iVar2 + 0x30),auStack_20,2);
    busy_cursor = XCreatePixmapCursor(display,uStack_4,uStack_8,auStack_20,auStack_14,0xf,0xf);
    XFreePixmap(display,uStack_4);
    XFreePixmap(display,uStack_8);
  }
  uVar1 = XtWindow(param_1);
  XDefineCursor(display,uVar1,busy_cursor);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
