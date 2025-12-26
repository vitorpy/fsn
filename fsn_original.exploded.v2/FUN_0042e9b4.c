/**
 * FUN_0042e9b4
 *
 * Extracted from fsn.c lines 68976-69043
 * Ghidra address: 0x0042e9b4
 * Category: Other
 */

void FUN_0042e9b4(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined1 local_2;
  
  local_30 = *(undefined4 *)(param_1 + 4);
  local_2c = *(undefined4 *)(param_1 + 6);
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */;
  local_20 = *(undefined4 *)(param_1 + 0xe);
  local_1c = param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */;
  local_18 = param_1->child_count /* was: *(undefined4 *)(param_1 + 0x14) */;
  local_14 = *(undefined4 *)(param_1 + 0x16);
  local_10 = param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */;
  local_c = *param_1;
  local_a = param_1[1];
  local_2 = *(undefined1 *)(param_1 + 0x1a);
  if (*(int *)(param_1 + 2) == 0) {
    local_8 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,*(int *)(param_1 + 2)) /* =FUN_00411b30 */;
    local_8 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(uVar1);
  }
  if (*(int *)(param_1 + 10) == 0) {
    local_6 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0) /* =FUN_00411b30 */;
    local_6 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(uVar1);
  }
  if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(undefined4 **)(param_1 + 0x12));
  }
  /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(&local_30,0x30,1,param_2);
  if (*(int *)(param_1 + 2) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,*(int *)(param_1 + 2)) /* =FUN_00411b30 */;
    /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(uVar1,1,local_8,param_2);
  }
  if (*(int *)(param_1 + 10) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0) /* =FUN_00411b30 */;
    /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(uVar1,1,local_6,param_2);
  }
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    /* TODO: GP:-0x7d74 */ (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(**(undefined4 **)(param_1 + 0x12),1,local_4,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e9b4):
     * Function: FUN_0042e9b4
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Conditionally calls two GP-resolved functions. If a1 != 0, calls func1(0) then func2(result, 1, halfword@sp+82, word@sp+92). Then if s0->field_0x24 != 0, calls func2(*(s0->field_0x24), 1, halfword@sp+84, word@sp+92).
     * **2. C pseudocode:**
     * ```c
     * // GP offsets: -31364 (0x857c) and -32116 (0x828c) need resolution
     * // Likely: 0x857c = some_init_func, 0x828c = XtSetArg or similar widget call
     * if (a1 != 0) {
     * void *result = func_gp857c(0);           // jalr gp[-31364]
     * func_gp828c(result, 1, sp_82, sp_92);    // jalr gp[-32116]
     * }
     * void *ptr = s0->field_0x24;  // offset 36 from s0
     * if (ptr != NULL) {
     * func_gp828c(*(void**)ptr, 1, sp_84, sp_92);
     * }
     * return;
     * ```
     * To resolve the GP functions, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-31364
     * -32116"
     * ```
     * The pattern (passing 1 as arg2, halfword as arg3, word as arg4) suggests XtSetArg/XtSetValues or similar Motif resource-setting calls.
     */
halt_baddata();
}
