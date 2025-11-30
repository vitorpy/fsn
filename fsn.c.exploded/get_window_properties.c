/**
 * get_window_properties
 *
 * Extracted from fsn.c lines 51309-51386
 * Category: Other
 */

void get_window_properties(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7c84))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x16f0,param_2,param_3);
  piVar7 = *(int **)(unaff_gp + -0x767c);
  uVar2 = *(undefined4 *)(unaff_gp + -0x7630);
  *(undefined4 *)(*piVar7 + 0x10) = uVar1;
  (**(code **)(unaff_gp + -0x785c))(*(undefined4 *)(*piVar7 + 0x10),uVar2);
  iVar8 = *(int *)(unaff_gp + -0x7f60);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x1399;
  param_2[1] = 1;
  param_2[2] = iVar8 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar3 + 0x2375;
  param_2[5] = 1;
  iVar3 = (**(code **)(unaff_gp + -0x7af8))
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) + -0x16e8,param_2,
                     3);
  (**(code **)(unaff_gp + -0x7c78))(iVar3);
  (**(code **)(unaff_gp + -0x7c74))
            (iVar3,4,0,*(int *)(unaff_gp + -0x7fe0) + -0x5bc0,*(undefined4 *)(*piVar7 + 8));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16d8,param_2,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x60a0,
             *(undefined4 *)(*piVar7 + 8));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16d0,param_2,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(undefined4 *)(unaff_gp + -0x79b4),
             *(undefined4 *)(*piVar7 + 8));
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16c8,param_2,0);
  *(undefined4 *)(*piVar7 + 0x18) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar7 + 0x18));
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar7 + 0x18),*(int *)(unaff_gp + -0x7f60) + 0x124b,
             *(int *)(unaff_gp + -0x7fe0) + -0x5d28,*(undefined4 *)(*piVar7 + 8));
  iVar9 = *(int *)(unaff_gp + -0x7f60);
  iVar8 = *(int *)(unaff_gp + -0x7f60);
  iVar4 = *(int *)(unaff_gp + -0x7f60);
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar9 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar8 + 0x2375;
  param_2[5] = 1;
  param_2[6] = iVar4 + 0x1399;
  param_2[7] = 3;
  param_2[8] = iVar5 + 0x13eb;
  param_2[9] = iVar3;
  param_2[10] = iVar6 + 0x19aa;
  param_2[0xb] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ef0))
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) + -0x16bc,param_2,
                     6);
  *(undefined4 *)(*piVar7 + 0x14) = uVar1;
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar7 + 0x14),4,0,*(undefined4 *)(unaff_gp + -0x787c),
             *(undefined4 *)(*piVar7 + 8));
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar7 + 0x14));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
