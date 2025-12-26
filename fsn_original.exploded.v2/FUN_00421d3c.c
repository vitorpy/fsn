/**
 * FUN_00421d3c
 *
 * Extracted from fsn.c lines 61556-61588
 * Ghidra address: 0x00421d3c
 * Category: Other
 */

void FUN_00421d3c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_gp;
  
  iVar1 = 0;
  iVar2 = *numtop /* was: *(int **)(unaff_gp + -0x76bc) */ /* -> numtop */;
  if (0 < iVar2) {
    piVar3 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c10);
    do {
      if (param_1 == *piVar3) {
        if (iVar1 < iVar2 + -1) {
          iVar1 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
          do {
            piVar4 = piVar3 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar4;
          } while (piVar4 < (int *)((iVar2 + -1) * 4 + iVar1 + 0x6c10));
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00421d3c):
     * Function: FUN_00421d3c
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of window pointers (at GP-relative offset, likely `topwindows[]`) for a matching widget pointer. When found, shifts all elements after it down by one and decrements the count. Classic "remove from array by shifting" pattern.
     * 2. **C pseudocode:**
     * ```c
     * // Remove widget from topwindows array
     * int count = num_topwindows;  // gp[-30396]
     * if (count <= 0) return 0;
     * Widget *windows = topwindows;  // gp[-32660] + 27664 = 0x6c10
     * for (int i = 0; i < count; i++) {
     * if (windows[i] == widget) {
     * // Shift remaining elements down
     * for (int j = i; j < count - 1; j++) {
     * windows[j] = windows[j + 1];
     * }
     * num_topwindows = count - 1;
     * return;
     * }
     * }
     * return 0;
     * ```
     * Key details:
     * - `gp[-30396]` (0x8944) = pointer to window count
     * - `gp[-32660] + 0x6c10` = base of topwindows array
     * - Returns 0 if not found, otherwise removes and returns
     */
halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421d3c):
     * Function: FUN_00421d3c
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Copies array elements down by one slot (shifting left) from position `a0` to `numcontextwindows`, then stores `a0` into the count variable. This is array compaction after deleting element at index `a0`.
     * 2. **C pseudocode:**
     * ```c
     * // a0 = index of deleted window, v0 = numcontextwindows, a1 = &contextwindows[index]
     * // gp-32660 offset 27664 = contextwindows array base
     * if (index < numcontextwindows) {
     * int *dst = &contextwindows[index];
     * int *end = &contextwindows[numcontextwindows];
     * while (dst < end) {
     * dst[0] = dst[1];  // shift elements left
     * dst++;
     * }
     * }
     * numcontextwindows = index;  // BUG? Should be numcontextwindows-- instead
     * ```
     * **Note:** The final `sw a0,0(a2)` stores the index into numcontextwindows, which appears buggy - it should decrement the count, not set it to the deleted index. This may be a decompilation artifact or original bug.
     */
halt_baddata();
}
