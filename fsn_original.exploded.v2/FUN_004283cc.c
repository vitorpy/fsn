/**
 * FUN_004283cc
 *
 * Extracted from fsn.c lines 65012-65090
 * Ghidra address: 0x004283cc
 * Category: Other
 */

void FUN_004283cc(uint param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int unaff_gp;
  uint in_fcsr;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  (**(code **)(unaff_gp + -0x7730) /* -> rgb_to_hsv */)((double)(param_1 & 0xff),(double)((int)param_1 >> 8 & 0xff)) /* =rgb_to_hsv */;
  param_2[1] = param_1;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14) /* =hsv_to_rgb */;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  *param_2 = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14) /* =hsv_to_rgb */;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  param_2[3] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  (**(code **)(unaff_gp + -0x7744) /* -> hsv_to_rgb */)((double)local_10,(double)local_14) /* =hsv_to_rgb */;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(local_1c);
  }
  else {
    fVar1 = FLOOR(local_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(local_20);
  }
  else {
    fVar2 = FLOOR(local_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(local_24);
  }
  else {
    fVar3 = FLOOR(local_24);
  }
  param_2[2] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004283cc):
     * Function: FUN_004283cc
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts three float values to integers using truncation toward zero (FCSR manipulation sets rounding mode), packs them into a single 32-bit value as (int_z << 16) | (int_y << 8) | int_x, and stores to offset 8 of a structure pointer from stack.
     * 2. **C pseudocode:**
     * ```c
     * // sp+68 = float z, f10 = float y (already converted to int in t8), f8 = float x
     * // t6 = pointer from sp+108
     * int x = (int)truncf(f8);      // cvt.w.s with truncation rounding
     * int y = t8;                    // already have int from f10
     * int z = (int)truncf(f16);     // cvt.w.s with truncation rounding
     * int packed = y | (x << 8) | (z << 16);
     * t6->field_8 = packed;         // store at offset 8
     * return;
     * ```
     * The FCSR manipulation (ori 0x3, xori 0x2) sets rounding mode to truncate-toward-zero before each cvt.w.s, then restores original mode. This packs RGB color components or 3D coordinates into a single 32-bit word.
     */
halt_baddata();
}
