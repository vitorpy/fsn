/**
 * readingDatabaseMessage
 *
 * Extracted from fsn.c lines 67116-67125
 * Category: Filesystem
 */

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(DAT_10016e10);
  XmTextInsert(DAT_10016e10,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042afc8):
     * Function: readingDatabaseMessage
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls `strlen()` on a string from `curcontext[0x6e10/4]` (offset 7044 = index 1761), then calls `set_status_message()` with that widget, the length, and a format string from `DAT_10006e20[0x7b60/4]`.
     * **2. C pseudocode:**
     * ```c
     * void readingDatabaseMessage(void) {
     * Widget statusWidget = ((Widget*)curcontext)[1761];  // curcontext + 0x6e10
     * int len = strlen((char*)statusWidget);  // GP-32364 = strlen
     * char *fmt = ((char**)DAT_10006e20)[1758];  // DAT_10006e20 + 0x7b60
     * set_status_message(statusWidget, len, fmt);  // GP-32368 = set_status_message
     * }
     * ```
     * Wait - re-reading more carefully: the first `lw a0,-32660(gp)` loads a global pointer (likely `curcontext`), then `lw a0,28176(a0)` dereferences it. The pattern suggests:
     * ```c
     * void readingDatabaseMessage(void) {
     * char *msg = *(char**)(curcontext + 0x6e10);
     * int len = strlen(msg);
     * char *fmt = *(char**)(resourceStrings + 0x7b60);
     * set_status_message(msg, len, fmt);
     * }
     * ```
     * The function displays a "Reading database..." status message, using strlen to get message length and a resource string format.
     */
halt_baddata();
}
