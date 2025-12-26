/**
 * FAMDebugLevel
 *
 * Extracted from fsn.c lines 77970-77994
 * Category: Other
 */

void FAMDebugLevel(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  char acStack_c8 [200];
  
  if (param_2 == 0) {
    uVar1 = 0x45;
  }
  else if (param_2 == 1) {
    uVar1 = 0x44;
  }
  else {
    if (param_2 != 2) {
          /*
     * BADDATA ANALYSIS (from binary @ 0x0043ac20):
     * Function: FAMDebugLevel
     *
     * **What it does:**
     * Switch on arg2 (a1): 0→'E'(69), 1→'D'(68), 2→'V'(86), else return -1. Then calls sprintf(buf, format_str, char_value) where format_str is at gp-32660 offset -24772.
     * **C pseudocode:**
     * ```c
     * int FAMDebugLevel(int arg1, int level) {
     * char buf[200];
     * int ch;
     * switch (level) {
     * case 0: ch = 'E'; break;  // 69 = 'E' (Error)
     * case 1: ch = 'D'; break;  // 68 = 'D' (Debug)
     * case 2: ch = 'V'; break;  // 86 = 'V' (Verbose)
     * default: return -1;
     * }
     * sprintf(buf, /* format string */, ch);
     * // ... continues after 0x43ac94
     * return /* something */;
     * }
     * ```
     * This appears to be a FAM (File Alteration Monitor) debug level setter that converts numeric levels to single-char codes (E/D/V) and formats a debug string.
     */
halt_baddata();
    }
    uVar1 = 0x56;
  }
  sprintf(acStack_c8,&DAT_10009f3c,uVar1);
  sVar2 = strlen(acStack_c8);
  FUN_0043b318(param_1[1],*param_1,acStack_c8,sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043ac20):
     * Function: FAMDebugLevel
     *
     * Looking at the GP offsets and call sequence:
     * 1. **What it does:**
     * Calls sprintf(buffer, format_string, value), then strlen(buffer), then write(fd, buf, buffer, len+1) to output a debug message. Returns 1.
     * 2. **C pseudocode:**
     * ```c
     * // GP-31772 = sprintf, GP-31776 = strlen, GP-30464 = write
     * char buffer[200];  // at sp+40
     * sprintf(buffer, format_string, debug_value);
     * int len = strlen(buffer);
     * // v1 = param at sp+240, contains fd info
     * write(v1[1], v1[0], buffer, len + 1);
     * return 1;
     * ```
     * The structure at sp+240 (passed as parameter) contains file descriptor info - likely `v1[1]` is the fd and `v1[0]` is some flags/mode. This is a FAM (File Alteration Monitor) debug logging function that formats a message and writes it to a debug output.
     */
halt_baddata();
}
