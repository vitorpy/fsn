/**
 * FUN_0042cbb8
 *
 * Extracted from fsn.c lines 67871-67881
 * Ghidra address: 0x0042cbb8
 * Category: Other
 */

void FUN_0042cbb8(undefined4 param_1,undefined *param_2,int param_3)

{
  if (*(int *)(param_3 + 8) != 0) {
    PTR_PTR_100094ec = param_2;
  }
  FUN_0042d618();
  FUN_0042d6f0();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042cbb8):
     * Function: FUN_0042cbb8
     *
     * Looking at this assembly:
     * 1. **What it does:** Conditionally stores `a1` to a global if `a2[2]` (offset 8) is non-zero, then calls two functions sequentially (likely UI update functions based on the -10728 and -10512 offsets from a base pointer).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042cbb8(void *a0, int a1, int *a2) {
     * if (a2[2] != 0) {
     * some_global = a1;  // DAT at gp-32660, offset -27412
     * }
     * hidePreferencePanel();   // gp-32736 + (-10728) = 0x42d618
     * showPreferencePanel();   // gp-32736 + (-10512) = 0x42d6f0
     * }
     * ```
     * The two jalr calls are to functions at computed addresses. Based on the symbol hint in the disassembly (`showPreferencePanel+0x1208`), this appears to be a preference panel toggle/refresh - it stores a value, hides the panel, then shows it again (likely to refresh with new settings). The `a0` parameter is saved but unused in this snippet.
     */
halt_baddata();
}
