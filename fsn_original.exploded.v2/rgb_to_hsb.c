/**
 * rgb_to_hsb
 *
 * Extracted from fsn.c lines 77141-77151
 * Category: Other
 */

void rgb_to_hsb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  rgb_to_hsv((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043955c):
     * Function: rgb_to_hsb
     *
     * Looking at the assembly:
     * 1. **What it does**: Converts three double-precision arguments (R, G, B) to single-precision floats, then calls an external function (at GP-30512, likely the actual HSB conversion routine) passing the floats plus three output pointer arguments from the stack.
     * 2. **C pseudocode**:
     * ```c
     * void rgb_to_hsb(double r, double g, double b, float *h, float *s, float *br) {
     * // r comes in $f12/$f13 (double), g in $f14/$f15, b in $f16/$f17
     * // Output pointers at sp+80, sp+84, sp+88
     * float rf = (float)r;
     * float gf = (float)g;
     * float bf = (float)b;
     * // Call internal HSB conversion (GP-30512 = likely RGBtoHSV or similar)
     * _rgb_to_hsb_internal((double)rf, (double)gf, (double)bf, h, s, br);
     * }
     * ```
     * This is a wrapper that normalizes double inputs to float precision before calling the real implementation. The conversions double→single→double appear intentional to clamp precision to 32-bit float range.
     */
halt_baddata();
}
