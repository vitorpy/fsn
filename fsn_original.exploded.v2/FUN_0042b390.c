/**
 * FUN_0042b390
 *
 * Extracted from fsn.c lines 67317-67326
 * Ghidra address: 0x0042b390
 * Category: UI
 */

void FUN_0042b390(int param_1)

{
  XtDestroyWidget();
  if (param_1 == DAT_100079c0) {
    DAT_100079c0 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b390):
     * Function: FUN_0042b390
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP offset -32456 (likely `free()`), then checks if argument `a0` equals a global variable at GP[-32664]+31168. If equal, sets that global to NULL (clearing a "last freed" pointer to prevent double-free or stale reference).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042b390(void *ptr, void *arg1, void *arg2) {
     * free(ptr);  // GP[-32456] = free
     * void **last_ptr = (void **)((char *)DAT_xxxxx + 31168);  // GP[-32664]+0x79c0
     * if (ptr == *last_ptr) {
     * *last_ptr = NULL;
     * }
     * }
     * ```
     * This is a "safe free" wrapper - frees memory and clears a cached/tracked pointer if it matches what was just freed. The extra args (a1, a2) are saved to stack but unused, suggesting this may be a generic callback signature or the function was simplified.
     */
halt_baddata();
}
