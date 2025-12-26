/**
 * FUN_0041aeec
 *
 * Extracted from fsn.c lines 57558-57590
 * Ghidra address: 0x0041aeec
 * Category: Other
 */

void FUN_0041aeec(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  float fVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c)) {
      (**(code **)(unaff_gp + -0x7aa4) /* -> do_warp */)() /* =do_warp */;
    }
    if (param_2 != 0) {
      iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
      if (*(char *)(iVar1 + 5) == '\0') {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      else {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                ((double)param_2->child_count /* was: *(float *)(param_2 + 0x14) */ -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * (double)fVar2,
                 ((double)param_2->child_array /* was: *(float *)(param_2 + 0x18) */ +
                 (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)uVar3 << 0x20)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * (double)fVar2) /* =FUN_00410264 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041aeec):
     * Function: FUN_0041aeec
     *
     * ## Analysis
     * **1. What it does:**
     * Computes interpolated 3D coordinates using linear algebra on float values from two structures (v1/a0 and a1), then calls a function via GP offset -31400 (0x8558) with the results packed on the stack.
     * **2. C pseudocode:**
     * ```c
     * // Registers: a0=struct1, a1=struct2, v1=struct3, a0+0xa4=some_val
     * // f0,f2,f16,f18 contain previously computed values
     * double d10 = (double)struct3->field_0x18;           // lwc1 f10,24(v1); cvt.d.s
     * double d4 = d10 / d18;                               // div.d f4,f10,f18
     * double d12 = d16 - d6;                               // sub.d f12,f16,f6 (unused?)
     * double d18_new = (double)struct3->field_0x18;        // cvt.d.s f18,f10
     * double d6_new = (double)struct2->field_0x18;         // lwc1 f16,24(a1); cvt.d.s f6,f16
     * double d16_new = d18_new * d0;                       // mul.d f16,f18,f0
     * double d8 = d6_new + d4;                             // add.d f8,f6,f4
     * double y_result = d8 - d16_new;                      // sub.d f14,f8,f16 -> $f14 (arg)
     * double d4_z = (double)struct1->field_0x90;           // lwc1 f6,144(a0); cvt.d.s f4,f6
     * double z_result = d2 + d4_z;                         // add.d f10,f2,f4
     * // Stack setup for function call:
     * // sp+16,20: z_result (double, split f10/f11)
     * // sp+24: 0
     * // sp+28: struct1->field_0xa4
     * // sp+32: a3 (passed through)
     * // sp+36: v0 (passed through)
     * // sp+40: 0
     * func_at_gp_minus_31400(/* f12, f14, plus stack args */);
     * ```
     * **GP offset 0x8558 likely resolves to:** Check with `python3 analysis/resolve_got.py` - probably a drawing or interpolation function like `drawLineSegment` or similar given the coordinate math pattern.
     */
halt_baddata();
}
