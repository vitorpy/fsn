/**
 * cIconGetValue
 *
 * Extracted from fsn.c lines 71983-71988
 * Category: Other
 */

void cIconGetValue(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433bfc):
     * Function: cIconGetValue
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a pointer from offset +20 of the first argument (a0), then indexes into an array at offset +68 using the second argument (a1) as the index (scaled by 4 for pointer/int size).
     * 2. **C pseudocode:**
     * ```c
     * int cIconGetValue(void *icon, int index) {
     * int *array = *(int **)((char *)icon + 20);  // icon->field_0x14
     * return array[index + 17];  // offset 68 = 17 * 4, so base index 17
     * }
     * ```
     * Or more simply if we assume the structure:
     * ```c
     * int cIconGetValue(IconStruct *icon, int index) {
     * return icon->values[index].field_0x44;  // +20 gets values array, +68 into each element
     * }
     * ```
     * The `+68` (0x44) offset suggests indexing into a struct array where each element has a value at offset 0x44, OR it's a flat array starting at offset 68 from the base pointer at +20.
     */
halt_baddata();
}
