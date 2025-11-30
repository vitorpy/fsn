/**
 * process_data_recursive
 *
 * Extracted from fsn.c lines 55337-55369
 * Category: Other
 */

void process_data_recursive(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x2370))
                    (param_1,param_2,2,*(int *)(unaff_gp + -0x7f94) + -0x69a0,3);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x77f4))(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = (**(code **)(unaff_gp + -0x7808))(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
    iVar4 = *(int *)(unaff_gp + -0x7f5c);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = *(int *)(unaff_gp + -0x7f80);
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
