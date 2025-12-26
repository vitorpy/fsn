/**
 * FUN_00439eec
 *
 * Extracted from fsn.c lines 77535-77556
 * Ghidra address: 0x00439eec
 * Category: Other
 */

void FUN_00439eec(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x5218))();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    uVar2 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
    if (uVar2 < 0x401) {
      (**(code **)(unaff_gp + -0x771c) /* -> FUN_00439c48 */)(param_1,param_2,param_3,param_4,0x4d) /* =FUN_00439c48 */;
    }
    else {
      /* TODO: GP:-0x7c38 */ (**(code **)(unaff_gp + -0x7c38) /* -> EXTERNAL_0x0faedc20 */)(1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x617c);
      */* TODO: GP:-0x7f70 */ *(undefined4 **)(unaff_gp + -0x7f70) /* -> EXTERNAL_0x0fb52720 */ = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439eec):
     * Function: FUN_00439eec
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Checks if return value from previous call (v0) < 1025. If >= 1025, logs an error message, sets a global to 78 (0x4e), and returns -1. Otherwise, calls another function with 5 args (4 from stack + constant 77) and returns 0.
     * **C pseudocode:**
     * ```c
     * result = previous_call();  // v0 from jalr at 439f40
     * if (result >= 1025) {
     * __errprint(1, "error message at gp-24956");  // gp[-31800]
     * some_global = 78;  // gp[-32624] = 0x4e
     * return -1;
     * }
     * // result < 1025: success path
     * some_func(arg0, arg1, arg2, arg3, 77);  // gp[-30492], args from sp+40..52, 77 on stack
     * return 0;
     * ```
     * The 1025 threshold and magic numbers 77/78 suggest FAM (File Alteration Monitor) request codes or error states. The gp[-30492] call is likely `FAMNextEvent` or similar FAM library function.
     */
halt_baddata();
}
