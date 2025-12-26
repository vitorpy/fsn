/**
 * FUN_0042757c
 *
 * Extracted from fsn.c lines 64352-64377
 * Ghidra address: 0x0042757c
 * Category: Other
 */

void FUN_0042757c(int param_1,int param_2)

{
  int unaff_gp;
  undefined4 uVar1;
  
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */,param_1->pos_y /* was: *(undefined4 *)(param_1 + 0x38) */)
  ;
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(param_1->scale /* was: *(undefined4 *)(param_1 + 0x58) */);
  (**(code **)(unaff_gp + -0x7908) /* -> FUN_00427300 */)(param_2) /* =FUN_00427300 */;
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(param_2->child_count /* was: *(undefined4 *)(param_2 + 0x14) */,param_2->child_array /* was: *(undefined4 *)(param_2 + 0x18) */)
  ;
  if (((*(char *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) == '\0') ||
      (*(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 5) == '\0')) ||
     (param_1 != *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44))) {
    uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042757c):
     * Function: FUN_0042757c
     *
     * Looking at this assembly:
     * **What it does:**
     * Compares a value (f4 converted to double in f12) against a range [f2-f0, f2+f0]. Sets bit flags in s0: bit 0 if value >= lower bound, bit 3 if value <= upper bound. Then calls two functions via GP-relative addresses with args (1, s0).
     * **C pseudocode:**
     * ```c
     * double lower = center - half_width;  // f6 = f2 - f0
     * double upper = center + half_width;  // f18 = f2 + f0
     * double test_val = (double)value;     // f12 = cvt.d.s(f4)
     * int flags = s0;
     * if (test_val >= lower)   // c.le.d f12,f6 tests if lower <= test_val
     * flags |= 0x1;
     * if (test_val <= upper)   // c.le.d f18,f12 tests if test_val <= upper
     * flags |= 0x8;
     * gp[-31052](???, 1, flags);  // likely setDrawStyle(1, flags) or similar
     * gp[-31528]();               // likely popmatrix() or end drawing call
     * ```
     * The bit flags (0x1 and 0x8) suggest this is testing whether a point is within a bounding box - likely for highlight/selection visibility culling. Flag 0x1 = "past minimum", flag 0x8 = "before maximum", so both set means "in range".
     */
halt_baddata();
}
