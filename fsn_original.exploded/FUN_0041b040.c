/**
 * FUN_0041b040
 *
 * Extracted from fsn.c lines 57747-57999
 * Ghidra address: 0x0041b040
 * Category: Other
 */

void FUN_0041b040(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int unaff_gp;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_4 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4fa8,&local_68,local_6c);
  uVar4 = *(undefined4 *)(unaff_gp + -0x7950);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  uVar5 = *(undefined4 *)(unaff_gp + -0x7954);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_4,*(undefined4 *)(unaff_gp + -0x7650));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4fa0,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x215c,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54));
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f88,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7fe4) + -0x200c;
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,1);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f78,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,0);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f64,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))
            (local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1f58,0
            );
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f50,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x10d0,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58));
  local_6c = 2;
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_5c = 0;
  local_64 = local_4;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f3c,&local_68,2);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),
             *(undefined4 *)(unaff_gp + -0x7650));
  (**(code **)(unaff_gp + -0x7c74))(param_2,4,0,*(undefined4 *)(unaff_gp + -0x79b0),0);
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
  uVar1 = (**(code **)(unaff_gp + -0x7ddc))
                    (param_2,*(int *)(unaff_gp + -0x7fa4) + -0x4f2c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
             *(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_8 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f20,&local_68,local_6c);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_8,*(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7c28))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f14,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b04))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f08,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4efc,&local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c) = uVar1;
  iVar6 = iVar6 + -0x1758;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4eec,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4edc,
                     &local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64) = uVar1;
  iVar6 = iVar6 + -0x16e8;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4ecc,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4ebc,
                     &local_68,0);
  iVar7 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84) = uVar1;
  iVar7 = iVar7 + -0x1678;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84);
  pcVar9 = *(code **)(unaff_gp + -0x7bc4);
  iVar6 = *(int *)(unaff_gp + -0x7fa4);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  uVar1 = (*pcVar9)(local_8,iVar6 + -0x4eac,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88);
  iVar7 = *(int *)(unaff_gp + -0x7f94);
  local_68 = *(int *)(unaff_gp + -0x7f60);
  local_60 = *(int *)(unaff_gp + -0x7f5c);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  local_64 = *(undefined4 *)(iVar7 + 0x6b30);
  local_68 = local_68 + 0x1d4d;
  local_60 = local_60 + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4e9c,
                     &local_68,2);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c) = uVar1;
  iVar6 = iVar6 + -0xd4c;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e8c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e7c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e6c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e5c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e4c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80));
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  local_64 = local_8;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e3c,&local_68,2);
  puVar8 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c);
  *puVar8 = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(*puVar8,*(undefined4 *)(unaff_gp + -0x764c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
