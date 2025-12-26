/**
 * getbeam
 *
 * Extracted from fsn.c lines 65584-65593
 * Category: Other
 */

void getbeam(void)

{
  if (DAT_10007988 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x00429284):
     * Function: getbeam
     *
     * **Assembly Analysis:**
     * 1. Loads a global pointer from GP-relative address (offset -32664), then loads a value at offset 31112 (0x7988) from that pointer. Returns 0 if the loaded value is zero, otherwise returns (value + 1).
     * 2. C pseudocode:
     * ```c
     * int getbeam(void) {
     * int *base = *(int **)(gp - 32664);  // likely curcontext or similar global
     * int val = base[31112/4];            // offset 0x7988 into structure
     * if (val == 0)
     * return 0;
     * return val + 1;
     * }
     * ```
     * The GP offset -32664 (0x8068) likely resolves to `curcontext`. Offset 0x7988 = 31112 bytes into the context structure. This appears to get a "beam" index/count, returning 0 if none exists, or the 1-based index otherwise.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429284):
     * Function: getbeam
     *
     * **What it does:**
     * Loads a value from GP-relative offset 31112 (0x7988). If the value is zero, returns 0. Otherwise returns value + 1.
     * **C pseudocode:**
     * ```c
     * int getbeam(void) {
     * int val = *(int*)(gp + 0x7988);  // GP-relative global, likely beam_count or similar
     * if (val == 0)
     * return 0;
     * return val + 1;
     * }
     * ```
     * The GP offset 0x7988 likely resolves to a global variable tracking beam/spotlight count or index. The +1 suggests it's converting from 0-based internal storage to 1-based external numbering, or advancing to the next available beam slot.
     */
halt_baddata();
}
