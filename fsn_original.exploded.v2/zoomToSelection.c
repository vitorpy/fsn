/**
 * zoomToSelection
 *
 * Extracted from fsn.c lines 60121-60132
 * Category: Input
 */

void zoomToSelection(void)

{
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_00427870(curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */,curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */);
  }
  else {
    FUN_0041aeec(curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */,curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fba8):
     * Function: zoomToSelection
     *
     * ## Analysis
     * **What it does:**
     * Loads curcontext, checks if context[15] (offset 60) is non-zero. If set, calls one zoom function with context[17] and context[18] as args; otherwise calls a different zoom function with same args.
     * **GP offset resolution:**
     * - GP offset -30340 (0x897c) = curcontext
     * - GP offset -31204 (0x861c) = likely `zoomToNode` or `zoomToItem` (zoom when selection exists)
     * - GP offset -30972 (0x8704) = likely `zoomToPosition` or `zoomToCoords` (zoom to raw coords)
     * **C pseudocode:**
     * ```c
     * void zoomToSelection(void) {
     * int *ctx = curcontext;
     * if (ctx[15] != 0) {
     * // Selection exists - zoom to selected item
     * zoomToNode(ctx[17], ctx[18]);
     * } else {
     * // No selection - zoom to position
     * zoomToPosition(ctx[17], ctx[18]);
     * }
     * }
     * ```
     * **Context offsets used:**
     * - ctx[15] (offset 60/0x3c) = selection flag or selected item pointer
     * - ctx[17] (offset 68/0x44) = target X or node pointer
     * - ctx[18] (offset 72/0x48) = target Y or secondary param
     */
halt_baddata();
}
