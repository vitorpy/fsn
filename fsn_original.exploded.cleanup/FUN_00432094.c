/**
 * FUN_00432094
 *
 * Extracted from fsn.c lines 71139-71173
 * Ghidra address: 0x00432094
 * Category: Other
 */

void FUN_00432094(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7804) /* -> FUN_004314e0 */)
                    (param_1,param_2,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69a0,4);
  iVar2 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x2370))
                    (param_1,param_2,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69a0,4);
  if (iVar2 < 0) {
    (**(code **)(unaff_gp + -0x77fc) /* -> FUN_00431b34 */)(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7808) /* -> FUN_00431354 */)(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
    iVar4 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = *(int *)(unaff_gp + -0x7f80) /* -> EXTERNAL_0x0f661f7c */;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
