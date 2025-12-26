/**
 * FUN_00411e38
 *
 * Extracted from fsn.c lines 52613-52618
 * Ghidra address: 0x00411e38
 * Category: Other
 */

void FUN_00411e38(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411e38):
     * Function: FUN_00411e38
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a pointer from GP-relative global, reads an offset value from that pointer+26284, subtracts argument a0, divides by 86400 (0x15180 = 86400 decimal = seconds per day), returns the quotient.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_00411e38(int a0) {
     * int *ptr = *(int **)(gp - 32660);  // DAT_1000xxxx - likely a timestamp base
     * int value = ptr[26284/4];          // or *(ptr + 6571) if word-indexed
     * return (value - a0) / 86400;       // Convert seconds difference to days
     * }
     * ```
     * This is a **time-to-days conversion function** - takes a Unix timestamp (a0), subtracts it from some stored timestamp, and returns the difference in days. The 86400 constant (seconds per day) confirms this. Likely used for file age calculations in the 3D display (older files might be positioned differently or colored based on age).
     */
halt_baddata();
}
