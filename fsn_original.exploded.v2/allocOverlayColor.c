/**
 * allocOverlayColor
 *
 * Extracted from fsn.c lines 61873-61898
 * Category: Other
 */

void allocOverlayColor(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined4 auStack_58 [2];
  char *pcStack_50;
  undefined4 *puStack_4c;
  
  iVar1 = init_display_mode();
  puStack_4c = auStack_58;
  if (iVar1 == 0) {
    pcStack_50 = "overlayColormap";
  }
  else {
    pcStack_50 = "popupColormap";
  }
  XtGetValues(param_1,&pcStack_50,1);
  iVar1 = XAllocNamedColor(display,auStack_58[0],param_2,auStack_64,auStack_70);
  if (iVar1 == 0) {
    fprintf((FILE *)0xfb52904,"Could not allocate overlay color %s\n",param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004220e4):
     * Function: allocOverlayColor
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Calls XAllocNamedColor (at GP-32068) with display, colormap, color_name, and pointers for exact/screen colors. If successful (returns non-zero), returns the pixel value. If fails, calls fprintf (at GP-31752) to print error message, then returns 1.
     * 2. **C pseudocode:**
     * ```c
     * XColor exact_color, screen_color;
     * unsigned long pixel;
     * if (XAllocNamedColor(display, colormap, color_name, &screen_color, &exact_color)) {
     * return screen_color.pixel;  // offset 52 in XColor is pixel field
     * } else {
     * fprintf(stderr, "allocOverlayColor: can't allocate %s\n", color_name);
     * return 1;
     * }
     * ```
     * GP offsets resolved:
     * - GP-30204: display (X Display*)
     * - GP-32068: XAllocNamedColor
     * - GP-32616: stderr (offset +32)
     * - GP-31752: fprintf
     * - GP-32676 + (-17688): format string "allocOverlayColor: can't allocate %s\n"
     */
halt_baddata();
}
