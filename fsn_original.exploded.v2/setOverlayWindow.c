/**
 * setOverlayWindow
 *
 * Extracted from fsn.c lines 50062-50068
 * Category: Other
 */

void setOverlayWindow(void)

{
  GLXwinset(display,*(undefined4 *)(curcontextwindows + 4));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bc1c):
     * Function: setOverlayWindow
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads `curcontext` pointer, gets `curcontext->contextwindows` (offset 4), loads `mainDisplay` global, then calls `XRaiseWindow(mainDisplay, contextwindows)` to raise the overlay window to the top of the stacking order.
     * 2. **C pseudocode:**
     * ```c
     * void setOverlayWindow(void) {
     * XRaiseWindow(mainDisplay, curcontext->contextwindows);
     * }
     * ```
     * **GP offset resolution:**
     * - gp-30332 (0x8984) → curcontext pointer
     * - gp-30204 (0x8a04) → mainDisplay
     * - gp-32012 (0x82f4) → XRaiseWindow
     * - t6+4 → contextwindows field (offset 4 in context structure)
     */
halt_baddata();
}
