/**
 * setOverviewOverlayWindow
 *
 * Extracted from fsn.c lines 60254-60260
 * Category: Other
 */

void setOverviewOverlayWindow(void)

{
  GLXwinset(display,DAT_10016c04);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fda4):
     * Function: setOverviewOverlayWindow
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Loads two global pointers, dereferences them (one at offset 0, one at offset 0x6c04), and calls a function via GP-indirect call. Simple wrapper that passes two dereferenced globals to another function.
     * **GP offset resolution:**
     * - GP offset -30204 (0x8a04): likely `overviewShell` or similar widget pointer
     * - GP offset -32660 (0x806c): likely a context/window structure base
     * - GP offset -32012 (0x82f4): function pointer (probably `XtVaSetValues` or `setOverlayWindow`)
     * **C pseudocode:**
     * ```c
     * void setOverviewOverlayWindow(void) {
     * Widget shell = *overviewShell;           // a0 = *(gp[-30204])
     * Window overlay = contextWindows->overlayWindow;  // a1 = *(gp[-32660] + 0x6c04)
     * XtVaSetValues(shell, overlay);           // or similar function via gp[-32012]
     * }
     * ```
     * **Compact comment form:**
     * ```c
     * // Calls function(*(global1), *(global2 + 0x6c04)) - sets overlay window on overview shell widget
     * ```
     */
halt_baddata();
}
