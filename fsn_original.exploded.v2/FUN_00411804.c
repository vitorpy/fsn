/**
 * FUN_00411804
 *
 * Extracted from fsn.c lines 52382-52392
 * Ghidra address: 0x00411804
 * Category: Other
 */

void FUN_00411804(int param_1)

{
  if (displayHeight == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x00411804):
     * Function: FUN_00411804
     *
     * Looking at this MIPS assembly:
     * 1. **What it does:** Checks if `curcontext` is NULL. If NULL, returns a float from GP offset -30172 + 0x80. Otherwise, calls a function at GP+6004 with `arg->field_0xc`, multiplies the result by a global float at offset 0x66b0, then uses another global at offset 0x80.
     * 2. **C pseudocode:**
     * ```c
     * float FUN_00411804(void *param) {
     * if (curcontext == NULL) {
     * return some_global_float;  // GP[-30172] + 0x80
     * }
     * float result = some_func(*(int*)((char*)param + 12));  // param->field_0xc
     * double scaled = (double)result * (double)global_scale_factor;  // offset 0x66b0
     * // continues with more computation using global at offset 0x80...
     * }
     * ```
     * The function appears to compute a scaled value based on context state - likely a coordinate or dimension calculation. The GP offsets suggest it uses `curcontext` (-30428 = 0x8924) and accesses floating-point globals for scaling.
     */
halt_baddata();
  }
  FUN_00411774(param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411804):
     * Function: FUN_00411804
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Computes `result = input * scale_factor`, then clamps: if result < max_value, return max_value, else return result. This is a "clamp to minimum" operation where the "minimum" is loaded from a global (likely a maximum allowed value that serves as a floor).
     * **C pseudocode:**
     * ```c
     * float FUN_00411804(float input) {
     * float scale = *(float*)(global_66b0);      // gp-32660 -> offset 0x66b0
     * float max_val = *(float*)(curcontext + 128); // gp-30172 -> curcontext, offset 0x80
     * float result = input * scale;
     * if (result < max_val) {
     * return max_val;
     * }
     * return result;
     * }
     * ```
     * **GP offsets resolved:**
     * - `gp-32660` (0x806c) → likely points to a view/zoom scale factor
     * - `gp-30172` (0x8a24) → curcontext pointer, offset 128 (0x80) is a clamp threshold
     * This appears to be a zoom/scale clamping function - scales a value and ensures it doesn't go below a minimum threshold stored in the current context.
     */
halt_baddata();
}
