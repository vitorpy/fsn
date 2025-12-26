/**
 * FUN_00431b34
 *
 * Extracted from fsn.c lines 70928-70960
 * Ghidra address: 0x00431b34
 * Category: Other
 */

void FUN_00431b34(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7804) /* -> FUN_004314e0 */)
                    (param_1,param_2,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69a0,2) /* =FUN_004314e0 */;
  iVar2 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x2370))
                    (param_1,param_2,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69a0,2);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(unaff_gp + -0x7808) /* -> FUN_00431354 */)(param_1,param_2) /* =FUN_00431354 */;
    *(int *)(param_3 + *param_4 * 8) = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
    iVar5 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0xa3;
    iVar5 = /* TODO: GP:-0x7f80 */ *(int *)(unaff_gp + -0x7f80) /* -> EXTERNAL_0x0f661f7c */;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431b34):
     * Function: FUN_00431b34
     *
     * Looking at this assembly:
     * **What it does:**
     * Appends two entries to an array at s1. Each entry is 8 bytes (pair of 32-bit values). s0 points to an index counter that gets incremented twice. First entry stores (t6, v1), second stores (gp[-32640]+104, a2).
     * **C pseudocode:**
     * ```c
     * // s0 = &index, s1 = array base, entries are 8 bytes each
     * int idx = *index_ptr;
     * array[idx].field0 = value1;      // t6
     * array[idx].field1 = param1;      // v1
     * idx++;
     * array[idx].field0 = some_global + 104;  // gp[-32640] + 0x68
     * array[idx].field1 = param2;      // a2
     * idx++;
     * *index_ptr = idx;
     * return param1;  // v0 = v1
     * ```
     * The `sll by 3` (multiply by 8) confirms 8-byte array entries. This looks like building a command/vertex list - possibly for IrisGL drawing commands where each entry is (command_type, data) or (pointer, value).
     */
halt_baddata();
}
