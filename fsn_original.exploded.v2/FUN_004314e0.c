/**
 * FUN_004314e0
 *
 * Extracted from fsn.c lines 70654-70673
 * Ghidra address: 0x004314e0
 * Category: Other
 */

void FUN_004314e0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  if (((param_1 != 0) &&
      (((iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x25fc))(), param_3 != (int *)0x0 &&
        (iVar2 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */, *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */, param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    (**(code **)(unaff_gp + -0x7800) /* -> FUN_00431a18 */)() /* =FUN_00431a18 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004314e0):
     * Function: FUN_004314e0
     *
     * Looking at this assembly:
     * **What it does:**
     * Checks if a2[0] matches t1, then based on a3 (mode) and v1 (index), checks if v0[v1*4 + 60] also matches t1. Returns 8 if all conditions pass, otherwise calls a function via GP-30720.
     * **C pseudocode:**
     * ```c
     * if (*a2 == t1) {
     * if (a3 == 0 && v1 == 2) {
     * goto check_array;
     * }
     * if (a3 == 2) {
     * check_array:
     * if (v0[v1].field_0x3c == t1 && v1 == 2) {
     * return 8;
     * }
     * }
     * }
     * // Fall through: call function at GP[-30720]
     * return some_fallback_func();
     * ```
     * The GP-30720 offset likely resolves to a default depth lookup or error handler. The magic offset 60 (0x3c) suggests accessing a field in an array of structs where each element is 4*index bytes apart, with field at +0x3c.
     */
halt_baddata();
}
