/**
 * FUN_004216c0
 *
 * Extracted from fsn.c lines 61233-61248
 * Ghidra address: 0x004216c0
 * Category: Filesystem
 */

void FUN_004216c0(void)

{
  int iVar1;
  
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_0041fd70();
    iVar1 = FUN_004213c8();
    if (iVar1 != 0) {
      save_matrix_state();
      FUN_0041d69c(iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004216c0):
     * Function: FUN_004216c0
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Calls two functions via GP (likely `popmatrix` at -31136 and `gselect` at -31100). If gselect returns non-zero (hit detected), saves result, calls function at -31412 (likely `popviewport`), then calls function at -31172 with the hit result as argument (likely a selection handler like `select_item`).
     * **2. C pseudocode:**
     * ```c
     * popmatrix();
     * hit = gselect(0);  /* end selection, get hits */
     * if (hit != 0) {
     * popviewport();
     * select_item(hit);  /* or process_pick_hit(hit) */
     * }
     * /* function epilogue: restore sp, return */
     * ```
     * This is pick/selection cleanup code - ends the GL selection mode, and if something was picked, processes the hit. The pattern (popmatrix → gselect → conditional handler) is standard SGI GL picking epilogue.
     */
halt_baddata();
}
