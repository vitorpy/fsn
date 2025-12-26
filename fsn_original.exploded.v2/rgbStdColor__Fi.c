/**
 * rgbStdColor__Fi
 *
 * Extracted from fsn.c lines 72372-72388
 * Category: Graphics
 */

void rgbStdColor__Fi(uint param_1)

{
  if ((int)param_1 < 0) {
    if (param_1 >> 0x18 == 0) {
      cpack((&DAT_10017010)[((int)(-param_1 & 0xf0) >> 4) + (-param_1 & 0xf) * 0x10]);
    }
    else {
      cpack(param_1 & 0xffffff);
    }
  }
  else {
    cpack((&DAT_10016fd0)[param_1]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004341f0):
     * Function: rgbStdColor__Fi
     *
     * ## Analysis
     * **1. What it does:**
     * Checks if high byte of color index is set (packed RGB). If so, masks to 24-bit RGB and calls cpack(). Otherwise, negates the index, extracts row (bits 4-7) and column (bits 0-3), looks up color from a 16x16 palette table at DAT_base+0x7010, and calls cpack() with that value.
     * **2. C pseudocode:**
     * ```c
     * void rgbStdColor(int color_index) {
     * if ((color_index >> 24) != 0) {
     * // High byte set = packed RGB color
     * cpack(color_index & 0x00ffffff);
     * } else {
     * // Negative index into color palette
     * int idx = -color_index;
     * int row = (idx & 0xf0) >> 4;   // bits 4-7
     * int col = idx & 0x0f;          // bits 0-3
     * // Palette is 16x16, each entry 4 bytes, row stride = 64 bytes
     * int offset = col * 64 + row * 4;
     * unsigned int *palette = (unsigned int *)(DAT_10006e20 + 0x7010);  // 0x1000de30
     * cpack(palette[offset / 4]);
     * }
     * }
     * ```
     * **GP offsets:**
     * - gp-31644 (0x8464) = cpack
     * - gp-32660 (0x806c) = pointer to data section base (DAT_10006e20), +0x7010 = color palette at 0x1000de30
     */
halt_baddata();
}
