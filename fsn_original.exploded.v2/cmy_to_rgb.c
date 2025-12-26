/**
 * cmy_to_rgb
 *
 * Extracted from fsn.c lines 76951-76964
 * Category: Other
 */

void cmy_to_rgb(double param_1,double param_2)

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
     * BADDATA ANALYSIS (from binary @ 0x004386e8):
     * Function: cmy_to_rgb
     *
     * ## Analysis
     * **What it does:**
     * Converts CMY (Cyan, Magenta, Yellow) color values to RGB by subtracting each component from 1.0. The formula is: R = 1.0 - C, G = 1.0 - M, B = 1.0 - Y.
     * **C pseudocode:**
     * ```c
     * void cmy_to_rgb(double c, double m, float y_hi, float y_lo, float *r, float *g, float *b) {
     * *r = (float)(1.0 - (double)(float)c);
     * *g = (float)(1.0 - (double)(float)m);
     * *b = (float)(1.0 - (double)y_hi);  // y passed as two floats due to MIPS calling convention
     * }
     * ```
     * **Notes:**
     * - Arguments c, m passed as doubles in $f12-$f13, $f14-$f15 (MIPS O32 ABI)
     * - y is split across stack offsets 0x10, 0x14 (float pair forming double)
     * - Output pointers r, g, b at stack offsets 0x18, 0x1c, 0x20
     * - Constant 1.0 built as 0x3ff00000:00000000 (IEEE 754 double)
     * - Converts double→float→double for arithmetic, then back to float for storage
     */
halt_baddata();
}
