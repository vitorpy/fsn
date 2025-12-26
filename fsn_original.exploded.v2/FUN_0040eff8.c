/**
 * FUN_0040eff8
 *
 * Extracted from fsn.c lines 51169-51180
 * Ghidra address: 0x0040eff8
 * Category: Other
 */

void FUN_0040eff8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) != 0) {
    displayDirectoryHeight = param_2;
    update_display();
    redraw_gl_scene();
    FUN_0042a8e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040eff8):
     * Function: FUN_0040eff8
     *
     * Looking at the assembly:
     * 1. **What it does**: Checks if `a2[2]` (offset 8) is zero. If non-zero, stores `a1` to a global, then calls 3 functions via GP-relative addresses (likely GL state functions: pushmatrix/translate/popmatrix or similar sequence).
     * 2. **C pseudocode**:
     * ```c
     * void FUN_0040eff8(void *a0, int a1, int *a2) {
     * if (a2[2] != 0) {
     * DAT_XXXX = a1;           // gp[-30424] - some global
     * func1();                  // gp[-31352]
     * func2();                  // gp[-31436]
     * func3();                  // gp[-30848]
     * }
     * }
     * ```
     * To get the actual function names, resolve those GP offsets:
     * - GP offset -30424 (0x8928) → global variable being set
     * - GP offset -31352 (0x8588) → first function call
     * - GP offset -31436 (0x8534) → second function call
     * - GP offset -30848 (0x8780) → third function call
     * Run: `python3 analysis/resolve_got.py` with offsets `8928 8588 8534 8780` to get symbol names.
     */
halt_baddata();
}
