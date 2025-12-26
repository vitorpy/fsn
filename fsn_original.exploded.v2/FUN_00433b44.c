/**
 * FUN_00433b44
 *
 * Extracted from fsn.c lines 71921-71929
 * Ghidra address: 0x00433b44
 * Category: Other
 */

void FUN_00433b44(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77ac) /* -> FUN_00434a88 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6f50,param_1) /* =FUN_00434a88 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b44):
     * Function: FUN_00433b44
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a base pointer from GP-32660, adds offset 28496 to get a string/data address, loads the original argument (a0) as the second parameter (a1), then calls a function at GP-30636 (likely strcmp or a lookup function).
     * 2. **C pseudocode**:
     * ```c
     * // FUN_00433b44 / cFindIconByName
     * void* cFindIconByName(char* name) {
     * return some_lookup_func(icon_table_base + 28496, name);
     * }
     * ```
     * Based on the function name `cFindIconByName` visible in the disassembly, this searches an icon table for an icon by name. The GP-30636 call is likely `strcmp` or a list search function, and GP-32660 + 28496 points to the icon name table or structure base.
     */
halt_baddata();
}
