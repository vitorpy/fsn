/**
 * makeColorBox
 *
 * Extracted from fsn.c lines 64929-65006
 * Category: Other
 */

void makeColorBox(uint param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_fcsr;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  
  rgb_to_hsv((double)(param_1 & 0xff),(double)((int)param_1 >> 8 & 0xff));
  param_2[1] = param_1;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  *param_2 = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  param_2[3] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
  hsv_to_rgb((double)fStack_10,(double)fStack_14);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fStack_1c);
  }
  else {
    fVar1 = FLOOR(fStack_1c);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fStack_20);
  }
  else {
    fVar2 = FLOOR(fStack_20);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fStack_24);
  }
  else {
    fVar3 = FLOOR(fStack_24);
  }
  param_2[2] = (int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004283c0):
     * Function: makeColorBox
     *
     * ## Analysis
     * **What it does:**
     * Converts 3 float values to integers with truncation (toward zero) rounding mode, then packs them into a single 32-bit RGB color value: `(blue << 16) | (green << 8) | red`. Stores result at offset 8 of a structure pointer.
     * **C pseudocode:**
     * ```c
     * // sp+68 = blue (float), $f8 = green (float), $f10 = red (float)
     * // t6 (sp+108) = destination struct pointer
     * int red = (int)red_float;      // truncate to int
     * int green = (int)green_float;  // truncate to int
     * int blue = (int)blue_float;    // truncate to int
     * unsigned int packed_rgb = red | (green << 8) | (blue << 16);
     * dest_struct->color = packed_rgb;  // offset 8
     * ```
     * **Note:** The `ctc1/cfc1` with `ori 0x3; xori 0x2` sequence sets MIPS FPU rounding mode to truncate (round toward zero) for the `cvt.w.s` conversions, then restores original rounding mode. This is standard MIPS idiom for C-style float-to-int truncation.
     */
halt_baddata();
}
