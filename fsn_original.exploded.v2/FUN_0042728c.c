/**
 * FUN_0042728c
 *
 * Extracted from fsn.c lines 64227-64240
 * Ghidra address: 0x0042728c
 * Category: Other
 */

void FUN_0042728c(void)

{
  int unaff_gp;
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7910) /* -> FUN_00426ef4 */)() /* =FUN_00426ef4 */;
  }
  else {
    (**(code **)(unaff_gp + -0x79ec) /* -> FUN_0041aa04 */)() /* =FUN_0041aa04 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042728c):
     * Function: FUN_0042728c
     *
     * Looking at the assembly:
     * 1. **What it does**: Loads `curcontext`, checks if `curcontext->field_0x3c` (offset 60) is non-zero. If set, calls one function (GP offset -31212), otherwise calls a different function (GP offset -30992).
     * 2. **C pseudocode**:
     * ```c
     * void highlightDir(void) {
     * if (curcontext[0]->field_0x3c != NULL) {
     * // GP offset -31212 (0x8614) - likely unhighlightDir or clear highlight
     * FUN_at_gp_8614();
     * } else {
     * // GP offset -30992 (0x86f0) - likely set highlight
     * FUN_at_gp_86f0();
     * }
     * }
     * ```
     * **GP offset resolution** (you'll need to verify against your GP_MAPPING.md):
     * - GP offset -30340 (0x897c) → `curcontext`
     * - GP offset -31212 (0x8614) → likely `unhighlightDir` or similar
     * - GP offset -30992 (0x86f0) → likely a highlight-setting function
     * The field at offset 0x3c (60) in the context structure appears to be a "currently highlighted" flag or pointer - the function toggles highlight state based on whether something is already highlighted.
     */
halt_baddata();
}
