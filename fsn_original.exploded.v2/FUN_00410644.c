/**
 * FUN_00410644
 *
 * Extracted from fsn.c lines 51793-51800
 * Ghidra address: 0x00410644
 * Category: Other
 */

void FUN_00410644(undefined4 param_1)

{
  set_gl_context(param_1,0);
  FUN_00410088();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410644):
     * Function: FUN_00410644
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls two functions via GP-relative offsets. First call passes `a0` (unchanged) and `a1=0`. Second call takes no visible args. Arguments a1-a3 are saved to stack but never used (likely varargs or Ghidra artifact).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00410644(void *a0, ...) {
     * func_at_gp_minus_30856(a0, 0);  // GP offset -0x7888
     * func_at_gp_minus_31408();        // GP offset -0x7ab0
     * }
     * ```
     * To identify the actual functions, resolve GP offsets:
     * - GP offset -30856 (0x7888) → check your GP_MAPPING.md
     * - GP offset -31408 (0x7ab0) → check your GP_MAPPING.md
     * Run: `grep -E "0x7888|0x7ab0" fsn_original.exploded.cleanup/GP_MAPPING.md` to find the symbol names.
     */
halt_baddata();
}
