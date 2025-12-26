/**
 * FAMNextEvent
 *
 * Extracted from fsn.c lines 77882-77901
 * Category: Other
 */

void FAMNextEvent(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_c38 [3000];
  uint auStack_80 [32];
  
  bzero(auStack_80,0x80);
  auStack_80[*param_1 >> 5] = auStack_80[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
  piVar2 = (int *)param_1[1];
  if (((*(int *)(*piVar2 + 0xc) != 0) ||
      (((iVar1 = FUN_0043b3b8(), iVar1 != -1 && (*(int *)(*piVar2 + 0x179c) == 0)) &&
       (*(int *)(*piVar2 + 0xc) != 0)))) &&
     (iVar1 = FUN_0043b538(piVar2,*param_1,auStack_c38,0x400), iVar1 != -1)) {
    FUN_0043a664(param_1,auStack_c38,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043aa0c):
     * Function: FAMNextEvent
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if FAM connection has pending events (offset 12). If none, returns 0. Otherwise calls read() to get 1024 bytes into buffer, then calls an internal parse function. Returns -1 on read error, 1 on success.
     * 2. **C pseudocode:**
     * ```c
     * // After halt_baddata recovery point:
     * if (fc->pending_events == 0) {  // fc+12
     * return 0;  // No events pending
     * }
     * // Read from FAM socket into local buffer
     * char buffer[1024];
     * int fd = *(int*)local_param;  // from stack offset 0xc68
     * int n = read(fd, buffer, 1024);
     * if (n == -1) {
     * return -1;  // Read error
     * }
     * // Parse the received FAM message
     * parse_fam_message(local_param, buffer, event_out);  // internal function at gp-32732 + offset
     * return 1;  // Event received
     * ```
     * The gp-30456 resolves to `read()`, and gp-32732 with offset -22940 is likely an internal FAM parsing routine (possibly `_fam_parse_event` or similar).
     */
halt_baddata();
}
