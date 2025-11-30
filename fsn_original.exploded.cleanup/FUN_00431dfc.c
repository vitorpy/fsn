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
    (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(unaff_gp + -0x7808) /* -> FUN_00431354 */)(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
    iVar4 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = *(int *)(unaff_gp + -0x7f80) /* -> EXTERNAL_0x0f661f7c */;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
