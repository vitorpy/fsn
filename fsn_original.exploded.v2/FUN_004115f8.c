/**
 * FUN_004115f8
 *
 * Extracted from fsn.c lines 52322-52333
 * Ghidra address: 0x004115f8
 * Category: Other
 */

void FUN_004115f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) == 0) {
    FUN_00411578();
  }
  else {
    FUN_00411230();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004115f8):
     * Function: FUN_004115f8
     *
     * Now I have the full picture:
     * ---
     * **Summary for FUN_004115f8:**
     * 1. **What it does:** Checks if the 3rd parameter's field at offset 8 is non-zero. If non-zero, calls `FUN_00411230` (show alternate context - maps windows, manages widgets). If zero, calls `FUN_00411578` (hide alternate context - unmanages widgets).
     * 2. **C pseudocode:**
     * ```c
     * /* FUN_004115f8 - Toggle alternate context visibility
     * * param a2: pointer to structure, field at offset 8 controls show/hide
     * */
     * void FUN_004115f8(void *a0, void *a1, int *a2) {
     * if (a2[2] != 0) {
     * FUN_00411230();  /* show_alternate_context: map windows, swap buffers */
     * } else {
     * FUN_00411578();  /* hide_alternate_context: unmanage widgets */
     * }
     * }
     * ```
     * **Context:** This appears to be a callback function (receives 3 params typical of Xt callbacks). It toggles visibility of an "alternate context" view based on a widget/callback data field. `FUN_00411230` shows the alt context (involves buffer swaps, XMapWindow, XRaiseWindow), while `FUN_00411578` hides it (XtUnmanageChild calls).
     */
halt_baddata();
}
