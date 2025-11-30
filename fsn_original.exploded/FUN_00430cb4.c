/**
 * FUN_00430cb4
 *
 * Extracted from fsn.c lines 70412-70529
 * Ghidra address: 0x00430cb4
 * Category: Other
 */

void FUN_00430cb4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  uVar1 = (**(code **)(unaff_gp + -0x7e90))(*(int *)(unaff_gp + -0x7fa4) + 0x3d24);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7e90);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed0) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d2c);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7e90);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed4) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d30);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7ba4);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1795;
  local_24 = 1;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8) = uVar1;
  uVar1 = (*pcVar6)(param_1,iVar5 + 0x3d34,&local_28,1);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xe);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xb);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xd);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,1);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef8) = uVar2;
  (**(code **)(unaff_gp + -0x7ce8))(uVar2,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef8));
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x214e,*(int *)(unaff_gp + -0x7fe0) + 0x448,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x12d9,*(int *)(unaff_gp + -0x7fe0) + 0x8ec,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x14a5,*(int *)(unaff_gp + -0x7fe0) + 0x7bc,0);
  local_24 = 1;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  uVar2 = (**(code **)(unaff_gp + -0x7af8))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x3d3c,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed0);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar3 = (**(code **)(unaff_gp + -0x7c28))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d44,&local_28,1)
  ;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee0) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  local_24 = 2;
  uVar3 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d50,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  uVar4 = (**(code **)(unaff_gp + -0x7c28))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d5c,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar4);
  uVar3 = (**(code **)(unaff_gp + -0x7de4))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d64,&local_28,0)
  ;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee4) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  local_24 = 2;
  uVar3 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d70,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  uVar4 = (**(code **)(unaff_gp + -0x7c28))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d7c,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar4);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar4 = (**(code **)(unaff_gp + -0x7b20))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d84,&local_28,1)
  ;
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef0) = uVar4;
  (**(code **)(unaff_gp + -0x7c54))(uVar4,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) + 0xb70,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef0));
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7de4);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6f04) = 0;
  uVar3 = (*pcVar6)(uVar3,iVar5 + 0x3d94,&local_28,0);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee8) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_24 = 2;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  uVar2 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3da0,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  uVar3 = (**(code **)(unaff_gp + -0x7c28))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3dac,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar3 = (**(code **)(unaff_gp + -0x7b20))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3db0,&local_28,1)
  ;
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef4) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) + 0xc0c,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef4));
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7de4);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6f05) = 0;
  uVar2 = (*pcVar6)(uVar2,iVar5 + 0x3dc0,&local_28,0);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6eec) = uVar2;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  (**(code **)(unaff_gp + -0x785c))(uVar1,*(undefined4 *)(unaff_gp + -0x7640));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
