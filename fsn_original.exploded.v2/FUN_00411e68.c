/**
 * FUN_00411e68
 *
 * Extracted from fsn.c lines 52635-52640
 * Ghidra address: 0x00411e68
 * Category: Other
 */

void FUN_00411e68(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411e68):
     * Function: FUN_00411e68
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Looks up a character entry in a font table. Takes a character code in a0, uses bits 6+ as a font/page index and bits 0-5 as character index within that page. Returns pointer to character data (each entry is 120 bytes: `15*8 = 120`).
     * 2. **C pseudocode:**
     * ```c
     * // a0 = character code
     * // gp[-30140] = font_table (array of font page pointers)
     * int page_index = a0 >> 6;           // upper bits select font page
     * int char_index = a0 & 0x3f;         // lower 6 bits = char within page (0-63)
     * int **font_table = *(gp - 30140);
     * int *page = font_table[page_index];
     * int offset = ((char_index << 4) - char_index) << 3;  // char_index * 120
     * return page + offset;               // pointer to character glyph data
     * ```
     * This is `get_char_data(int charcode)` - returns a pointer to the vector font stroke data for a character. The math `(x*16 - x)*8 = x*120` gives 120 bytes per character entry, matching the vector font format (54 int32s would be 216 bytes, but this could be a compact stroke-only table or the decompiler got the stride wrong).
     */
halt_baddata();
}
