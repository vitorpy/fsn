/**
 * FUN_0043aa18
 *
 * Extracted from fsn.c lines 77907-77927
 * Ghidra address: 0x0043aa18
 * Category: Other
 */

void FUN_0043aa18(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  undefined1 auStack_c38 [3000];
  uint auStack_80 [32];
  
  /* TODO: GP:-0x7ef4 */ (**(code **)(unaff_gp + -0x7ef4) /* -> EXTERNAL_0x0fac0e84 */)(auStack_80,0x80);
  auStack_80[*param_1 >> 5] = auStack_80[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
  piVar2 = (int *)param_1[1];
  if (((*(int *)(*piVar2 + 0xc) != 0) ||
      (((iVar1 = (**(code **)(unaff_gp + -0x76fc) /* -> FUN_0043b3b8 */)() /* =FUN_0043b3b8 */, iVar1 != -1 &&
        (*(int *)(*piVar2 + 0x179c) == 0)) && (*(int *)(*piVar2 + 0xc) != 0)))) &&
     (iVar1 = (**(code **)(unaff_gp + -0x76f8) /* -> FUN_0043b538 */)(piVar2,*param_1,auStack_c38,0x400) /* =FUN_0043b538 */, iVar1 != -1)) {
    (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x599c))(param_1,auStack_c38,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043aa18):
     * Function: FUN_0043aa18
     *
     * ## Analysis of FUN_0043aa18 (FAMNextEvent) snippet
     * **What it does:**
     * Checks if FAM connection has pending data (offset 12). If not, returns 0. Otherwise calls read() to get up to 1024 bytes into a stack buffer, then calls an internal parser function to process the FAM event data. Returns 1 on success, -1 on error.
     * **C pseudocode:**
     * ```c
     * // At address 0x43aad8, after halt_baddata recovery:
     * int result = -1;
     * FAMConnection *fc = (FAMConnection *)a1;
     * if (fc->fd_pending == 0) {      // offset 12: pending data flag
     * return 0;                    // no events waiting
     * }
     * char buffer[1024];
     * int fd = *(int *)param_3176;     // file descriptor from stack
     * int bytes = read(fd, buffer, 1024);  // GP-30456 = read()
     * if (bytes == -1) {
     * return -1;                   // read error
     * }
     * // GP-32732 + (-22940) = internal FAM event parser
     * parse_fam_event(param_3176, buffer, param_3180);
     * return 1;                        // event retrieved successfully
     * ```
     * **GP offsets resolved:**
     * - GP-30456 (0x8908): `read()`
     * - GP-32732 + (-22940): internal function at 0x43a664 (likely `FAMDecodeEvent` or similar parser)
     */
halt_baddata();
}
