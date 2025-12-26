/**
 * FUN_004108ec
 *
 * Extracted from fsn.c lines 51872-51920
 * Ghidra address: 0x004108ec
 * Category: Filesystem
 */

void FUN_004108ec(undefined4 param_1,int param_2)

{
  int iVar1;
  char local_16;
  char local_15;
  int local_14;
  undefined1 local_10 [2];
  undefined1 local_e [2];
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_gl_context(param_1,0);
  set_main_gl_window();
  save_matrix_state();
  if ((uint)(param_2->_field_1c /* was: *(int *)(param_2 + 0x1c) */ - DAT_10016624) < 300) {
    FUN_0041f118((param_2->child_right /* was: *(uint *)(param_2 + 0x30) */ & 8) != 0);
  }
  else {
    iVar1 = FUN_00426d1c(&local_4,&local_8,local_c,local_e,local_10,&local_14,&local_15,&local_16);
    if (iVar1 == 0) {
      redraw_gl_scene();
    }
    else {
      if (local_16 == '\0') {
        curcontext[0xc50] = 0;
      }
      if (local_15 == '\0') {
        if (local_14 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
          if (local_16 == '\0') {
            set_camera_lookat((double)local_4,(double)local_8);
          }
          else {
            set_camera_lookat((double)local_4,(double)local_8);
          }
        }
        else {
          set_camera_lookat((double)local_4,(double)local_8);
        }
      }
      else {
        do_warp(local_14);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004108ec):
     * Function: FUN_004108ec
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads two halfwords from stack (offsets 80, 82), converts floats to doubles, sets up arguments on stack (including zeros at offsets 36, 40), then calls a function via GP-31400. After return, loads a value from structure offset 28 and stores it to a global.
     * 2. **C pseudocode:**
     * ```c
     * // At 410b04-410b38: Function call with converted float args
     * short arg1 = *(short*)(sp + 80);
     * short arg2 = *(short*)(sp + 82);
     * double d12 = (double)f8;   // $f12-13
     * double d14 = (double)f10;  // $f14-15
     * double d18 = (double)f16;  // stored at sp+16,20
     * // Stack setup: sp+24=arg1, sp+28=arg2, sp+32=v0, sp+36=0, sp+40=0
     * (*GP[-31400/4])(d12, d14, d18, arg1, arg2, v0, 0, 0);  // likely lrectwrite() or similar
     * // At 410b48-410b54: Alternate path calls GP[-31436/4]() with no visible args
     * // At 410b64-410b78: Epilogue
     * t0 = *(sp + 100);  // pointer to structure
     * global_via_gp[-32660/4] = t0->field_0x1c;  // store field at offset 28 to global
     * return;
     * ```
     * GP offsets to resolve: -31400 (0x8558), -31436 (0x8534), -32660 (0x806c). The first is likely `lrectwrite` or `rectwrite` given the coordinate halfwords and double conversions typical of IrisGL raster operations.
     */
halt_baddata();
}
