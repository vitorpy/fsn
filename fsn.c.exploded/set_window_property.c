/**
 * set_window_property
 *
 * Extracted from fsn.c lines 52210-52240
 * Category: Other
 */

void set_window_property(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  piVar1 = (int *)(param_2 + param_3 * 8);
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *piVar1 = *(int *)(unaff_gp + -0x7f60) + 0x19b3;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 1) * 8);
  iVar3 = *(int *)(unaff_gp + -0x7f5c);
  iVar4 = *(int *)(unaff_gp + -0x7f98);
  *piVar1 = iVar5 + 0x19aa;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 2) * 8);
  piVar1[1] = iVar4 + 0x79c4;
  *piVar1 = iVar3 + 0x35b;
  uVar2 = (**(code **)(unaff_gp + -0x7f44))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1c74,param_2,param_3 + 3);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10) = uVar2;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7c98))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
  (**(code **)(unaff_gp + -0x7e84))(**(undefined4 **)(unaff_gp + -0x75fc),uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
