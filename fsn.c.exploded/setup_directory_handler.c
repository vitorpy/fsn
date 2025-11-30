/**
 * setup_directory_handler
 *
 * Extracted from fsn.c lines 38891-38940
 * Category: Filesystem
 */

void setup_directory_handler(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  ushort *local_28;
  undefined4 local_24;
  uint local_20;
  ushort local_2;
  
  if (view_mode_flags == '\0') {
    gl_swap_buffers(1);
    setup_context_widgets();
    view_mode_flags = '\x01';
    gl_swap_buffers(1);
  }
  local_28 = &local_2;
  local_2c = 0xf66160a;
  XtGetValues(context_top_widget,&local_2c,1);
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
  draw_mark_overlay();
  gl_swap_buffers(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
