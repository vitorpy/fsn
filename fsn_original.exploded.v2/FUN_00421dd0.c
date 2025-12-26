/**
 * FUN_00421dd0
 *
 * Extracted from fsn.c lines 61619-61645
 * Ghidra address: 0x00421dd0
 * Category: Other
 */

void FUN_00421dd0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = numcmap /* was: *(int **)(unaff_gp + -0x76b8) */ /* -> numcmap */;
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar3 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
    puVar1 = (undefined4 *)(iVar4 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c38);
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)(iVar3 + 0x6c3cU) <= puVar2);
  }
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6c38) = param_1;
  *piVar5 = iVar4 + 1;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0x1c14))();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421dd0):
     * Function: FUN_00421dd0
     *
     * Looking at this assembly:
     * 1. **What it does:** Shifts an array right by one position (elements [0..count-1] → [1..count]), inserts `a0` at position [0], increments the count at `*a2`, then calls a function at GP offset -32740 (likely a redraw/update callback).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00421dd0(void *item, void *unused, int *count_ptr) {
     * int count = *count_ptr;
     * if (count > 0) {
     * // Shift array right: move elements [0..count-1] to [1..count]
     * for (int i = count; i > 0; i--) {
     * array_at_gp_6c38[i] = array_at_gp_6c38[i-1];
     * }
     * }
     * array_at_gp_6c38[0] = item;  // Insert at front
     * *count_ptr = count + 1;
     * some_callback();  // GP[-32740] + 7188
     * }
     * ```
     * The GP offset -32660 (0x806c) + 27704 (0x6c38) points to an array base. This is a "prepend to array" operation - likely adding a window/widget to a list and triggering a UI update.
     */
halt_baddata();
}
