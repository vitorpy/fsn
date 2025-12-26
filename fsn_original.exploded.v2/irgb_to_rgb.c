/**
 * irgb_to_rgb
 *
 * Extracted from fsn.c lines 76936-76945
 * Category: Other
 */

void irgb_to_rgb(int param_1,int param_2,undefined4 param_3,float *param_4,float *param_5)

{
  uint in_register_00001000;
  
  *param_4 = (float)((double)param_1 / (double)((ulonglong)in_register_00001000 << 0x20));
  *param_5 = (float)((double)param_2 / (double)((ulonglong)in_register_00001000 << 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438688):
     * Function: irgb_to_rgb
     *
     * Looking at the assembly:
     * 1. **What it does**: Converts three integer color components (a0, a1, a2 = R, G, B as 0-255 integers) to floating point normalized values (0.0-1.0) by dividing each by 255.0. Results stored via pointers a3, sp+16, sp+20.
     * 2. **C pseudocode**:
     * ```c
     * void irgb_to_rgb(int r, int g, int b, float *out_r, float *out_g, float *out_b) {
     * // Divisor 255.0 loaded from GP-relative constant
     * *out_r = (float)r / 255.0f;
     * *out_g = (float)g / 255.0f;
     * *out_b = (float)b / 255.0f;
     * }
     * ```
     * Note: The assembly uses double-precision intermediate math (cvt.d.w, div.d) then converts back to single (cvt.s.d) for accuracy - typical MIPS floating point pattern. The constant 255.0 is loaded as a double from the GOT-relative address (lwc1 from gp-relative `at` register).
     */
halt_baddata();
}
