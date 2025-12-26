/**
 * FUN_0041dba0
 *
 * Extracted from fsn.c lines 59322-59360
 * Ghidra address: 0x0041dba0
 * Category: Other
 */

void FUN_0041dba0(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  if ((iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */ != 0) && (-1 < *(int *)(iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */ + 0x28) << 5)) {
    (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
    iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  }
  if ((iVar1->flags /* was: *(int *)(iVar1 + 0x44) */ != 0) && (-1 < *(int *)(iVar1->flags /* was: *(int *)(iVar1 + 0x44) */ + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)() /* =FUN_0041d54c */;
    iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  }
  if ((iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ != 0) && (-1 < *(int *)(iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x7ac0) /* -> reset_eye */)() /* =reset_eye */;
  }
  if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
    iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    if ((iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */ != 0) && (-1 < *(int *)(iVar1->bound_min_x /* was: *(int *)(iVar1 + 0x48) */ + 0x28) << 5)) {
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
      iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
    if ((iVar1->flags /* was: *(int *)(iVar1 + 0x44) */ != 0) && (-1 < *(int *)(iVar1->flags /* was: *(int *)(iVar1 + 0x44) */ + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)() /* =FUN_0041d54c */;
      iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
    if ((iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ != 0) && (-1 < *(int *)(iVar1->height /* was: *(int *)(iVar1 + 0x3c) */ + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x7ac0) /* -> reset_eye */)() /* =reset_eye */;
    }
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
  }
  (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x3c1c))();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041dba0):
     * Function: FUN_0041dba0
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Checks bit 4 of t3 (shifted left 3 = bit 7 test on original). If bit clear, calls function at GP-31424. Then unconditionally calls: set_cursor(1), undisplayHourglass(), and a computed function (GP_base - 15388). Finally returns.
     * **2. C pseudocode:**
     * ```c
     * if (!(flags & 0x10)) {  // bit 4 check (sll by 3, then bltz tests sign)
     * (*GP_minus31424_func)();  // conditional call
     * }
     * set_cursor(1);
     * undisplayHourglass();
     * (*some_cleanup_func)();  // computed address: _gp_disp + (-15388)
     * return;
     * ```
     * The GP offsets need resolution against your GP_MAPPING.md:
     * - GP-31424 (0x8540) = likely a selection-related function
     * - GP-30868 (0x876c) = set_cursor
     * - GP-31184 (0x8630) = undisplayHourglass
     * - GP-32740 + (-15388) = computed jump, possibly error handler or state reset
     */
halt_baddata();
}
