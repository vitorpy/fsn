/**
 * FUN_004211d4
 *
 * Extracted from fsn.c lines 61078-61113
 * Ghidra address: 0x004211d4
 * Category: Filesystem
 */

void FUN_004211d4(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    iVar4 = param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (window_width <= iVar4) {
      iVar4 = window_width + -1;
    }
    iVar3 = (window_height - param_2->_field_24 /* was: *(int *)(param_2 + 0x24) */) + -1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (window_height <= iVar3) {
      iVar3 = window_height + -1;
    }
    fVar1 = ((float)iVar4 / (float)window_width) * (maxx - minx) + minx;
    fVar2 = ((float)iVar3 / (float)window_height) * (maxy - miny) + miny;
    save_matrix_state();
    set_camera_lookat((double)fVar1 +
                 (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8),
                 (double)fVar2 +
                 (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                 (double)*(float *)(curcontext + 8));
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004211d4):
     * Function: FUN_004211d4
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes two double-precision coordinates by multiplying/adding floats from a structure (offsets 8, 24, 18), loads additional fields (shorts at 12, 14 and pointer at 60), then calls a function via GP offset -31400 (0x8558) with the computed doubles in $f12/$f14 and structure fields on stack.
     * 2. **C pseudocode:**
     * ```c
     * double scale = (double)some_float * (double)param;  // $f2 is input param
     * double coord0 = base_val + (double)struct_ptr->field_8 * scale;   // -> $f12
     * double coord1 = other_val + (double)struct_ptr->field_24 * scale; // -> $f14
     * short arg1 = struct_ptr->field_12;  // offset 12
     * short arg2 = struct_ptr->field_14;  // offset 14
     * void *arg3 = struct_ptr->field_60;  // offset 60
     * // stack args: arg1, arg2, arg3, 0, 0
     * gp_func_8558(coord0, coord1, arg1, arg2, arg3, 0, 0);
     * ```
     * The GP offset 0x8558 (-31400 signed) likely resolves to a drawing/positioning function. The double-precision math suggests coordinate transformation, and the short fields at offsets 12/14 could be dimensions or indices.
     */
halt_baddata();
}
