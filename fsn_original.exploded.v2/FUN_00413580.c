/**
 * FUN_00413580
 *
 * Extracted from fsn.c lines 53243-53259
 * Ghidra address: 0x00413580
 * Category: Other
 */

void FUN_00413580(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_34 [11];
  undefined4 *local_8 [2];
  
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ != 0) {
    local_8[0] = local_34;
    local_34[0] = param_2;
    /* TODO: GP:-0x7f08 */ (**(code **)(unaff_gp + -0x7f08) /* -> EXTERNAL_0x0fb1751c */)
              (local_8,param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */,param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */,4,
               *(undefined4 *)(unaff_gp + -0x7a64) /* -> compare_files */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413580):
     * Function: FUN_00413580
     *
     * Looking at this assembly:
     * **What it does:**
     * Searches for a file by name in a directory. Takes a directory node (a0) and filename (a1). If directory has no children (offset 12 == 0), returns NULL. Otherwise calls twalk() to traverse the tree, matching against the filename, and returns the found node or NULL.
     * **C pseudocode:**
     * ```c
     * // FUN_00413580 - findfile
     * // a0 = directory node, a1 = filename to find
     * void *findfile(void *dir_node, char *filename) {
     * if (dir_node->children == NULL) {  // offset 12
     * return NULL;
     * }
     * // Setup search context on stack
     * search_context ctx;
     * ctx.filename = filename;
     * // twalk(root, compare_func, context, mode, action)
     * // gp[-32520] = twalk, gp[-31332] = compare_by_name callback
     * void *result = twalk(dir_node->children,    // offset 12 - tree root
     * dir_node->something,    // offset 16
     * 4,                      // traversal mode
     * compare_by_name);       // comparison function
     * if (result != NULL) {
     * return *result;  // dereference to get actual node
     * }
     * return NULL;
     * }
     * ```
     * The key insight: this uses the standard tree walk pattern (twalk from IRIX libc) with a comparison callback loaded from GP-relative addressing. The double-dereference at the end (`lw v1,0(v0)` then `move v0,v1`) is typical for twalk which returns pointer-to-pointer.
     */
halt_baddata();
}
