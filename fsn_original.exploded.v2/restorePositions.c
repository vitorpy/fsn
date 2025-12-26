/**
 * restorePositions
 *
 * Extracted from fsn.c lines 68749-68760
 * Category: Other
 */

void restorePositions(void)

{
  FUN_0042e3bc(&DAT_10016e50);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042e3bc(&DAT_10016e88);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e5b8):
     * Function: restorePositions
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Loads a pointer from t6, checks byte at offset 0xC51 (3153). If non-zero, calls a function twice with arg=1 (likely `displayHourglass`), and between those calls another function with a string pointer (rodata + 28296, likely `set_status_message`).
     * **2. C pseudocode:**
     * ```c
     * // t6 = some global pointer (likely curcontext or topdir)
     * void *ptr = *(void **)t6;
     * if (((unsigned char *)ptr)[0xC51] != 0) {
     * displayHourglass(1);                    // gp-30868
     * set_status_message(rodata_base + 28296); // gp-32660 base, gp-30784 func
     * displayHourglass(1);
     * }
     * // function epilogue - restore ra, sp += 32, return
     * ```
     * **GP offset resolution:**
     * - `gp-30868` (0x876c): `displayHourglass` (hourglass on/off)
     * - `gp-30784` (0x87c0): `set_status_message`
     * - `gp-32660` (0x806c): rodata base pointer
     * - Offset 28296 (0x6E88): likely string "Restoring positions..." or similar
     */
halt_baddata();
}
