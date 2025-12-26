/**
 * check_unmonitor_dp
 *
 * Extracted from fsn.c lines 58923-58943
 * Category: Other
 */

void check_unmonitor_dp(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1->render_flags /* was: *(int *)(param_1 + 0x74) */;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((((iVar1 << 3 < 0) && (iVar1 << 10 < 0)) && (-1 < iVar1 << 0xb)) &&
     (param_1 != curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */)) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if ((iVar2 != param_1) && (-1 < iVar1 << 0xe)) {
      FUN_00427ec8(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d350):
     * Function: check_unmonitor_dp
     *
     * ## Analysis
     * **What it does:**
     * Checks if a directory pointer (dp) matches the current context's directory. If not, and if a flag byte at offset 0xC51 in curcontext is set, gets an alternate directory from offset 0x44. If the directory still doesn't match the target and bit 17 of some value is clear, calls unmonitor_dir() on the target.
     * **C pseudocode:**
     * ```c
     * void check_unmonitor_dp(dirptr *dp, dirptr *target) {
     * // dp passed in a0, target in a1, some_val in v0
     * if (dp->dir_at_44 == target)  // offset 0x44
     * return;
     * dirptr *check_dir = NULL;
     * if (curcontext->flag_c51 != 0) {  // byte at offset 0xC51
     * check_dir = curcontext->dir_at_44;  // offset 0x44
     * }
     * if (check_dir == target)
     * return;
     * // (some_val << 14) < 0 means bit 17 is set
     * if ((some_val << 14) < 0)
     * return;
     * unmonitor_dir(target);  // GP-0x8718
     * }
     * ```
     * **Key offsets:**
     * - GP-0x8980: curcontext pointer
     * - GP-0x8718: unmonitor_dir function
     * - 0x44: directory pointer field in structs
     * - 0xC51: flag byte in context structure
     */
halt_baddata();
}
