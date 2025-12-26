/**
 * unpruneTree
 *
 * Extracted from fsn.c lines 56069-56079
 * Category: Other
 */

void unpruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  FUN_00417b88();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418890):
     * Function: unpruneTree
     *
     * Looking at this assembly:
     * 1. **What it does:** Clears bit 2 of the flag byte at offset 117 (0x75) in the directory node structure (the "pruned" flag), then calls 4 functions via GP-relative indirect calls to refresh the display.
     * 2. **C pseudocode:**
     * ```c
     * void unpruneTree(DirNode *node) {
     * node->flags &= ~0x04;           // Clear pruned bit at offset 0x75
     * // GP-relative calls - need to resolve these offsets:
     * // gp-31284 (0x85cc), gp-31352 (0x8588), gp-31436 (0x8534), gp-30848 (0x8780)
     * recalc_tree_layout();           // Likely recalculates positions
     * update_display();               // Likely redraws
     * refresh_scene();                // Likely scene refresh
     * redraw_gl_scene();              // Final GL redraw
     * }
     * ```
     * To resolve the actual function names, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-31284 -31352 -31436 -30848"
     * ```
     * The `& 0xfffb` (andi with 0xFFFB) clears bit 2, which matches the pruneTree function that would set this same bit with `| 0x04`.
     */
halt_baddata();
}
