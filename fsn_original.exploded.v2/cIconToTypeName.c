/**
 * cIconToTypeName
 *
 * Extracted from fsn.c lines 71961-71966
 * Category: Other
 */

void cIconToTypeName(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433bd0):
     * Function: cIconToTypeName
     *
     * ## Analysis
     * **What it does:**
     * Loads a pointer from offset 20 of the input struct (a0+20), then dereferences that pointer to get offset 0, returning it. The unconditional branch is a no-op (compiler artifact or obfuscation).
     * **C equivalent:**
     * ```c
     * char *cIconToTypeName(void *node) {
     * void *field_20 = *(void **)((char *)node + 20);  // node->type_info or similar
     * return *(char **)field_20;                        // type_info->name
     * }
     * ```
     * Or with proper struct types:
     * ```c
     * char *cIconToTypeName(DirNode *node) {
     * return node->type_info->type_name;  // offset 20 -> offset 0
     * }
     * ```
     * The function simply returns `node[5]->field0` (treating offsets as word indices: 20/4=5).
     */
halt_baddata();
}
