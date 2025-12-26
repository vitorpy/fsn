/**
 * FAMResumeMonitor
 *
 * Extracted from fsn.c lines 77708-77723
 * Category: Other
 */

void FAMResumeMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_U_d__d__d_10009f08,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  FUN_0043b318(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043a4fc):
     * Function: FAMResumeMonitor
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Calls sprintf to format a string into a stack buffer, then calls strlen on that buffer, then calls write() with fd, buffer, and length+1. Returns 0.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets resolved:
     * // -32660 (0x806c) -> format string at 0x10006c + (-24824) = rodata string
     * // -31772 (0x83e4) -> sprintf
     * // -31776 (0x83e0) -> strlen
     * // -30464 (0x8900) -> write
     * char buf[3000];  // sp+48, given sp adjustment of 3048
     * int len;
     * // t6 = sp+3052 points to some struct, a2 = *(t6+0)
     * // a7 = sp+44 (another param), a1 = format string, v0 saved to sp+16
     * sprintf(buf, format_string, *(struct_ptr), param_from_stack, previous_result);
     * len = strlen(buf);
     * // v1 = sp+3048 points to struct with fd at offset 4, flags at offset 0
     * write(v1->fd, v1->flags, buf, len + 1);
     * return 0;
     * ```
     * **Likely original code:**
     * ```c
     * sprintf(buf, "%s...", monitor->something, arg, result);
     * write(conn->fd, conn->flags, buf, strlen(buf) + 1);
     * return 0;
     * ```
     * This is the tail of FAMResumeMonitor - it formats a FAM protocol message and writes it to the FAM connection socket, then returns success (0).
     */
halt_baddata();
}
