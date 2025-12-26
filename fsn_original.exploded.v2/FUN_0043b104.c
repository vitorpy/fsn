/**
 * FUN_0043b104
 *
 * Extracted from fsn.c lines 78153-78173
 * Ghidra address: 0x0043b104
 * Category: Other
 */

void FUN_0043b104(int param_1)

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
     * BADDATA ANALYSIS (from binary @ 0x0043b104):
     * Function: FUN_0043b104
     *
     * Looking at this assembly:
     * 1. **What it does**: Searches through an array (accessed via GP offset 0x7414) for an entry matching the parameter in $a0. If found, writes -1 to that array slot to mark it as deleted/invalid. The loop count comes from GP offset -25024 (likely array size).
     * 2. **C pseudocode**:
     * ```c
     * void FUN_0043b104(int target) {
     * int count = *(int*)((char*)gp_base + 0x9e40);  // array count
     * int *array = (int*)((char*)gp_base + 0x7414); // array pointer
     * for (int i = 0; i < count; i++) {
     * if (array[i] == target) {
     * array[i] = -1;  // mark slot as invalid/deleted
     * return;
     * }
     * }
     * }
     * ```
     * **Note**: GP offset 0x806c points to a base pointer. Offset 0x9e40 from that base is the count, offset 0x7414 is the array. The function invalidates a slot by writing -1, suggesting this is a "remove from list" or "free slot" operation. Likely related to widget/resource tracking given the context.
     */
halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b104):
     * Function: FUN_0043b104
     *
     * Looking at this assembly:
     * 1. **What it does:** Iterates through an array at gp[-32660]->offset_29716, comparing each element to a0. When found, stores t7 at that location and returns. Otherwise increments counter v0 and continues while v0 < v1.
     * 2. **C pseudocode:**
     * ```c
     * // gp[-32660] is likely a global pointer (e.g., curcontext or similar)
     * int **arr = (int **)((char *)gp[-32660] + 29716);  // offset 0x7414 = 29716
     * while (v0 < v1) {
     * if (*arr == a0) {
     * *arr = t7;  // replace found entry
     * return;
     * }
     * arr++;  // implied by loop structure, a1 advances
     * v0++;
     * }
     * ```
     * **Context hint:** Offset 29716 (0x7414) into a context structure, iterating and replacing a matching pointer. This looks like a "find and replace entry in list" pattern - possibly updating a widget pointer, file entry, or callback in the context's internal tables.
     */
halt_baddata();
}
