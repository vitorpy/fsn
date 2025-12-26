/**
 * FUN_0040f150
 *
 * Extracted from fsn.c lines 51213-51225
 * Ghidra address: 0x0040f150
 * Category: Other
 */

void FUN_0040f150(int param_1,undefined4 param_2)

{
  if (DAT_10000154 != 0) {
    XtRemoveWorkProc(DAT_10000154);
    DAT_10000154 = 0;
  }
  if (param_1 != 0) {
    DAT_10000154 = XtAppAddWorkProc(app_context,param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f150):
     * Function: FUN_0040f150
     *
     * Looking at the GP offsets and call patterns:
     * **GP Offset Resolution:**
     * - gp-31624 (0x8478): XtFree
     * - gp-32664 (0x8068): DAT_10016afc (global pointer, offset 340 = 0x154)
     * - gp-30208 (0x8a00): DAT_10009524 (curcontext)
     * - gp-32020 (0x82ec): XtMalloc
     * **What it does:**
     * 1. If param3 (a2) is non-NULL, calls XtFree(param3) and clears a global field
     * 2. If param1 (a0) is non-NULL, calls XtMalloc(curcontext[0], param1, param2) and stores result in same global field
     * 3. Returns the allocated pointer (or leaves it cleared)
     * **C pseudocode:**
     * ```c
     * void *FUN_0040f150(int size, void *dest, void *old_ptr) {
     * if (old_ptr != NULL) {
     * XtFree(old_ptr);
     * DAT_10016afc[0x154/4] = NULL;  // offset 340 = field at +0x154
     * }
     * if (size != 0) {
     * DAT_10016afc[0x154/4] = XtMalloc(*curcontext, size, dest);
     * }
     * return DAT_10016afc[0x154/4];
     * }
     * ```
     * This is a **realloc-like helper** that frees old memory and allocates new, storing the result in a global structure field (likely a widget or context structure at offset 340).
     */
halt_baddata();
}
