/**
 * destroyCopyright
 *
 * Extracted from fsn.c lines 67182-67188
 * Category: UI
 */

void destroyCopyright(void)

{
  XtDestroyWidget(DAT_10016e10);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b080):
     * Function: destroyCopyright
     *
     * ## Analysis
     * **What it does:**
     * Loads a widget pointer from global data at offset 0x6e10 (28176 bytes into curcontext/contextwindows), then calls XtDestroyWidget on it. This destroys the copyright overlay widget.
     * **C pseudocode:**
     * ```c
     * void destroyCopyright(void) {
     * // GP[-32660] = curcontext (0x806c -> DAT_10009524)
     * // GP[-32456] = XtDestroyWidget (0x8138)
     * // curcontext[0x6e10/4] = curcontext[7044] = copyright widget
     * Widget copyright_widget = ((Widget *)curcontext)[7044];  // offset 0x6e10
     * XtDestroyWidget(copyright_widget);
     * }
     * ```
     * **GP offset resolution:**
     * - GP offset -32660 (0x806c) → curcontext global (DAT_10009524)
     * - GP offset -32456 (0x8138) → XtDestroyWidget function pointer
     * - Offset 0x6e10 (28176) into curcontext = copyright widget storage
     */
halt_baddata();
}
