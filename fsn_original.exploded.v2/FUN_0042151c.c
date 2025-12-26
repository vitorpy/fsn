/**
 * FUN_0042151c
 *
 * Extracted from fsn.c lines 61197-61227
 * Ghidra address: 0x0042151c
 * Category: Filesystem
 */

void FUN_0042151c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  FUN_0041fd70();
  iVar1 = FUN_004213c8();
  if (iVar1 == 0) {
    FUN_004211d4(param_1,param_2,param_3,param_4);
  }
  else {
    save_matrix_state();
    FUN_0041d69c(iVar1);
    if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
      dVar2 = (double)iVar1->height /* was: *(float *)(iVar1 + 0x3c) */ / (double)((ulonglong)uVar3 << 0x20) +
              (double)DAT_10017518;
      set_camera_lookat((double)iVar1->pos_x /* was: *(float *)(iVar1 + 0x34) */ - (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * dVar2,
                   (double)iVar1->pos_y /* was: *(float *)(iVar1 + 0x38) */ - (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * dVar2)
      ;
    }
    else if (iVar1 != curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
      do_warp();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042151c):
     * Function: FUN_0042151c
     *
     * Looking at this assembly from `overviewPickPointer`:
     * **What it does:**
     * This is the tail of a picking calculation - it converts single-precision floats to double, performs multiply-subtract operations to compute delta coordinates, then calls a function (likely `pickHighlight` or similar) with the computed pick region. Two branches exist: one for successful pick calculation, one for a fallback path that loads 4 arguments from stack.
     * **C pseudocode:**
     * ```c
     * // Primary path (after halt_baddata):
     * double scale = f18 + f16;  // add.d
     * double dx = (double)x_screen - ((double)x_base * scale);  // cvt + mul + sub
     * double dy = (double)y_screen - ((double)y_base * scale);  // cvt + mul + sub
     * // args in sp+28, sp+32 are pick region bounds, sp+36/40 zeroed
     * pick_function(dx, dy, 0, 0);  // jalr t9 with $f12/$f14 as args
     * goto epilogue;
     * // Fallback path (0x421688):
     * other_pick_func(sp[72], sp[76], sp[80], sp[84]);  // 4 integer args from stack
     * // Epilogue:
     * return;
     * ```
     * The `halt_baddata` likely occurred because Ghidra couldn't track the double-precision register usage across the cvt.d.s/mul.d/sub.d chain combined with the branch delay slot containing `sub.d $f14,$f2,$f6`.
     */
halt_baddata();
}
