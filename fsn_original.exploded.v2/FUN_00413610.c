/**
 * FUN_00413610
 *
 * Extracted from fsn.c lines 53284-53300
 * Ghidra address: 0x00413610
 * Category: Other
 */

void FUN_00413610(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_80 [30];
  undefined4 *local_8 [2];
  
  if (param_1->child_count /* was: *(int *)(param_1 + 0x14) */ != 0) {
    local_8[0] = local_80;
    local_80[0] = param_2;
    /* TODO: GP:-0x7f08 */ (**(code **)(unaff_gp + -0x7f08) /* -> EXTERNAL_0x0fb1751c */)
              (local_8,param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */,param_1->child_count /* was: *(undefined4 *)(param_1 + 0x14) */,4,
               *(undefined4 *)(unaff_gp + -0x7a60) /* -> compare_dirs */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413610):
     * Function: FUN_00413610
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if param1->field_0x14 is NULL (returns 0 if so). Otherwise calls tfind() to search a tree using param1's children pointer and comparison function, returning the found node's first field or 0.
     * 2. **C pseudocode:**
     * ```c
     * void *finddir(DirNode *dir, void *key) {
     * if (dir->children == NULL)  // offset 0x14
     * return NULL;
     * void **result = tfind(&key, &dir->children, compare_func);  // tfind at gp-32520
     * if (result == NULL)
     * return NULL;
     * return *result;  // return first field of found entry
     * }
     * ```
     * The GP offsets resolve to: gp-32520 = tfind (POSIX tree search), gp-31328 = comparison function pointer passed as 5th arg via stack.
     */
halt_baddata();
}
