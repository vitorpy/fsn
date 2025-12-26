/**
 * overviewLocateHighlight
 *
 * Extracted from fsn.c lines 66000-66010
 * Category: Other
 */

void overviewLocateHighlight(void)

{
  undefined4 uVar1;
  
  FUN_0041fd70();
  uVar1 = FUN_004213c8();
  FUN_00429640(uVar1,0,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429aa0):
     * Function: overviewLocateHighlight
     *
     * Based on my analysis:
     * ---
     * **1. What the assembly does:**
     * Calls `FUN_0041fd70()` (sets GL context for overview), gets the overview window via `FUN_004213c8()` (performs pick/select in overview), then calls `FUN_00429640(result, 0, 0)` to highlight the located item at position (0,0).
     * **2. C pseudocode:**
     * ```c
     * /* overviewLocateHighlight - Highlights item at cursor in overview window
     * * FUN_0041fd70 = set_overview_gl_context (glXMakeCurrent for overview)
     * * FUN_004213c8 = overview_pick_item (GL selection/feedback to find item under cursor)
     * * FUN_00429640 = draw_overview_highlight (renders highlight for picked item)
     * */
     * void overviewLocateHighlight(void) {
     * set_overview_gl_context();           /* Make overview GL context current */
     * int item = overview_pick_item();     /* Returns picked item from GL selection buffer */
     * draw_overview_highlight(item, 0, 0); /* Highlight item at position (0,0) - no offset */
     * }
     * ```
     * The `halt_baddata()` at the end is a Ghidra artifact from function epilogue decoding - the assembly shows a clean `jr ra` return. The function is complete and correct in the assembly.
     */
halt_baddata();
}
