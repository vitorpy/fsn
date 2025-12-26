/**
 * bsearch2
 *
 * Extracted from fsn.c lines 66732-66754
 * Category: Other
 */

void bsearch2(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = param_2 + param_4 * (param_3 + -1);
  if (param_2 <= uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042a9a8):
     * Function: bsearch2
     *
     * Looking at this assembly:
     * **What it does:**
     * Binary search setup. Calculates `end = base + (n-1) * size`, checks for overflow, then computes `mid_index = (end - base) / (size * 2)` for the search loop. Saves registers for recursive/iterative search.
     * **C pseudocode:**
     * ```c
     * void* bsearch2(void* key, void* base, int n, int size, int (*cmp)(), void* param7) {
     * void* end = base + (n - 1) * size;
     * if (end < base) return NULL;  // overflow check
     * int step = size * 2;
     * int mid_offset = (end - base) / step;
     * // ... binary search loop follows
     * }
     * ```
     * The `size*2` divisor suggests this searches a paired/interleaved structure (e.g., key-value pairs where each element is `2*size` apart), or it's finding the midpoint by dividing range by 2 implicitly. The `param7` (from stack at sp+104) is likely a user callback parameter passed to the comparison function.
     */
halt_baddata();
  }
  if (0 < uStack_14) {
    uStack_10 = uStack_10 + param_4;
  }
  if (uVar1 < uStack_10) {
    uStack_10 = 0;
  }
  *param_6 = uStack_10;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a9a8):
     * Function: bsearch2
     *
     * Looking at this assembly snippet from bsearch2:
     * **What it does:**
     * Binary search comparison result handling. After calling the comparator (jalr s7), if result is 0, store found element and return 1. If result < 0, narrow search to lower half (s4-s3). If result > 0, narrow to upper half (s4+s3). Loop continues while s2 < s1, with bounds checking against array end (t2).
     * **C pseudocode:**
     * ```c
     * s4 = s0;                          // current = mid_element
     * cmp_result = comparator(key, s0); // jalr s7
     * if (cmp_result == 0) {
     * *result_out = s0;             // found it
     * return 1;
     * }
     * if (cmp_result < 0) {
     * s2 = s4 - s3;                 // search lower: high = mid - stride
     * } else {
     * s1 = s4 + s3;                 // search upper: low = mid + stride
     * }
     * if (s2 < s1) {                    // while (low < high)
     * goto loop_top;                // continue binary search
     * }
     * // post-loop: clamp s4 to array bounds
     * if (cmp_result > 0 && s4 < array_end) {
     * s4 += s3;                     // advance past last compared
     * }
     * if (s4 > array_end) {
     * s4 = 0;                       // out of bounds -> NULL
     * }
     * *result_out = s4;
     * ```
     * This is the core binary search loop with insertion-point semantics - when not found, it returns where the element *would* be inserted (or NULL if past end).
     */
halt_baddata();
}
