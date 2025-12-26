/**
 * rgb_to_irgb
 *
 * Extracted from fsn.c lines 77083-77113
 * Category: Other
 */

void rgb_to_irgb(double param_1,double param_2)

{
  uint in_register_00001000;
  uint in_register_00001010;
  double dVar1;
  byte in_fcsr;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  
  dVar1 = (double)(float)param_1 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_00000018 = (int)dVar1;
  dVar1 = (double)(float)param_2 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_0000001c = (int)dVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438fd4):
     * Function: rgb_to_irgb
     *
     * ## Analysis of rgb_to_irgb Assembly (0x439034-0x4390ac)
     * **What it does:**
     * Converts two float RGB components to integers using "round toward zero" mode. The FPU control/status register (FCSR) is temporarily modified to set rounding mode, then restored. Each float is scaled by a multiplier ($f0) and offset by $f2, then truncated to int.
     * **C pseudocode:**
     * ```c
     * // t9 = output ptr for first component, t1 = output ptr for second
     * // $f18 = first input float, $f16/$f17 = second input (as double)
     * // $f0 = scale factor (likely 255.0), $f2 = offset (likely 0.5 for rounding)
     * // First component: scale, offset, truncate to int
     * double temp1 = (double)input_float1 * scale + offset;
     * *out_ptr1 = (int)temp1;  // with round-toward-zero
     * // Second component: same operation
     * double temp2 = (double)input_float2 * scale + offset;
     * *out_ptr2 = (int)temp2;  // with round-toward-zero
     * ```
     * **Key detail:** The `ori/xori` sequence (`ori $at,$t8,0x3; xori $at,$at,0x2`) sets FCSR rounding mode bits to 01 (round toward zero/truncate), which is the standard way to implement C-style float-to-int conversion on MIPS. The original FCSR value is saved and restored after each conversion.
     */
halt_baddata();
}
