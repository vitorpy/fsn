/**
 * fromrgb
 *
 * Extracted from fsn.c lines 77231-77242
 * Category: Other
 */

void fromrgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  (*(code *)PTR_SUB_10009e34)
            ((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004398e0):
     * Function: fromrgb
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts RGB float arguments from single to double precision, loads 3 integer parameters from stack (t6, t7, t8), then calls a function via GP-relative indirect call (offset -25036 from t9, which was loaded from GP-32660). This is passing RGB as doubles plus 3 extra int args.
     * 2. **C pseudocode:**
     * ```c
     * void fromrgb(float r, float g, float b, int arg4, int arg5, int arg6) {
     * // GP indirect call: gp[-32660] -> t9, then t9[-25036] -> actual function
     * // Likely calling an IrisGL color function like c3f or RGBcolor
     * double rd = (double)r;
     * double gd = (double)g;
     * double bd = (double)b;
     * (*indirect_func)(rd, gd, bd, arg4, arg5, arg6);
     * }
     * ```
     * The GP offset -32660 (0x806c) likely resolves to a GOT entry pointing to an IrisGL/GL color-setting function. The double conversions suggest this wraps a function expecting double-precision color values, possibly `RGBcolor()` or similar from the IRIS GL library that took doubles before OpenGL standardized on floats.
     */
halt_baddata();
}
