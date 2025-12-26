/**
 * rgb_to_yiq
 *
 * Extracted from fsn.c lines 77157-77181
 * Category: Other
 */

void rgb_to_yiq(double param_1,double param_2)

{
  undefined8 in_f6;
  double dVar1;
  undefined8 in_f8;
  double dVar2;
  undefined4 in_register_00001090;
  undefined4 in_stack_00000014;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  dVar2 = (double)(float)(double)CONCAT44((int)((ulonglong)in_f8 >> 0x20),in_stack_00000014);
  dVar1 = (double)CONCAT44(in_register_00001090,0xc28f5c29) * dVar2;
  *in_stack_00000018 =
       (float)((double)(float)param_1 * (double)CONCAT44(in_register_00001090,0x33333333) +
               (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0xae147ae1) * (double)(float)param_2
              + dVar1);
  *in_stack_0000001c =
       (float)(((double)(float)param_1 * (double)CONCAT44(in_register_00001090,0x33333333) -
               (double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),0x1eb851ec) * (double)(float)param_2
               ) - (double)CONCAT44(in_register_00001090,0x47ae147b) * dVar2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004395ec):
     * Function: rgb_to_yiq
     *
     * Looking at this assembly:
     * 1. **What it does**: Computes YIQ color space I and Q components from RGB using the standard NTSC conversion matrix. Loads 9 float constants from GP-relative addresses, performs multiply-add/subtract operations in double precision, converts results to single precision, and stores I to [t7] and Q to [t8].
     * 2. **C pseudocode**:
     * ```c
     * // RGB to YIQ conversion (I and Q components)
     * // Input: r, g, b in $f0, $f2, $f16 (as doubles)
     * // Output: *i_out (t7+0), *q_out (t8+0)
     * // I = 0.596*R - 0.275*G - 0.321*B  (or similar NTSC coefficients)
     * double i_val = coef1*r - coef2*g - coef3*b;
     * *i_out = (float)i_val;
     * // Q = 0.212*R - 0.523*G + 0.311*B  (or similar)
     * double q_val = coef4*r - coef5*g + coef6*b;
     * *q_out = (float)q_val;
     * ```
     * The GP-relative loads at offsets 0x5b04-0x5b24 contain the YIQ conversion matrix coefficients (standard NTSC values). The function signature is likely: `void rgb_to_yiq(float r, float g, float b, float *i, float *q)` with Y computed earlier in the function before the halt_baddata marker.
     */
halt_baddata();
}
