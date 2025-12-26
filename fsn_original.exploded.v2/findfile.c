/**
 * findfile
 *
 * Extracted from fsn.c lines 53224-53237
 * Category: Filesystem
 */

void findfile(int param_1,undefined4 param_2)

{
  undefined4 auStack_34 [11];
  undefined4 *apuStack_8 [2];
  
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ != 0) {
    apuStack_8[0] = auStack_34;
    auStack_34[0] = param_2;
    bsearch(apuStack_8,param_1->file_array /* was: *(void **)(param_1 + 0x10) */,param_1->file_count /* was: *(size_t *)(param_1 + 0xc) */,4,compare_files);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413574):
     * Function: findfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if param1->children (offset 12) is NULL, returns 0 if so. Otherwise calls twalk() to search the tree with a comparison callback, returning the found node's first field or 0.
     * 2. **C pseudocode:**
     * ```c
     * void *findfile(DirNode *dir, char *filename) {
     * if (dir->children == NULL)
     * return NULL;
     * SearchKey key;
     * key.name = filename;
     * // twalk(root, compare_func, context, mode, callback)
     * void *result = twalk(dir->children, dir->num_children, 4, compare_by_name);
     * if (result != NULL)
     * return *(void **)result;  // dereference to get actual node
     * return NULL;
     * }
     * ```
     * The GP-indirect calls at -32520(gp) and -31332(gp) are likely `twalk` (or `tfind`) and a comparison callback. The stack frame at sp+44 holds the search key (filename), and sp+88 points to it. The function searches a binary tree for a file by name.
     */
halt_baddata();
}
