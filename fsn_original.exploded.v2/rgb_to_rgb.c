/**
 * rgb_to_rgb
 *
 * Extracted from fsn.c lines 77048-77058
 * Category: Other
 */

void rgb_to_rgb(double param_1,double param_2)

{
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  *in_stack_00000018 = (float)param_1;
  *in_stack_0000001c = (float)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438f34):
     * Function: rgb_to_rgb
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts three double-precision values to single-precision floats and stores them through three output pointers. The inputs come from register pairs ($f12/$f13, $f14/$f15) and stack (sp+16/sp+20 as double). Output pointers are at sp+24, sp+28, sp+32.
     * 2. **C equivalent:**
     * ```c
     * void rgb_to_rgb(double r, double g, double b, float *out_r, float *out_g, float *out_b) {
     * *out_r = (float)r;
     * *out_g = (float)g;
     * *out_b = (float)b;
     * }
     * ```
     * The function converts RGB color values from double to float precision, likely for passing to IrisGL functions that expect floats.
     */
halt_baddata();
}
