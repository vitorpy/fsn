/**
 * create_context_widget
 *
 * Extracted from fsn.c lines 44134-44235
 * Category: UI
 */

void create_context_widget(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int unaff_gp;
  
  uVar4 = *(undefined4 *)(unaff_gp + -0x7f60);
  uVar1 = (**(code **)(unaff_gp + -0x7c24))(*(int *)(unaff_gp + -0x7fa4) + -0x4e0c,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b30) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4e00,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b34) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4df0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b38) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4de0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dd4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b40) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dc4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b44) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4db4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4da8,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b4c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4d98,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c84);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b50) = uVar1;
  uVar1 = (*pcVar8)(param_1,iVar2 + -0x4d88,param_2,param_3);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar2 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar6 + 0x2375;
  param_2[5] = 1;
  uVar4 = (**(code **)(unaff_gp + -0x7de4))(uVar1,*(int *)(unaff_gp + -0x7fa4) + -0x4d78,param_2,3);
  piVar5 = *(int **)(unaff_gp + -0x767c);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*piVar5 + 0x1c) = uVar4;
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar5 + 0x1c),iVar2 + 0x293d,iVar6 + -0x4e0,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar5 + 0x1c),*(int *)(unaff_gp + -0x7f60) + 0x124b,
             *(int *)(unaff_gp + -0x7fe4) + -0x340,*(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),0x10,0,*(int *)(unaff_gp + -0x7fe4) + -0x5e8,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),0x20,0,*(int *)(unaff_gp + -0x7fe4) + -0x524,0);
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),4,0,*(undefined4 *)(unaff_gp + -0x787c),
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar5 + 0x1c));
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 3;
  param_2[2] = iVar2 + 0x2841;
  iVar7 = *(int *)(*piVar5 + 0x1c);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  piVar3 = *(int **)(unaff_gp + -0x75f8);
  param_2[4] = *(int *)(unaff_gp + -0x7f60) + 0x1d63;
  param_2[5] = 1;
  param_2[6] = iVar2 + 0x2375;
  param_2[7] = 1;
  param_2[8] = iVar6 + 0x1d4d;
  param_2[3] = iVar7;
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  param_2[9] = *piVar3;
  uVar1 = (**(code **)(unaff_gp + -0x7c28))(uVar1,iVar2 + -0x4d6c,param_2,5);
  *(undefined4 *)(*piVar5 + 0x20) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar5 + 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
