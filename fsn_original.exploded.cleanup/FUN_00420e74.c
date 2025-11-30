/**
 * FUN_00420e74
 *
 * Extracted from fsn.c lines 61010-61043
 * Ghidra address: 0x00420e74
 * Category: Other
 */

void FUN_00420e74(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *local_50;
  undefined4 *local_4c;
  
  shademodel(0);
  subpixel(1);
  window_scale_x = (float)*(ushort *)(param_3 + 0x10) / (maxx - minx);
  window_scale_y = (float)*(ushort *)(param_3 + 0x12) / (maxy - miny);
  DAT_10016c08 = XtWindow(DAT_10006eb4);
  FUN_00421cdc(DAT_10016c08);
  DAT_10016c00 = XtWindow(param_1);
  FUN_0041fd70();
  ortho2(minx,maxx);
  window_width = (uint)*(ushort *)(param_3 + 0x10);
  window_height = (uint)*(ushort *)(param_3 + 0x12);
  iVar1 = init_display_mode();
  if (iVar1 == 0) {
    local_50 = "overlayWindow";
  }
  else {
    local_50 = "popupWindow";
  }
  local_4c = &DAT_10016c04;
  XtGetValues(param_1,&local_50,1);
  FUN_0041fdb0();
  contextwindows._48_4_ = FUN_004220f0(param_1,&DAT_1000ba54);
  contextwindows._104_4_ = FUN_004220f0(param_1,"green");
  ortho2(minx,maxx);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
