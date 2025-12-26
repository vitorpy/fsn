/**
 * FUN_0040bfec
 *
 * Extracted from fsn.c lines 50205-50227
 * Ghidra address: 0x0040bfec
 * Category: Other
 */

void FUN_0040bfec(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58e4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58dc)));
  uVar1 = /* TODO: GP:-0x7ca4 */ (**(code **)(unaff_gp + -0x7ca4) /* -> EXTERNAL_0x0f895020 */)();
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x14) = uVar1;
  uVar1 = /* TODO: GP:-0x7ca0 */ (**(code **)(unaff_gp + -0x7ca0) /* -> EXTERNAL_0x0f895190 */)(fVar2);
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x18) = uVar1;
  uVar1 = /* TODO: GP:-0x7c90 */ (**(code **)(unaff_gp + -0x7c90) /* -> EXTERNAL_0x0f895660 */)(fVar2);
  *(undefined4 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bfec):
     * Function: FUN_0040bfec
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls two trig functions (sin at gp-31904, cos at gp-31888) with the same float argument from sp+36, stores results to offsets 20, 24, 28 of a structure pointed to by the global at gp-30340 (curcontext), then returns.
     * 2. **C pseudocode:**
     * ```c
     * float angle = *(float*)(sp + 0x24);  // local variable
     * curcontext->field_0x14 = sinf(angle);  // offset 20
     * curcontext->field_0x18 = sinf(angle);  // offset 24 (note: same sin result stored twice based on jalr pattern)
     * curcontext->field_0x1c = cosf(angle);  // offset 28
     * return;
     * ```
     * Wait, re-reading: the first store at 40c054 uses t8 (different register), while 40c080 and 40c0ac use t9/t0 loaded from gp-30340. The gp-30340 offset (0x897c) is likely `curcontext`. The structure fields at offsets 20/24/28 (0x14/0x18/0x1c) are being set with sin/cos of the angle parameter - likely camera rotation angles (sin_angle, sin_angle, cos_angle pattern suggests view direction calculation).
     */
halt_baddata();
}
