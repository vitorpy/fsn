/**
 * SG_getDefaultDepth
 *
 * Extracted from fsn.c lines 70630-70648
 * Category: Other
 */

void SG_getDefaultDepth(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) &&
      (((iVar1 = FUN_004325fc(), param_3 != (int *)0x0 &&
        (iVar2 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */, *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */, param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    FUN_00431a18();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004314d4):
     * Function: SG_getDefaultDepth
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares values to find a matching visual format. If `*a2 == t1` and either `a3 == 0` with `v1 == 2`, or `a3 == 2` with matching array lookup, returns 8. Otherwise calls a function via GP indirect (likely error/fallback).
     * 2. **C pseudocode:**
     * ```c
     * if (*a2 == t1) {
     * if (a3 == 0 && v1 == 2) {
     * goto check_array;
     * }
     * if (a3 == 2) {
     * check_array:
     * if (base[v1].field_0x3c == t1 && v1 == 2) {
     * return 8;
     * }
     * }
     * }
     * // fall through to GP indirect call (error handler or next check)
     * t9 = *(gp - 30720);  // likely XtAppError or similar
     * t9();
     * ```
     * The pattern suggests this is part of X11 visual/depth matching - checking if a visual class matches expected criteria, returning depth 8 (8-bit) on match, or calling an error/fallback function.
     */
halt_baddata();
}
