/**
 * makeColorBoxes
 *
 * Extracted from fsn.c lines 65277-65295
 * Category: Other
 */

void makeColorBoxes(void)

{
  if (DAT_10007904 == '\0') {
    FUN_00428288(toplevel);
    DAT_10007904 = '\x01';
  }
  FUN_004286f8(DAT_100175f4,boxDir,7);
  FUN_004286f8(DAT_1001761c,boxRed,0);
  FUN_004286f8(DAT_10017620,boxOrange,1);
  FUN_004286f8(DAT_10017624,boxYellow,2);
  FUN_004286f8(DAT_10017628,boxGreen,3);
  FUN_004286f8(DAT_1001762c,boxCyan,4);
  FUN_004286f8(DAT_10017630,boxBlue,5);
  FUN_004286f8(DAT_10017634,boxMagenta,6);
  FUN_00429040();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00428b60):
     * Function: makeColorBoxes
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Three calls to the same function (GP-0x30936) with widget handles from s0+416/420/424, string resources from GP-indirect loads, and constants 4/5/6. Then calls a final function (GP-0x30928) before returning.
     * **2. C pseudocode:**
     * ```c
     * // GP-0x30936 = XtVaSetValues (offset -30936 = 0x8728)
     * // GP-0x30928 = likely XtManageChildren or similar cleanup
     * // s0 = panel/form structure pointer
     * XtVaSetValues(s0->widget_416, *colorBoxBackground, 4);  // a2=4
     * XtVaSetValues(s0->widget_420, *colorBoxForeground, 5);  // a2=5
     * XtVaSetValues(s0->widget_424, *colorBoxBorder, 6);      // a2=6
     * finalize_widgets();  // GP-0x30928
     * ```
     * The offsets 416(0x1a0), 420(0x1a4), 424(0x1a8) are consecutive widget handles in the structure. The GP-indirect loads at -30360, -30356, -30352 (0x8968, 0x896c, 0x8970) are likely XmN resource string pointers for background/foreground/border colors. Constants 4,5,6 could be color indices or resource types.
     */
halt_baddata();
}
