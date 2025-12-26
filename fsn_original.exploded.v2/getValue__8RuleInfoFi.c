/**
 * getValue__8RuleInfoFi
 *
 * Extracted from fsn.c lines 72142-72147
 * Category: Other
 */

void getValue__8RuleInfoFi(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433f38):
     * Function: getValue__8RuleInfoFi
     *
     * ## Analysis
     * **What it does:**
     * Loads a 32-bit value from an array stored at offset 0x44 (68 bytes) within a structure. The index (a1) is scaled by 4 (shift left 2) and added to the base pointer (a0).
     * **C pseudocode:**
     * ```c
     * int getValue__8RuleInfoFi(RuleInfo *this, int index) {
     * return this->values[index];  // values is at offset 0x44 in RuleInfo struct
     * }
     * ```
     * Or more literally:
     * ```c
     * int getValue__8RuleInfoFi(void *a0, int a1) {
     * return *(int *)((char *)a0 + 0x44 + a1 * 4);
     * }
     * ```
     * This is a C++ method `RuleInfo::getValue(int)` - a simple array accessor into member data at offset 68.
     */
halt_baddata();
}
