/**
 * FUN_0040c1a0
 *
 * Extracted from fsn.c lines 50286-50425
 * Ghidra address: 0x0040c1a0
 * Category: Filesystem
 */

void FUN_0040c1a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_38;
  int local_34 [2];
  char *local_2c;
  int *local_28;
  char *local_24;
  undefined4 *local_20;
  
  gl_push_state();
  set_gl_context(param_1,1);
  FUN_004291fc();
  uVar1 = XtWindow(param_1);
  *(undefined4 *)curcontextwindows = uVar1;
  *(uint *)(curcontext + 0x2c) = (uint)*(ushort *)(param_3 + 0x10);
  *(uint *)(curcontext + 0x30) = (uint)*(ushort *)(param_3 + 0x12);
  *(float *)(curcontext + 0x34) =
       (float)*(int *)(curcontext + 0x2c) / (float)*(int *)(curcontext + 0x30);
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    local_2c = "overlayWindow";
  }
  else {
    local_2c = "popupWindow";
  }
  local_28 = (int *)((int)curcontextwindows + 4);
  XtGetValues(param_1,&local_2c,1);
  glcompat(1,0);
  zbuffer(1);
  FUN_0040bfa0();
  shademodel(0);
  subpixel(1);
  if (DAT_10000144 != 0) {
    local_2c = (char *)0xf6615ba;
    local_28 = local_34;
    iVar2 = init_display_mode();
    local_20 = &local_38;
    if (iVar2 == 0) {
      local_24 = "overlayColormap";
    }
    else {
      local_24 = "popupColormap";
    }
    XtGetValues(DAT_10000144,&local_2c,2);
    local_2c = (char *)0xf6615ba;
    local_28 = (int *)local_34[0];
    iVar2 = init_display_mode();
    if (iVar2 == 0) {
      local_24 = "overlayColormap";
    }
    else {
      local_24 = "popupColormap";
    }
    local_20 = (undefined4 *)local_38;
    XtSetValues(param_1,&local_2c,2);
LAB_0040c5ac:
    uVar1 = XtMalloc(0x230);
    *(undefined4 *)(curcontextwindows + 0x34) = uVar1;
    iVar2 = 0x70;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 8) = view_init_x;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0xc) = view_init_y;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x10) = view_init_z;
    **(undefined2 **)(curcontextwindows + 0x34) = 0;
    *(short *)(*(int *)(curcontextwindows + 0x34) + 2) = (short)DAT_100174b8;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x14) = 0;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x24) = 0;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 4) = 0;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x40) = view_init_x;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x44) = view_init_y;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x48) = view_init_z;
    *(undefined2 *)(*(int *)(curcontextwindows + 0x34) + 0x38) = 0;
    *(short *)(*(int *)(curcontextwindows + 0x34) + 0x3a) = (short)DAT_100174b8;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x4c) = 0;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + 0x3c) = 0;
    do {
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 8) = view_init_x;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xc) = view_init_y;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x10) = view_init_z;
      *(undefined2 *)(*(int *)(curcontextwindows + 0x34) + iVar2) = 0;
      *(short *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 2) = (short)DAT_100174b8;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x14) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x24) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 4) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x40) = view_init_x;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x44) = view_init_y;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x48) = view_init_z;
      *(undefined2 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x38) = 0;
      *(short *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x3a) = (short)DAT_100174b8;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x4c) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x5c) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x3c) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x78) = view_init_x;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x7c) = view_init_y;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x80) = view_init_z;
      *(undefined2 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x70) = 0;
      *(short *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x72) = (short)DAT_100174b8;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x84) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x94) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0x74) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xb0) = view_init_x;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xb4) = view_init_y;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xb8) = view_init_z;
      *(undefined2 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xa8) = 0;
      *(short *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xaa) = (short)DAT_100174b8;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xbc) = 0;
      *(undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 + 0xcc) = 0;
      iVar3 = *(int *)(curcontextwindows + 0x34) + iVar2;
      iVar2 = iVar2 + 0xe0;
      *(undefined4 *)(iVar3 + 0xac) = 0;
    } while (iVar2 != 0x230);
    curcontext[0xc52] = 1;
    gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = getgdesc(0x10);
  if (iVar2 != 0) {
    iVar2 = getgdesc(9);
    if (iVar2 != 0) {
      FUN_00421dd0(*(undefined4 *)curcontextwindows);
      uVar1 = XtWindow(toplevel);
      FUN_00421cdc(uVar1);
      FUN_00421f94(param_1);
      FUN_00421dd0(*(undefined4 *)(curcontextwindows + 4));
      overlayHighlightColor = FUN_004220f0(param_1,"white");
      DAT_10016638 = getgdesc(5);
      *(undefined4 *)(curcontext + 0xc4c) = 100000;
      DAT_10000144 = param_1;
      goto LAB_0040c5ac;
    }
  }
  fprintf((FILE *)0xfb52904,"sorry, this program requires zbuffer and RGB\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
