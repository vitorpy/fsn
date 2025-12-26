/**
 * newTopWindow
 *
 * Extracted from fsn.c lines 61486-61494
 * Category: Other
 */

void newTopWindow(undefined4 param_1)

{
  (&DAT_10016c10)[numtop] = param_1;
  numtop = numtop + 1;
  FUN_00421c14();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421cd0):
     * Function: newTopWindow
     *
     * Looking at the assembly:
     * 1. **What it does:**
     * Stores the widget pointer (a0) into an array at index from a counter, increments the counter, then calls a function (likely `newCmapWindow`).
     * 2. **C pseudocode:**
     * ```c
     * void newTopWindow(Widget w) {
     * topwindows[numTopWindows] = w;  // topwindows is array at DAT_10006c10 + offset
     * numTopWindows++;                 // numTopWindows is counter at gp[-30396]
     * newCmapWindow(w);               // function at 0x421c14 (gp[-32740] + 7188)
     * }
     * ```
     * The GP offsets resolve to:
     * - `gp[-30396]` → counter (numTopWindows)
     * - `gp[-32660] + 27664` → topwindows array base
     * - `gp[-32740] + 7188` → function pointer (0x421c14 = newCmapWindow based on address)
     */
halt_baddata();
}
