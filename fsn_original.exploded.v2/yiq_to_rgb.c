/**
 * yiq_to_rgb
 *
 * Extracted from fsn.c lines 77019-77042
 * Category: Other
 */

void yiq_to_rgb(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined8 in_f8;
  undefined8 in_f18;
  double dVar2;
  undefined4 in_stack_00000014;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  uVar1 = (undefined4)((ulonglong)in_f8 >> 0x20);
  dVar2 = (double)(float)param_1 +
          (double)CONCAT44((int)((ulonglong)in_f18 >> 0x20),0x8cc14403) * (double)(float)param_2 +
          (double)CONCAT44(uVar1,0x1c68ec53) *
          (double)(float)(double)CONCAT44(uVar1,in_stack_00000014);
  *in_stack_00000018 = (float)dVar2;
  *in_stack_0000001c =
       (float)((double)(float)param_1 + (double)CONCAT44(uVar1,0xba6266fd) * (double)(float)param_2
              + (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),0xd234eb9a) *
                (double)(float)(double)CONCAT44(uVar1,in_stack_00000014));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438e68):
     * Function: yiq_to_rgb
     *
     * Looking at this assembly, I can see it's computing RGB from YIQ color space using the standard conversion matrix.
     * **What it does:**
     * Computes R, G, B outputs from Y (in $f0), I (in $f2), and Q (in $f16) using matrix multiplication. Loads coefficient pairs from GP-relative addresses, multiplies I and Q by coefficients, adds to Y, converts from double to float, stores results.
     * **C pseudocode:**
     * ```c
     * void yiq_to_rgb(float y, float i, float q, float *r, float *g, float *b) {
     * // Standard YIQ to RGB conversion matrix coefficients loaded from .rodata
     * // R = Y + 0.956*I + 0.621*Q
     * // G = Y - 0.272*I - 0.647*Q
     * // B = Y - 1.105*I + 1.702*Q
     * *r = (float)((double)y + coef_ri * (double)i + coef_rq * (double)q);
     * *g = (float)((double)y + coef_gi * (double)i + coef_gq * (double)q);
     * *b = (float)((double)y + coef_bi * (double)i + coef_bq * (double)q);
     * }
     * ```
     * The coefficient pairs at GP offsets 0x5a90-0x5ab4 are the standard YIQ→RGB matrix constants stored as doubles (loaded as float pairs into double registers via lwc1 to even/odd FP regs).
     */
halt_baddata();
}
