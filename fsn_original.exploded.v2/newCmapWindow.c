/**
 * newCmapWindow
 *
 * Extracted from fsn.c lines 61594-61613
 * Category: Other
 */

void newCmapWindow(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (0 < numcmap) {
    puVar1 = &current_colormap + numcmap;
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)((int)&current_colormap + 3) < puVar2);
  }
  numcmap = numcmap + 1;
  current_colormap = param_1;
  FUN_00421c14();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421dc4):
     * Function: newCmapWindow
     *
     * Looking at this assembly:
     * 1. **What it does:** Inserts a new widget (a0) at the front of a global array (at gp-offset 0x806c + 27704), shifting existing elements up by one. Increments the count stored at a2, then calls a function at gp-offset 0x801c + 7188.
     * 2. **C pseudocode:**
     * ```c
     * void newCmapWindow(Widget widget, void *unused, int *count_ptr) {
     * int count = *count_ptr;
     * if (count > 0) {
     * // Shift array elements up: cmapWindows[1..count] = cmapWindows[0..count-1]
     * for (int i = count; i > 0; i--) {
     * cmapWindows[i] = cmapWindows[i-1];
     * }
     * }
     * cmapWindows[0] = widget;  // Insert new widget at front
     * *count_ptr = count + 1;
     * some_callback_function();  // Function at GP offset 0x801c + 7188
     * }
     * ```
     * The array `cmapWindows` is at GP-relative offset (0x806c base + 27704 = 0x6c38 offset into data segment). The loop copies backwards to avoid overwriting - classic array insertion pattern.
     */
halt_baddata();
}
