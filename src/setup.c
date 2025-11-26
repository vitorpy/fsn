/**
 * setup.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "setup.h"
#include "fsn_types.h"
#include "fsn_state.h"

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

void post_realize_setup(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int unaff_gp;
  undefined4 local_20 [3];
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f94) + -0x69d0) == 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7c98))();
    puVar3 = *(undefined4 **)(unaff_gp + -0x75fc);
    local_4 = (**(code **)(unaff_gp + -0x7bb0))
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) + -0x6ad0,0x20,0x20);
    uVar1 = (**(code **)(unaff_gp + -0x7c98))(param_1);
    local_8 = (**(code **)(unaff_gp + -0x7bb0))
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) + -0x6a50,0x20,0x20);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4))(param_1);
    local_20[0] = *(undefined4 *)(iVar2 + 0x38);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4))(param_1);
    local_14[0] = *(undefined4 *)(iVar2 + 0x34);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4))(param_1);
    (**(code **)(unaff_gp + -0x7b74))(*puVar3,*(undefined4 *)(iVar2 + 0x30),local_20,2);
    uVar1 = (**(code **)(unaff_gp + -0x7b84))(*puVar3,local_4,local_8,local_20,local_14,0xf,0xf);
    pcVar4 = *(code **)(unaff_gp + -0x7b8c);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x69d0) = uVar1;
    (*pcVar4)(*puVar3,local_4);
    (**(code **)(unaff_gp + -0x7b8c))(*puVar3,local_8);
  }
  puVar3 = *(undefined4 **)(unaff_gp + -0x75fc);
  uVar1 = (**(code **)(unaff_gp + -0x7c98))(param_1);
  (**(code **)(unaff_gp + -0x7b90))
            (*puVar3,uVar1,*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x69d0));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_icon_entry(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)(**(code **)(unaff_gp + -0x7b5c))(100), param_1 == (undefined1 *)0x0))
  {
    halt_baddata();
  }
  uVar1 = *(undefined4 *)(unaff_gp + -0x7610);
  *(int *)(param_1 + 0x14) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  *(undefined4 *)(param_1 + 0xc) = 0xffffff81;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7b5c))(*(int *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    (**(code **)(unaff_gp + -0x7e64))
              (*(undefined4 *)(param_2 + 0x1c),uVar1,*(undefined4 *)(param_2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
