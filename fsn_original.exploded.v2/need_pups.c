/**
 * need_pups
 *
 * Extracted from fsn.c lines 61729-61743
 * Category: Other
 */

void need_pups(void)

{
  int iVar1;
  
  if (DAT_10006f04 == '\0') {
    iVar1 = getgdesc(0x11);
    if (iVar1 < 2) {
      DAT_10006f00 = 1;
    }
    DAT_10006f04 = '\x01';
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421f04):
     * Function: need_pups
     *
     * ## Analysis of `need_pups` (0x00421f10 - 0x00421f84)
     * **What it does:**
     * Checks if popup menus need initialization. If already initialized (flag at offset 0x6f04), returns cached result. Otherwise calls a function (likely `nbuttons(17)` to count mouse buttons), sets "needs popups" flag if result < 2, marks as initialized, and returns the flag.
     * **C pseudocode:**
     * ```c
     * // GP offset -32664 (0x8068) = curcontext or similar global struct pointer
     * // Offset 0x6f04 = initialized flag
     * // Offset 0x6f00 = need_pups result cache
     * int need_pups(void)
     * {
     * char *ctx = *(char **)GP_OFFSET_8068;  // global context pointer
     * if (ctx[0x6f04]) {                      // already initialized?
     * return ctx[0x6f00];                 // return cached result
     * }
     * int buttons = nbuttons(17);             // jalr via GP-31932, arg=17
     * if (buttons < 2) {
     * ctx[0x6f00] = 1;                    // need popups = true
     * }
     * ctx[0x6f04] = 1;                        // mark initialized
     * return ctx[0x6f00];
     * }
     * ```
     * **Notes:**
     * - GP offset 0x8068 (-32664) likely points to `curcontext` or a UI state struct
     * - GP offset 0x8344 (-31932) is the function pointer for what appears to be `nbuttons()` or `getvaluator()`
     * - The function caches its result to avoid repeated device queries
     * - Arg 17 to the called function likely corresponds to MOUSEX/MOUSEY device query or button count
     */
halt_baddata();
}
