/**
 * FUN_0043ae14
 *
 * Extracted from fsn.c lines 78040-78060
 * Ghidra address: 0x0043ae14
 * Category: Other
 */

void FUN_0043ae14(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_10017414;
  if (0 < buffer_size) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x0043ae14):
     * Function: FUN_0043ae14
     *
     * Looking at this assembly:
     * 1. **What it does**: Searches an array for a matching pointer/value. Returns the corresponding value from a parallel array if found, or the loop index if not found.
     * 2. **C pseudocode**:
     * ```c
     * int FUN_0043ae14(int key) {
     * int i = 0;
     * int count = DAT_10009e40;  // gp[-32660] -> offset -25024
     * if (count <= 0)
     * return 0;
     * int *search_array = DAT_10007414;  // array of keys to search
     * int *result_array = DAT_10007410;  // parallel array of results
     * while (i < count) {
     * if (search_array[i] == key) {
     * return result_array[i];
     * }
     * i++;
     * }
     * return i;  // not found: returns count
     * }
     * ```
     * **GP offsets resolved**:
     * - gp[-32660] (0x806c) → base pointer to globals
     * - offset -25024 (0x9e40) → count/limit value
     * - offset 29716 (0x7414) → search key array
     * - offset 29712 (0x7410) → result value array
     * This is a classic lookup function - finds `key` in one array, returns corresponding element from parallel array.
     */
halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043ae14):
     * Function: FUN_0043ae14
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Loop comparing a0 against array elements at a2. When match found (a0 == *a2), load a global pointer table via GP, add offset a1 to get final address, return value at that address. Otherwise increment counter v0 and advance a2 by 4 bytes.
     * **C pseudocode:**
     * ```c
     * // a0 = search value, a1 = offset, a2 = array pointer, v0 = counter
     * while (*a2 != a0) {
     * v0++;
     * a2++;  // next int
     * }
     * // Match found - GP[-32660] is likely a global table base
     * void **table = *(void**)(gp[-32660] + 29712);  // gp_table->offset_7410
     * return *(int*)((char*)table + a1);
     * ```
     * This appears to be a lookup function: find index where array matches search value, then use an offset to retrieve associated data from a secondary table accessed via GP indirection. The GP offset -32660 (0xFFFF806C) resolves to a global structure, field at +29712 (0x7410) contains the lookup table base.
     */
halt_baddata();
}
