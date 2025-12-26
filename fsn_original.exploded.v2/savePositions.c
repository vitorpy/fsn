/**
 * savePositions
 *
 * Extracted from fsn.c lines 68433-68444
 * Category: Other
 */

void savePositions(void)

{
  FUN_0042dc64(&DAT_10016e50);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042dc64(&DAT_10016e88);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042defc):
     * Function: savePositions
     *
     * Looking at this assembly:
     * **What it does:**
     * Checks if byte at offset 0xC51 (3153) of a structure pointer is non-zero. If set, calls a function twice with arg=1, and between those calls, calls another function with a string pointer (rodata + 0x6e88).
     * **C pseudocode:**
     * ```c
     * // At end of savePositions, after halt_baddata marker:
     * if (some_struct->flags_c51 != 0) {
     * set_cursor(1);                    // gp[-30868] - likely hourglass/busy cursor
     * show_message(rodata + 0x6e88);    // gp[-30796] - status/error message
     * set_cursor(1);                    // restore cursor
     * }
     * // function epilogue: restore ra, sp += 32, return
     * ```
     * **GP offsets to resolve:**
     * - gp[-30868] (0x876c): cursor control function (called with 1)
     * - gp[-30796] (0x87b4): message display function
     * - gp[-32660] + 0x6e88 (0x806c): rodata base, string at offset 28296
     * The pattern suggests: "if dirty flag set, show busy cursor, display save message, restore cursor"
     */
halt_baddata();
}
