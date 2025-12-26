/**
 * FUN_00421e58
 *
 * Extracted from fsn.c lines 61686-61723
 * Ghidra address: 0x00421e58
 * Category: Other
 */

void FUN_00421e58(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = numcmap /* was: *(int **)(unaff_gp + -0x76b8) */ /* -> numcmap */;
  iVar4 = *piVar5;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c38);
    do {
      if (param_1 == *piVar1) {
        iVar4 = iVar4 + -1;
        if (iVar3 < iVar4) {
          iVar3 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < (int *)(iVar4 * 4 + iVar3 + 0x6c38));
        }
        iVar3 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
        *piVar5 = iVar4;
        (*(code *)(iVar3 + 0x1c14))();
            /*
     * BADDATA ANALYSIS (from binary @ 0x00421e58):
     * Function: FUN_00421e58
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of window pointers (at gp-32660+27704, i.e., contextwindows+0x6c38) for a matching window. When found, shifts all subsequent elements down by one position (removes from array) and decrements the count stored at gp-30392.
     * 2. **C pseudocode:**
     * ```c
     * void deleteCmapWindow(Widget window) {
     * int count = *numCmapWindows;  // gp-30392
     * Widget *cmapWindows = &contextwindows[0x6c38/4];  // array at offset 27704
     * if (count <= 0) return;
     * for (int i = 0; i < count; i++) {
     * if (cmapWindows[i] == window) {
     * // Shift remaining elements down
     * for (int j = i; j < count - 1; j++) {
     * cmapWindows[j] = cmapWindows[j + 1];
     * }
     * *numCmapWindows = count - 1;
     * // Then calls function at gp-32740+7188 (likely XtDestroyWidget or similar)
     * break;
     * }
     * }
     * }
     * ```
     * The function removes a colormap window from a global tracking array by finding its index and compacting the array. The trailing code (0x421ec4+) calls a cleanup function after removal.
     */
halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421e58):
     * Function: FUN_00421e58
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Inner loop copies 32-bit words forward in memory (memcpy-like). After the copy loop completes, it stores a0 at [a2], then calls a function at gp-32740+7188 (likely a cleanup/free function). The outer loop at 421ee4 iterates v1 from some start to a1.
     * **C pseudocode:**
     * ```c
     * // Inner copy loop (421eb0-421ec0): copies words from src to dst
     * while (src < end) {
     * *dst++ = *src++;  // word copy, 4 bytes at a time
     * }
     * *dest_ptr = param;           // acc40000: sw a0,0(a2)
     * some_cleanup_func();         // jalr to gp[-32740]+7188
     * // Outer loop increment (421ee4-421ef0)
     * for (i = start; i < count; i++) {
     * ptr += 4;
     * // ... inner loop body above
     * }
     * ```
     * This appears to be array compaction code - likely removing an element from an array by shifting subsequent elements down, then calling a destructor/free. The function name `deleteCmapWindow` confirms this: it's removing a colormap window entry from an array and cleaning up.
     */
halt_baddata();
}
