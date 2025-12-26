/**
 * cFindIconByType
 *
 * Extracted from fsn.c lines 71935-71941
 * Category: Other
 */

void cFindIconByType(undefined4 param_1)

{
  FUN_004349f8(&DAT_10016f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b84):
     * Function: cFindIconByType
     *
     * ## Analysis of cFindIconByType (0x00433b84)
     * **What it does:**
     * Looks up an icon by type string. Loads a base pointer from GP-relative address, adds offset 0x6f50 (28496) to get an icon table/hash, then calls a lookup function with that table and the type parameter.
     * **C pseudocode:**
     * ```c
     * void* cFindIconByType(char *type) {
     * // GP[-32660] = base data pointer (likely _gp_disp or data section base)
     * // GP[-30640] = lookup function (likely hash_lookup or list_find)
     * char *icon_table = *(char**)GP_OFFSET(-32660) + 28496;  // 0x6f50
     * return lookup_function(icon_table, type);
     * }
     * ```
     * **GP offsets to resolve:**
     * - GP[-32660] (0x806c): Base pointer to data section
     * - GP[-30640] (0x8850): Function pointer - likely `sgiFindType` or similar SGI icon lookup
     * The unconditional branch at 0x433bb8 jumping over a NOP is just Ghidra artifact from delay slot handling - no actual logic there.
     */
halt_baddata();
}
