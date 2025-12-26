/**
 * compare_files
 *
 * Extracted from fsn.c lines 53200-53206
 * Category: Filesystem
 */

void compare_files(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004134ec):
     * Function: compare_files
     *
     * ## Analysis
     * **What it does:**
     * Dereferences two pointer-to-pointer arguments to get strings, then calls strcmp via GP-relative lookup. This is a qsort comparison callback for sorting file entries by name.
     * **C equivalent:**
     * ```c
     * int compare_files(void **a, void **b) {
     * char *name_a = *(char **)(*a);  // a[0]->name (first field is name pointer)
     * char *name_b = *(char **)(*b);
     * return strcmp(name_a, name_b);
     * }
     * ```
     * **GP offset 0x80cc** resolves to strcmp (standard library function for qsort callbacks).
     */
halt_baddata();
}
