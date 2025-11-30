/**
 * process_data_section
 *
 * Extracted from fsn.c lines 55231-55263
 * Category: Other
 */

void process_data_section(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7804))
                    (param_1,param_2,*(int *)(unaff_gp + -0x7f94) + -0x69a0,2);
  iVar2 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x2370))
                    (param_1,param_2,uVar1,*(int *)(unaff_gp + -0x7f94) + -0x69a0,2);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(unaff_gp + -0x7808))(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
    iVar5 = *(int *)(unaff_gp + -0x7f5c);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0xa3;
    iVar5 = *(int *)(unaff_gp + -0x7f80);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(int *)(param_3 + (iVar4 + 1) * 8) = iVar5 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
