/**
 * FUN_00420bfc
 *
 * Extracted from fsn.c lines 60956-60963
 * Ghidra address: 0x00420bfc
 * Category: Other
 */

void FUN_00420bfc(void)

{
  FUN_004207b4();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420bfc):
     * Function: FUN_00420bfc
     *
     * Looking at this assembly:
     * 1. **What it does**: Saves arguments a0, a1, a2 to stack, calls function at GP-31116, then calls function at GP-31952 (ignoring first call's return), returns second call's result.
     * 2. **C pseudocode**:
     * ```c
     * int FUN_00420bfc(int a0, int a1, int a2) {
     * func_at_gp_minus_31116();  // GP-0x798c = likely pushmatrix or similar
     * return func_at_gp_minus_31952();  // GP-0x7cb0 = likely popmatrix or similar
     * }
     * ```
     * Note: The arguments are saved to stack but never used after the first jalr - they were likely passed to the first function call (a0/a1/a2 are preserved across calls in MIPS ABI). The pattern of "call A, then call B, return B's result" with push/pop-style GP offsets suggests this wraps something with matrix or state push/pop. Need to resolve those GP offsets against your GP_MAPPING.md to identify the actual functions.
     */
halt_baddata();
}
