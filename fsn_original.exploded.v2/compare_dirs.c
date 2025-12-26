/**
 * compare_dirs
 *
 * Extracted from fsn.c lines 53212-53218
 * Category: Filesystem
 */

void compare_dirs(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413530):
     * Function: compare_dirs
     *
     * ## Analysis
     * **What it does:**
     * Comparison function for qsort. Takes two pointers-to-pointers (directory entries), dereferences each twice to get the name strings, then calls strcmp via GP-relative indirect call (offset -32564 = 0x80cc → strcmp).
     * **C equivalent:**
     * ```c
     * int compare_dirs(void **a, void **b) {
     * // a and b are pointers to directory entry pointers
     * // entry[0] contains the name string pointer
     * char *name_a = *(char **)(*a);
     * char *name_b = *(char **)(*b);
     * return strcmp(name_a, name_b);
     * }
     * ```
     * Or more idiomatically for qsort with directory nodes where first field is name:
     * ```c
     * int compare_dirs(const void *a, const void *b) {
     * DirNode *dir_a = *(DirNode **)a;
     * DirNode *dir_b = *(DirNode **)b;
     * return strcmp(dir_a->name, dir_b->name);
     * }
     * ```
     */
halt_baddata();
}
