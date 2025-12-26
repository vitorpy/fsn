/**
 * FUN_004118b0
 *
 * Extracted from fsn.c lines 52398-52411
 * Ghidra address: 0x004118b0
 * Category: Other
 */

void FUN_004118b0(int param_1)

{
  if ((displayHeight != 0) && (displayDirectoryHeight != 0)) {
    if (displayDirectoryHeight == 2) {
      FUN_00411774(param_1->_field_20 /* was: *(undefined4 *)(param_1 + 0x20) */);
    }
    else {
      FUN_00411774(param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004118b0):
     * Function: FUN_004118b0
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Converts a float result ($f0) to double, multiplies by a global scale factor (at GP offset 0x66b4), converts back to float, and returns. There are two nearly identical paths (one at 0x411918, one at 0x411940) that both do this scaling operation - the second path calls a function first via jalr before scaling.
     * **C pseudocode:**
     * ```c
     * float scale_result(float value) {
     * // GP-relative load: scale_factor at offset 0x66b4 from base at GP[-32660]
     * extern float g_scale_factor;  // DAT at gp[-32660] + 0x66b4
     * double temp = (double)value * (double)g_scale_factor;
     * return (float)temp;
     * }
     * ```
     * The double-precision multiply with single-precision operands (cvt.d.s before mul.d, cvt.s.d after) was a common SGI pattern for better precision in intermediate calculations. The GP offset 0x66b4 (26292) likely points to a view or projection scale factor - check `GP_MAPPING.md` for that offset.
     */
halt_baddata();
}
