/**
 * torgb
 *
 * Extracted from fsn.c lines 77214-77225
 * Category: Other
 */

void torgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  (*(code *)PTR_SUB_10009e30)
            ((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043984c):
     * Function: torgb
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts HSV color components from single-precision floats to double-precision, then calls an external function (likely `hsvtorgb` or similar at GP offset -25040 via indirect call through -32660) with the converted values and three output pointer arguments.
     * 2. **C pseudocode:**
     * ```c
     * void torgb(float h, float s, float v, int *r, int *g, int *b) {
     * // h in $f12, s in $f14, v in $f15 (or similar register allocation)
     * // r, s, g, b pointers at sp+80, sp+84, sp+88
     * double h_d = (double)h;
     * double s_d = (double)s;
     * double v_d = (double)v;
     * hsvtorgb(h_d, s_d, v_d, r, g, b);  // GP[-25040] via GP[-32660]
     * }
     * ```
     * The cvt.s.d/cvt.d.s pairs are widening floats to doubles for the function call (MIPS O32 ABI passes FP args in doubles). The three lw t6/t7/t8 load pointer arguments that get passed on the stack to the callee.
     */
halt_baddata();
}
