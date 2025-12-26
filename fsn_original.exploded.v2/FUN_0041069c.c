/**
 * FUN_0041069c
 *
 * Extracted from fsn.c lines 51806-51812
 * Ghidra address: 0x0041069c
 * Category: Other
 */

void FUN_0041069c(void)

{
  FUN_00410088();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041069c):
     * Function: FUN_0041069c
     *
     * Got it. The GP offset -0x7ab0 (which is -31408 decimal) points to `FUN_00410088`.
     * **Final Answer:**
     * 1. **What it does**: This is a simple wrapper/thunk function that sets up the MIPS calling convention (GP, stack frame), then tail-calls `FUN_00410088` (via GP offset -0x7ab0). Arguments a0, a1, a2 are saved to stack but not used directly - they're passed through to the callee.
     * 2. **C pseudocode**:
     * ```c
     * // FUN_0041069c - Wrapper that calls FUN_00410088
     * // Ghidra marked as "bad instruction data" but it's just a simple wrapper
     * void FUN_0041069c(void) {
     * FUN_00410088();  // GP[-0x7ab0] -> 0x00410088
     * }
     * ```
     * The `halt_baddata()` marker from Ghidra was a false alarm - the assembly is straightforward. The function saves caller's a0/a1/a2 to stack (standard MIPS ABI for varargs or debugging), calls FUN_00410088, then returns. Since FUN_00410088 takes no arguments and this function doesn't use the saved args, it's effectively just a wrapper.
     */
halt_baddata();
}
