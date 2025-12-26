/**
 * FUN_0043ae90
 *
 * Extracted from fsn.c lines 78066-78086
 * Ghidra address: 0x0043ae90
 * Category: Other
 */

void FUN_0043ae90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_10017414;
  if (0 < buffer_size) {
    do {
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x0043ae90):
     * Function: FUN_0043ae90
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches through an array of pointers (likely window/context list) looking for a match with parameter `a0`. Returns the index if found, or the count if not found (loop exhausted).
     * 2. **C pseudocode:**
     * ```c
     * int FUN_0043ae90(void *target) {
     * int count = curcontext[-0x61c0/4];  // or some global array count at offset -25024
     * int i = 0;
     * if (count <= 0) return count;
     * void **array = (void **)*(gp_base + 0x7414);  // pointer array at offset 29716
     * while (i < count) {
     * if (array[i] == target)
     * return i;
     * i++;
     * }
     * return count;  // not found
     * }
     * ```
     * Wait - I only see partial loop. Let me re-read... The snippet is incomplete (ends at 43aedc but references 43aeec). What's shown:
     * - Loads count from global, returns if ≤ 0
     * - Loads array base pointer
     * - Compares `a0` to `array[0]`, returns 0 (v1=0) if match
     * - Otherwise falls through (loop continuation not shown)
     * **Simplified:** `find_index_in_context_array(void *item)` - returns index of `item` in a global pointer array, or -1/count if not found.
     */
halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043ae90):
     * Function: FUN_0043ae90
     *
     * Looking at the assembly:
     * 1. **What it does:** Loads a pointer from GP-relative global (offset -32660 = 0x806c), then loads a pointer at offset 29716 (0x7414) from that, dereferences to get a value, compares with a0. If equal, returns a1 (v0=a1); otherwise continues to 0x43aedc.
     * 2. **C pseudocode:**
     * ```c
     * // GP offset 0x806c -> likely curcontext or similar global
     * void **global_ptr = *(void**)((char*)gp + 0x806c);  // -32660 signed
     * void *ctx = *(void**)((char*)global_ptr + 0x7414); // offset 29716
     * int first_field = *(int*)ctx;
     * if (a0 == first_field) {
     * return a1;  // v0 = a1 (a1 was set earlier, likely the ctx pointer)
     * }
     * // else fall through to 0x43aedc
     * ```
     * **Likely meaning:** This checks if the input (a0) matches the first field of some context structure accessed via `curcontext[0x7414/4]` or similar. Pattern suggests: "if (item == current_selection->first) return current_selection".
     */
halt_baddata();
}
