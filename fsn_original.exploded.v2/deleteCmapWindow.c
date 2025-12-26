/**
 * deleteCmapWindow
 *
 * Extracted from fsn.c lines 61651-61680
 * Category: Other
 */

void deleteCmapWindow(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < numcmap) {
    piVar1 = &current_colormap;
    do {
      if (param_1 == *piVar1) {
        numcmap = numcmap + -1;
        if (iVar3 < numcmap) {
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < &current_colormap + numcmap);
        }
        FUN_00421c14();
            /*
     * BADDATA ANALYSIS (from binary @ 0x00421e4c):
     * Function: deleteCmapWindow
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of window pointers (at curcontext+0x6c38, indexed by count at GP-30392) for a matching window. When found, shifts all subsequent elements down by one to remove it (array compaction).
     * 2. **C pseudocode:**
     * ```c
     * void deleteCmapWindow(Widget window) {
     * int count = *numCmapWindows;  // GP-30392 -> count variable
     * if (count <= 0) return;
     * Widget *cmapWindows = (Widget *)((char *)curcontext + 0x6c38);
     * for (int i = 0; i < count; i++) {
     * if (cmapWindows[i] == window) {
     * // Shift remaining elements down
     * for (int j = i; j < count - 1; j++) {
     * cmapWindows[j] = cmapWindows[j + 1];
     * }
     * // Note: count decrement happens after 421ec4 (not shown)
     * break;
     * }
     * }
     * }
     * ```
     * The inner loop at 421eb0-421ec0 is the shift: it loads `[v0+4]`, stores to `[v0-4]` (effectively `arr[j] = arr[j+1]`), advances v0, and loops until reaching the end.
     */
halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < numcmap);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421e4c):
     * Function: deleteCmapWindow
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Inner loop (421eb0-421ec0): Copies 4-byte values forward in an array, shifting elements down
     * 2. After copy loop: Calls a function via GP offset -32740 (likely XtDestroyWidget or similar cleanup)
     * 3. Outer loop (421ee4-421ef0): Iterates through multiple windows/entries
     * **C pseudocode:**
     * ```c
     * // Shift array elements down by one position (removing entry at index)
     * for (ptr = &array[index]; ptr < &array[index] + count; ptr++) {
     * ptr[-1] = ptr[0];  // sw t9,-4(v0) stores previous, lw loads current
     * }
     * *output_param = saved_value;  // acc40000: sw a0,0(a2)
     * cleanup_function();           // jalr via gp[-32740] + 7188 = likely XtDestroyWidget
     * // Outer loop continues for remaining windows
     * for (i = start; i < num_windows; i++) {
     * // ... process next window
     * }
     * ```
     * The 27704 offset (0x6c38) likely indexes into a contextwindows or similar widget array. This is classic "remove element from array by shifting" logic - deleting a colormap window and compacting the remaining entries.
     */
halt_baddata();
}
