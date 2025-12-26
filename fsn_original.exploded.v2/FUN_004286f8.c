/**
 * FUN_004286f8
 *
 * Extracted from fsn.c lines 65183-65271
 * Ghidra address: 0x004286f8
 * Category: Other
 */

void FUN_004286f8(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int unaff_gp;
  float fVar6;
  float fVar7;
  float fVar8;
  uint in_fcsr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar5 = (int)param_1 >> 8 & 0xff;
  fVar8 = (float)((int)param_1 >> 0x10 & 0xff);
  fVar6 = (float)(param_1 & 0xff);
  fVar7 = (float)uVar5;
  (**(code **)(unaff_gp + -0x7730) /* -> rgb_to_hsv */)((double)(param_1 & 0xff),(double)uVar5) /* =rgb_to_hsv */;
  iVar4 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x138))) /* =hsv_to_rgb */
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc) /* -> FUN_004283cc */)
            ((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2 + 0x10) /* =FUN_004283cc */;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x130))) /* =hsv_to_rgb */
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc) /* -> FUN_004283cc */)((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2) /* =FUN_004283cc */;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x140))) /* =hsv_to_rgb */
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar6 = ROUND(fVar6);
  }
  else {
    fVar6 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar7 = ROUND(fVar7);
  }
  else {
    fVar7 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar8 = ROUND(fVar8);
  }
  else {
    fVar8 = FLOOR(fVar8);
  }
  param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */ = (int)fVar6 + (int)fVar7 * 0x100 + (int)fVar8 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004286f8):
     * Function: FUN_004286f8
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * This is the epilogue of a color packing routine. It performs two signed divisions with overflow/divide-by-zero checks (the `break` instructions), shifts results left by 8 and 16 bits respectively, combines them into a packed color value, stores it at offset 36 of a structure (s1), copies another value to offset 40, then returns.
     * **C pseudocode:**
     * ```c
     * // t5 = (t0 + t3), divide by a0 with overflow check
     * int component1 = (t0 + t3) / a0;
     * // t4 from previous mflo, shift left 8
     * int shifted1 = prev_quotient << 8;
     * // Accumulate into t6
     * t6 = t7 + shifted1;
     * // Another division: t5 / a0
     * int component2 = t5 / a0;
     * // Shift left 16 and combine
     * int shifted2 = component2 << 16;
     * int packed_color = t6 + shifted2;
     * s1->field_0x24 = packed_color;  // offset 36 = 0x24
     * s1->field_0x28 = stack_arg;     // offset 40 = 0x28, from sp+104
     * return;
     * ```
     * **Comment version:**
     * ```c
     * // Pack RGB components: (r<<16) | (g<<8) | b, with divide-by-zero/overflow protection
     * // Each component = (accumulated_value / divisor), shifted into position
     * widget->packed_color = (comp2 << 16) | (comp1 << 8) | comp0;
     * widget->user_data = callback_arg;
     * ```
     */
halt_baddata();
}
