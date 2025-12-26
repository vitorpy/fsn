/**
 * FUN_00420c50
 *
 * Extracted from fsn.c lines 60969-60976
 * Ghidra address: 0x00420c50
 * Category: Other
 */

void FUN_00420c50(void)

{
  FUN_00420b70();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420c50):
     * Function: FUN_00420c50
     *
     * Now I have the answer:
     * ---
     * **Analysis of FUN_00420c50 (0x00420c50-0x00420ca4):**
     * **1. What it does:**
     * Calls FUN_00420b70() then gflush(). The halt_baddata() in Ghidra's output is spurious - the assembly shows a clean function with two GP-indirect calls and proper return. Ghidra failed to resolve the GP-relative function pointers.
     * **2. Correct C equivalent:**
     * ```c
     * void FUN_00420c50(void) {
     * FUN_00420b70();  // GP offset -31108 (0x867c)
     * gflush();        // GP offset -31952 (0x8330)
     * }
     * ```
     * The Ghidra decompile is actually correct (minus the spurious halt_baddata). The assembly confirms:
     * - 0x420c60-0x420c78: Call function at GP-31108 (FUN_00420b70)
     * - 0x420c84-0x420c90: Call function at GP-31952 (gflush)
     * - 0x420c94-0x420ca0: Standard epilogue (restore ra, return)
     */
halt_baddata();
}
