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
  window_scale_x = (float)param_3->file_array /* was: *(ushort *)(param_3 + 0x10) */ / (maxx - minx);
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420e74):
     * Function: FUN_00420e74
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls XtVaGetValues (at t9) with string resource name at gp-17836
     * 2. Stores result at offset 48 of a global struct, then calls XtVaGetValues again with resource at gp-17832
     * 3. Stores second result at offset 104, loads float args from globals, calls a function (likely perspective or window setup) with 4 args (2 floats in f12/f14, 2 ints in a2/a3)
     * **C pseudocode:**
     * ```c
     * // Previous call returned widget in v0, now getting resources
     * result1 = XtVaGetValues(param, XmNsomething1, ...);
     * curcontextwindows->field_0x30 = result1;
     * result2 = XtVaGetValues(param, XmNsomething2, ...);
     * curcontextwindows->field_0x68 = result2;
     * // Setup viewport/perspective with globals
     * // f12 = some_float_global1, f14 = some_float_global2
     * // a2 = width_global, a3 = height_global
     * setup_viewport_or_perspective(float1, float2, width, height);
     * // Function epilogue - restore ra, gp, deallocate 112 bytes stack frame
     * return;
     * ```
     * The GP offsets (-30116, -30156, etc.) reference global variables - likely `curcontextwindows` struct pointer and viewport dimension globals. The `lwc1` instructions load single-precision floats into FP registers for the final call.
     */
halt_baddata();
}
