/**
 * FUN_00416198
 *
 * Extracted from fsn.c lines 54609-54620
 * Ghidra address: 0x00416198
 * Category: Other
 */

void FUN_00416198(void)

{
  if (topdir != 0) {
    fprintf((FILE *)0xfb52904,"mutiple hierarchies in database; exiting\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  FUN_00415dec(0,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00416198):
     * Function: FUN_00416198
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Checks if a pointer (in t6) is non-null. If so, calls XtSetLanguageProc(NULL+32, string, ...) then exit(1). Finally calls a function at base+0x5dec with args (0, 0) and stores result in a global.
     * **2. C pseudocode:**
     * ```c
     * void FUN_00416198(void *ptr) {
     * if (ptr != NULL) {
     * XtSetLanguageProc((void*)32, some_string);  // GP-0x805c offset -22060
     * exit(1);                                      // GP-0x83a0
     * }
     * result = FUN_xxxxx5dec(0, 0);  // base + 0x5dec
     * DAT_xxxx = result;             // GP-0x892c store
     * }
     * ```
     * The `ptr+32` and string offset suggest this may be an error handler that prints a message before exiting. The final function call with (0,0) and storing the result suggests cleanup or reset - possibly `scandir(NULL, NULL)` returning to store a new directory state, or `set_status_message(0, 0)` type call.
     */
halt_baddata();
}
