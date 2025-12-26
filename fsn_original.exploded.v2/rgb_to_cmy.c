/**
 * rgb_to_cmy
 *
 * Extracted from fsn.c lines 77064-77077
 * Category: Other
 */

void rgb_to_cmy(double param_1,double param_2)

{
  uint in_register_00001000;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  *in_stack_00000018 =
       (float)((double)((ulonglong)in_register_00001000 << 0x20) - (double)(float)param_1);
  *in_stack_0000001c =
       (float)((double)((ulonglong)in_register_00001000 << 0x20) - (double)(float)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438f68):
     * Function: rgb_to_cmy
     *
     * ## Analysis
     * **What it does:**
     * Converts RGB color values to CMY (Cyan, Magenta, Yellow) by subtracting each component from 1.0. The function takes R, G, B as floats and writes C, M, Y to output pointers.
     * **C pseudocode:**
     * ```c
     * void rgb_to_cmy(double r, double g, float b_hi, float b_lo,
     * float *c_out, float *m_out, float *y_out)
     * {
     * // MIPS calling convention: doubles in $f12-$f13, $f14-$f15
     * // Additional args on stack at sp+16, sp+20, sp+24, sp+28, sp+32
     * float r_f = (float)r;
     * float g_f = (float)g;
     * float b_f = /* from stack sp+16/sp+20 as double */;
     * *c_out = 1.0f - r_f;  // Cyan = 1 - Red
     * *m_out = 1.0f - g_f;  // Magenta = 1 - Green
     * *y_out = 1.0f - b_f;  // Yellow = 1 - Blue
     * }
     * ```
     * **Simplified practical form:**
     * ```c
     * void rgb_to_cmy(float r, float g, float b, float *c, float *m, float *y)
     * {
     * *c = 1.0f - r;
     * *m = 1.0f - g;
     * *y = 1.0f - b;
     * }
     * ```
     * Note: The assembly shows the MIPS O32 ABI quirk where float args may be passed as doubles in register pairs, hence all the cvt.s.d/cvt.d.s conversions. The 0x3ff0_0000_0000_0000 constant is 1.0 in IEEE-754 double precision.
     */
halt_baddata();
}
