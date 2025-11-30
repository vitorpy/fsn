/**
 * FUN_00411230
 *
 * Extracted from fsn.c lines 52253-52302
 * Ghidra address: 0x00411230
 * Category: Other
 */

void FUN_00411230(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  ushort *local_28;
  undefined4 local_24;
  uint local_20;
  ushort local_2;
  
  if (DAT_10000170 == '\0') {
    gl_swap_buffers(1);
    FUN_0040a7ec();
    DAT_10000170 = '\x01';
    gl_swap_buffers(1);
  }
  local_28 = &local_2;
  local_2c = 0xf66160a;
  XtGetValues(DAT_1001664c,&local_2c,1);
  local_28 = (ushort *)(uint)(local_2 >> 1);
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_20 = (uint)local_28;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0xc));
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_28 = (ushort *)0x1;
  local_20 = 1000;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  altcontext[0xc51] = 1;
  uVar1 = XtDisplay(*(undefined4 *)(altcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(altcontextwindows + 0x28));
  XMapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(curcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  uVar1 = XtDisplay(*(undefined4 *)(curcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(curcontextwindows + 0x28));
  XUnmapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(altcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  gl_swap_buffers(1);
  FUN_0041c720();
  gl_swap_buffers(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
