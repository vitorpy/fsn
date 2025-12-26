/**
 * finddir
 *
 * Extracted from fsn.c lines 53265-53278
 * Category: Filesystem
 */

void finddir(int param_1,undefined4 param_2)

{
  undefined4 auStack_80 [30];
  undefined4 *apuStack_8 [2];
  
  if (param_1->child_count /* was: *(int *)(param_1 + 0x14) */ != 0) {
    apuStack_8[0] = auStack_80;
    auStack_80[0] = param_2;
    bsearch(apuStack_8,param_1->child_array /* was: *(void **)(param_1 + 0x18) */,param_1->child_count /* was: *(size_t *)(param_1 + 0x14) */,4,compare_dirs);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413604):
     * Function: finddir
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if param1->children (offset 0x14) is NULL - if so returns 0. Otherwise calls twalk() to search the tree at param1->children with param1->name as search key, using a comparison function, returning the found node's first field or 0.
     * 2. **C pseudocode:**
     * ```c
     * DirNode *finddir(DirNode *parent, char *search_name) {
     * if (parent->children == NULL) {
     * return NULL;
     * }
     * // Stack frame setup for twalk callback
     * SearchContext ctx;
     * ctx.search_name = search_name;
     * void **result = twalk(&ctx, parent->children, parent->name, compare_func, 4);
     * if (result != NULL) {
     * return (DirNode *)*result;
     * }
     * return NULL;
     * }
     * ```
     * **GP offsets:**
     * - gp-32520 (0x80f8): twalk or tfind (tree search function)
     * - gp-31328 (0x85a0): comparison callback function pointer
     * The function searches a binary tree (tsearch/tfind style) for a directory node, with the search context passed via stack frame at sp+48/sp+168.
     */
halt_baddata();
}
