/**
 * FUN_00412400
 *
 * Extracted from fsn.c lines 52890-52900
 * Ghidra address: 0x00412400
 * Category: Other
 */

void FUN_00412400(int param_1)

{
  int unaff_gp;
  undefined4 uVar1;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1804))();
  param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */ = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412400):
     * Function: FUN_00412400
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Sets bits in a flags byte at offset 40 (either stores t8 directly, or clears bits 5-7 and sets bits 6-7 to 0xC0). Then if offset 32 is non-null, extracts top 3 bits of flags as index into a table, loads a structure, and calls a function with color values OR'd with 0xff000000.
     * 2. **C pseudocode:**
     * ```c
     * // At 412580 branch target stores t8 directly:
     * s0->flags = t8;  // offset 40
     * // At 412588 alternate path:
     * s0->flags = (s0->flags & 0xff1f) | 0xc0;  // clear bits 5-7, set bits 6-7
     * // Common path at 41259c:
     * if (s0->child != NULL) {  // offset 32
     * int idx = s0->flags >> 29;  // top 3 bits as index (0-7)
     * ColorEntry *entry = color_table[idx];  // gp-30344 = color table
     * uint32_t color1 = entry->color1 | 0xff000000;  // offset 32, force alpha=255
     * uint32_t color2 = entry->color2 | 0xff000000;  // offset 20
     * some_color_func(s0->child, color1, color2, color1);  // gp-30672
     * }
     * ```
     * The flags byte uses bits 5-7 (mask 0xE0) as a 3-bit color scheme index. The 0xff00 lui creates alpha mask for ARGB colors.
     */
halt_baddata();
}
