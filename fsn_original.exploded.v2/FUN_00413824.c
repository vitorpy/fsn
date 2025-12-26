/**
 * FUN_00413824
 *
 * Extracted from fsn.c lines 53404-53437
 * Ghidra address: 0x00413824
 * Category: Other
 */

void FUN_00413824(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1->file_count /* was: *(int *)(param_1 + 0xc) */ == 0) && (param_1->child_count /* was: *(int *)(param_1 + 0x14) */ == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x00413824):
     * Function: FUN_00413824
     *
     * ## Assembly Analysis
     * **What it does:**
     * Checks if a directory node has children (offset 12) or subdirectories (offset 20). Returns 0 (NULL) early if both are empty/NULL, otherwise continues to the branch target.
     * **C pseudocode:**
     * ```c
     * // At offset 0x413824 within findDirByFullName:
     * if (node->children == NULL && node->subdirs == NULL) {
     * return NULL;
     * }
     * // else continue searching at 0x41384c
     * ```
     * This is an early-exit optimization - if a directory has no children and no subdirectories, there's nothing to search so return NULL immediately.
     */
halt_baddata();
  }
  iVar2 = 0;
  if (0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = *(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar1);
      iVar1 = iVar1 + 4;
      iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ = iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ | 1;
    } while (iVar2 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    do {
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2);
      iVar2 = iVar2 + 4;
      iVar3->render_flags /* was: *(byte *)(iVar3 + 0x74) */ = iVar3->render_flags /* was: *(byte *)(iVar3 + 0x74) */ | 4;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413824):
     * Function: FUN_00413824
     *
     * ## Analysis of FUN_00413824 @ 0x413838-0x413848
     * **What the assembly does:**
     * 1. Tests register t6 (result from previous operation)
     * 2. If t6 != 0, branches to 0x41384c (continues search)
     * 3. If t6 == 0, returns NULL (v0 = 0)
     * **C pseudocode:**
     * ```c
     * if (t6 == NULL) {
     * return NULL;  // Not found
     * }
     * // else continue at 0x41384c...
     * ```
     * This is a standard null-check bailout in `findDirByFullName` - if a directory lookup returned NULL, the function returns NULL immediately rather than continuing the search.
     */
halt_baddata();
}
