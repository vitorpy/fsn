/**
 * deleteTopWindow
 *
 * Extracted from fsn.c lines 61520-61550
 * Category: Other
 */

void deleteTopWindow(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = 0;
  if (0 < numtop) {
    piVar3 = &DAT_10016c10;
    do {
      if (param_1 == *piVar3) {
        iVar2 = numtop + -1;
        if (iVar1 < iVar2) {
          do {
            piVar4 = piVar3 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar4;
          } while (piVar4 < &DAT_10016c10 + iVar2);
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00421d30):
     * Function: deleteTopWindow
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of window pointers (at gp-32660 + 27664) for the target widget. When found, shifts all subsequent elements down by one to remove it from the array, then decrements the count (at gp-30396).
     * 2. **C pseudocode:**
     * ```c
     * void deleteTopWindow(Widget target) {
     * int count = numTopWindows;  // gp-30396
     * Widget *windows = topWindowList;  // gp-32660 + 27664 (0x6c10)
     * for (int i = 0; i < count; i++) {
     * if (windows[i] == target) {
     * // Shift remaining elements down
     * for (int j = i; j < count - 1; j++) {
     * windows[j] = windows[j + 1];
     * }
     * numTopWindows--;
     * return;
     * }
     * }
     * }
     * ```
     * The loop at 421d90-421da0 is the memmove-style shift: it reads windows[j+1] and writes to windows[j], iterating until reaching the end of the valid array.
     */
halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421d30):
     * Function: deleteTopWindow
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * This is an array shift-down loop. It decrements the count (a0 = v1-1), then if the current index (v0) is less than the new count, it shifts all elements from index v0+1 down by one position in the contextwindows array (base at gp-32660 + 0x6c10), removing the element at index v0. Finally stores the new count.
     * 2. **C pseudocode:**
     * ```c
     * int new_count = numTopWindows - 1;
     * if (current_index < new_count) {
     * // Shift elements down to fill the gap
     * Widget *base = &contextwindows[current_index];
     * Widget *end = &contextwindows[new_count];
     * while (base < end) {
     * base[0] = base[1];  // shift down
     * base++;
     * }
     * }
     * numTopWindows = new_count;
     * ```
     * This is classic array element removal: decrement count, shift elements left to fill gap at deleted index.
     */
halt_baddata();
}
