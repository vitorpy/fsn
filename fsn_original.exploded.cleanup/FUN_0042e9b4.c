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
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_20 = *(undefined4 *)(param_1 + 0xe);
  local_1c = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(undefined4 *)(param_1 + 0x16);
  local_10 = *(undefined4 *)(param_1 + 0x18);
  local_c = *param_1;
  local_a = param_1[1];
  local_2 = *(undefined1 *)(param_1 + 0x1a);
  if (*(int *)(param_1 + 2) == 0) {
    local_8 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,*(int *)(param_1 + 2));
    local_8 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(uVar1);
  }
  if (*(int *)(param_1 + 10) == 0) {
    local_6 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0);
    local_6 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(uVar1);
  }
  if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(undefined4 **)(param_1 + 0x12));
  }
  (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(&local_30,0x30,1,param_2);
  if (*(int *)(param_1 + 2) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,*(int *)(param_1 + 2));
    (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(uVar1,1,local_8,param_2);
  }
  if (*(int *)(param_1 + 10) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0);
    (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(uVar1,1,local_6,param_2);
  }
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(**(undefined4 **)(param_1 + 0x12),1,local_4,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
