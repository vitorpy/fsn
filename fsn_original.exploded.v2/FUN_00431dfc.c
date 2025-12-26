/**
 * FUN_00431dfc
 *
 * Extracted from fsn.c lines 71034-71066
 * Ghidra address: 0x00431dfc
 * Category: Other
 */

void FUN_00431dfc(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x2370))
                    (param_1,param_2,2,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69a0,3);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(param_1,param_2,param_3,param_4) /* =FUN_00432094 */;
  }
  else {
    uVar2 = (**(code **)(unaff_gp + -0x7808) /* -> FUN_00431354 */)(param_1,param_2) /* =FUN_00431354 */;
    *(int *)(param_3 + *param_4 * 8) = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
    iVar4 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = /* TODO: GP:-0x7f80 */ *(int *)(unaff_gp + -0x7f80) /* -> EXTERNAL_0x0f661f7c */;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431dfc):
     * Function: FUN_00431dfc
     *
     * Looking at this assembly:
     * **What it does:**
     * Appends two entries to an array at s1 (indexed by counter at s0). Each entry is 8 bytes: a pointer/value at offset 0 and type code at offset 4. Uses GP-relative load for a global pointer, adds 104 to it. Increments counter twice, returns 2.
     * **C pseudocode:**
     * ```c
     * // s0 = counter pointer, s1 = array base, t5/t6 = values from earlier code
     * int idx = *counter;
     * array[idx].value = some_value;      // sw t5,0(s0) context suggests prior store
     * array[idx].type = 2;                // type = 2
     * idx++;
     * array[idx].value = global_ptr + 104; // GP-relative global + 0x68 offset
     * array[idx].type = a2;                // type from argument a2
     * idx++;
     * *counter = idx;
     * return 2;
     * ```
     * The structure appears to be 8-byte entries: `{ void* value; int type; }`. The GP load at offset -32640 (0x8080) likely resolves to a widget or context pointer, with +104 accessing a specific field. This looks like it's building a list of items/callbacks with type tags.
     */
halt_baddata();
}
