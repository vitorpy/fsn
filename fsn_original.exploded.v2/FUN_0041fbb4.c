/**
 * FUN_0041fbb4
 *
 * Extracted from fsn.c lines 60138-60153
 * Ghidra address: 0x0041fbb4
 * Category: Other
 */

void FUN_0041fbb4(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  if (iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ == 0) {
    (**(code **)(unaff_gp + -0x78fc) /* -> FUN_00427870 */)(iVar1->flags /* was: *(undefined4 *)(iVar1 + 0x44) */,iVar1->bound_min_x /* was: *(undefined4 *)(iVar1 + 0x48) */) /* =FUN_00427870 */;
  }
  else {
    (**(code **)(unaff_gp + -0x79e4) /* -> FUN_0041aeec */)(iVar1->flags /* was: *(undefined4 *)(iVar1 + 0x44) */,iVar1->bound_min_x /* was: *(undefined4 *)(iVar1 + 0x48) */) /* =FUN_0041aeec */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fbb4):
     * Function: FUN_0041fbb4
     *
     * **Refined analysis:**
     * The function `zoomToSelection` at 0x41fba8 (starts at 0x41fbb4 after prologue):
     * - GP offset -31204 likely resolves to `findzoom` (0x426d10)
     * - GP offset -30972 likely resolves to `findzoom_landscape` (0x4268d4)
     * **Final pseudocode:**
     * ```c
     * void zoomToSelection(void) {
     * context_t *ctx = curcontext;
     * // offset 0x3c = is_directory flag or similar
     * // offsets 0x44, 0x48 = x,y or target coordinates
     * if (ctx->is_directory) {  // offset 60
     * findzoom(ctx->target_x, ctx->target_y);  // directory zoom
     * } else {
     * findzoom_landscape(ctx->target_x, ctx->target_y);  // file zoom
     * }
     * }
     * ```
     * Field 0x3c (60) is likely a flag indicating directory vs file selection, and fields 0x44/0x48 (68/72) are the target coordinates for the zoom animation.
     */
halt_baddata();
}
