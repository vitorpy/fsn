/**
 * age
 *
 * Extracted from fsn.c lines 52602-52607
 * Category: Other
 */

void age(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411e2c):
     * Function: age
     *
     * ## Analysis
     * **What it does:**
     * Loads a timestamp from a global structure (at GP offset -32660, field +26284), subtracts the input parameter, and divides by 86400 (0x15180 = 24*60*60 seconds per day). Returns the number of days elapsed.
     * **C pseudocode:**
     * ```c
     * int age(int file_timestamp) {
     * int current_time = curcontext->timestamp;  // or some global time value at offset 26284
     * return (current_time - file_timestamp) / 86400;
     * }
     * ```
     * The GP offset -32660 (0x806c) likely points to `curcontext` or a similar global. Field offset 26284 (0x66ac) contains a reference timestamp. The function computes the age of a file in days by dividing the time difference by seconds-per-day.
     */
halt_baddata();
}
