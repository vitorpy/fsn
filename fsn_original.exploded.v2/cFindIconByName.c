/**
 * cFindIconByName
 *
 * Extracted from fsn.c lines 71909-71915
 * Category: Other
 */

void cFindIconByName(undefined4 param_1)

{
  FUN_00434a88(&DAT_10016f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b38):
     * Function: cFindIconByName
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a global pointer (gp-32660 + 28496 = address of icon database/list), loads original argument as second param, calls function at gp-30636 (likely a lookup/search function like `SgFindTypeByName` or similar), returns result.
     * 2. **C pseudocode**:
     * ```c
     * void* cFindIconByName(char *name) {
     * return SgFindTypeByName(iconDatabase, name);
     * // iconDatabase = *(gp-32660) + 0x6f50
     * // SgFindTypeByName = *(gp-30636)
     * }
     * ```
     * The gp-32660 offset likely points to a base address (possibly `_IconTypes` or similar icon registry), and 28496 (0x6f50) is an offset into that structure. The function at gp-30636 is a lookup routine that searches by name string.
     */
halt_baddata();
}
