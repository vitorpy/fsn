/**
 * FUN_00426dc0
 *
 * Extracted from fsn.c lines 64022-64035
 * Ghidra address: 0x00426dc0
 * Category: Other
 */

void FUN_00426dc0(void)

{
  int unaff_gp;
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7924) /* -> FUN_0042631c */)() /* =FUN_0042631c */;
  }
  else {
    (**(code **)(unaff_gp + -0x79f8) /* -> FUN_0041a358 */)() /* =FUN_0041a358 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426dc0):
     * Function: FUN_00426dc0
     *
     * Looking at the GP offsets and structure:
     * **What it does:**
     * Loads curcontext pointer, checks if curcontext[15] (offset 60 = 0x3c, likely a "picking active" flag) is non-zero. If zero, calls one function (likely start_pick or enable_picking); if non-zero, calls another function (likely end_pick or process_pick).
     * **C pseudocode:**
     * ```c
     * void FUN_00426dc0(void) {
     * if (curcontext[15] == 0) {
     * // GP offset -31012 (0x86dc) - likely initiate_pick or qdevice
     * FUN_at_gp_86dc();
     * } else {
     * // GP offset -31224 (0x8608) - likely process_pick or endpick
     * FUN_at_gp_8608();
     * }
     * }
     * ```
     * **GP offset resolution needed:**
     * - gp-30340 (0x897c) = curcontext pointer
     * - gp-31012 (0x86dc) = function called when flag is 0
     * - gp-31224 (0x8608) = function called when flag is non-zero
     * This appears to be a pick toggle or pick state handler - toggles between starting and ending a pick operation based on whether one is already in progress. The offset 60 in curcontext likely stores the pick state/mode.
     */
halt_baddata();
}
