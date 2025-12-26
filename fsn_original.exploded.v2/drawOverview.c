/**
 * drawOverview
 *
 * Extracted from fsn.c lines 60767-60781
 * Category: Graphics
 */

void drawOverview(void)

{
  if (overviewActive != '\0') {
    FUN_0041fd70();
    cpack(DAT_100175f0);
    clear();
    if (topdir != 0) {
      FUN_00420408(topdir,0);
    }
    swapbuffers();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004207a8):
     * Function: drawOverview
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls an IrisGL function (likely `swapbuffers` or `gflush`), then if `topdir` is non-NULL, calls a draw function with args (topdir, 0), then calls another GL cleanup function before returning.
     * **2. C pseudocode:**
     * ```c
     * swapbuffers();  // or gflush() - GP offset -31992
     * if (topdir != NULL) {
     * draw_tree_recursive(topdir, 0);  // GP offset -31120, a1=0
     * }
     * popmatrix();  // or similar cleanup - GP offset -31572
     * ```
     * To get exact function names, resolve the GP offsets:
     * - GP-31992 (0x8308) → likely `swapbuffers` or `gflush`
     * - GP-30420 (0x892c) → `topdir` global pointer
     * - GP-31120 (0x8670) → recursive draw function (takes node + depth/flag)
     * - GP-31572 (0x84ac) → `popmatrix` or similar
     */
halt_baddata();
}
