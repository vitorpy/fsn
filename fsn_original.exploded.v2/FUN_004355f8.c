/**
 * FUN_004355f8
 *
 * Extracted from fsn.c lines 73626-73631
 * Ghidra address: 0x004355f8
 * Category: Other
 */

void FUN_004355f8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004355f8):
     * Function: FUN_004355f8
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if float $f12 (input arg) equals 0x4f000000 (2147483648.0f, i.e., 2^31). Returns 0 if input < that value OR input > that value (i.e., not equal). Falls through otherwise.
     * 2. **C pseudocode**:
     * ```c
     * int FUN_004355f8(float f) {
     * const float threshold = 2147483648.0f;  // 0x4f000000
     * if (f < threshold || f > threshold) {
     * return 0;
     * }
     * // falls through (no explicit return - undefined behavior or continues)
     * }
     * ```
     * **Note**: This appears to be a helper for float-to-int conversion edge cases. The value 2^31 is the boundary where a float exceeds signed 32-bit int range. The function name `bitpat__Ff` suggests it's compiler-generated (name-mangled C++ or runtime support). Returns 0 for "normal" floats, likely returns something else (via fall-through) when exactly at the 2^31 boundary - probably part of SGI's libm or compiler runtime for handling float→int overflow detection.
     */
halt_baddata();
}
