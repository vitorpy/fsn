/**
 * highlightDir
 *
 * Extracted from fsn.c lines 64210-64221
 * Category: Filesystem
 */

void highlightDir(void)

{
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_00426ef4();
  }
  else {
    FUN_0041aa04();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427280):
     * Function: highlightDir
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Loads curcontext, checks if curcontext[15] (offset 0x3c = 60) is non-zero. If set, calls one function (likely unhighlightDir at GP-31212), otherwise calls another function (likely highlightDirWork at GP-30992).
     * **2. C pseudocode:**
     * ```c
     * void highlightDir(void) {
     * if (curcontext[15] != 0) {  // offset 0x3c = index 15 (assuming 4-byte elements)
     * unhighlightDir();       // GP offset -31212 (0x8614)
     * } else {
     * highlightDirWork();     // GP offset -30992 (0x86f0)
     * }
     * }
     * ```
     * GP offset -30340 (0x897c) is curcontext pointer. The function toggles highlight state - if already highlighted (field at +60 set), unhighlight; otherwise do the highlight work.
     */
halt_baddata();
}
