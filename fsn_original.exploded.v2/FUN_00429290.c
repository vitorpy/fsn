/**
 * FUN_00429290
 *
 * Extracted from fsn.c lines 65599-65610
 * Ghidra address: 0x00429290
 * Category: Other
 */

void FUN_00429290(void)

{
  int unaff_gp;
  
  if (*(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7988) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x00429290):
     * Function: FUN_00429290
     *
     * **What it does:**
     * Loads a pointer from GP-relative address (curcontext), reads the value at offset 0x7988 (31112 bytes into context structure), returns 0 if NULL, otherwise returns value+1.
     * **C pseudocode:**
     * ```c
     * int getbeam(void) {
     * int beam_value = curcontext[0x7988 / 4];  // offset 31112 = field index ~7862
     * if (beam_value == 0)
     * return 0;
     * return beam_value + 1;
     * }
     * ```
     * The offset 0x7988 (31112) into the context structure likely holds a beam/selection count or index. Returns 0 for "no beam", otherwise beam_id + 1 (1-indexed result).
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429290):
     * Function: FUN_00429290
     *
     * **What it does:**
     * This is the tail of `getbeam()`. If v1 (beam pointer/index) is zero, it branches to return 0. Otherwise, it returns v1+1 (the beam ID incremented by 1).
     * **C pseudocode:**
     * ```c
     * if (beam == 0)
     * return 0;
     * return beam + 1;
     * ```
     * This appears to be returning a 1-based beam index (0 means "no beam", otherwise return index+1 to convert from 0-based internal storage to 1-based external ID).
     */
halt_baddata();
}
