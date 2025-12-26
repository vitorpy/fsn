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
  (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,0,&local_68,&local_6c) /* =FUN_00432094 */;
  local_4 = /* TODO: GP:-0x7bcc */ (**(code **)(unaff_gp + -0x7bcc) /* -> EXTERNAL_0x0e2e51b8 */)
                      (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4fa8,&local_68,local_6c);
  uVar4 = overlayMenuMappedCB /* was: *(undefined4 *)(unaff_gp + -0x7950) */ /* -> overlayMenuMappedCB */;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_4,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1e96,uVar4,0);
  uVar5 = overlayMenuUnmappedCB /* was: *(undefined4 *)(unaff_gp + -0x7954) */ /* -> overlayMenuUnmappedCB */;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_4,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(local_4,*(undefined4 *)(unaff_gp + -0x7650) /* -> directoryHelp */) /* =FUN_0042b6c0 */;
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7bc4 */ (**(code **)(unaff_gp + -0x7bc4) /* -> EXTERNAL_0x0e34d98c */)
                    (local_4,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4fa0,&local_68,0);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b54) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x215c,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b54));
  local_6c = 0;
  local_10 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                       (local_4,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f88,&local_68,0);
  iVar3 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */ + -0x200c;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_10,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,1);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(local_10);
  local_6c = 0;
  local_10 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                       (local_4,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f78,&local_68,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_10,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(local_10);
  local_6c = 0;
  local_10 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                       (local_4,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f64,&local_68,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (local_10,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1f58,0
            );
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(local_10);
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7bc4 */ (**(code **)(unaff_gp + -0x7bc4) /* -> EXTERNAL_0x0e34d98c */)
                    (local_4,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f50,&local_68,0);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b58) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x10d0,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b58));
  local_6c = 2;
  local_68 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x26c9;
  local_60 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x2c7;
  local_5c = 0;
  local_64 = local_4;
  uVar1 = /* TODO: GP:-0x7bf8 */ (**(code **)(unaff_gp + -0x7bf8) /* -> EXTERNAL_0x0e25ea68 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f3c,&local_68,2);
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b98) = uVar1;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),
             *(undefined4 *)(unaff_gp + -0x7650) /* -> directoryHelp */) /* =FUN_0042b6c0 */;
  /* TODO: GP:-0x7c74 */ (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)(param_2,4,0,*(undefined4 *)(unaff_gp + -0x79b0) /* -> postMenu */,0);
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,0,&local_68,&local_6c) /* =FUN_00432094 */;
  /* TODO: GP:-0x7ce8 */ (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b98),0);
  uVar1 = /* TODO: GP:-0x7ddc */ (**(code **)(unaff_gp + -0x7ddc) /* -> EXTERNAL_0x0e2e5178 */)
                    (param_2,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f2c,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b94) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
             *(undefined4 *)(unaff_gp + -0x764c) /* -> fileHelp */) /* =FUN_0042b6c0 */;
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,0,&local_68,&local_6c) /* =FUN_00432094 */;
  local_8 = /* TODO: GP:-0x7bcc */ (**(code **)(unaff_gp + -0x7bcc) /* -> EXTERNAL_0x0e2e51b8 */)
                      (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f20,&local_68,local_6c);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_8,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1e96,uVar4,0);
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(local_8,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(local_8,*(undefined4 *)(unaff_gp + -0x764c) /* -> fileHelp */) /* =FUN_0042b6c0 */;
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7c28 */ (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f14,&local_68,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7b04 */ (**(code **)(unaff_gp + -0x7b04) /* -> EXTERNAL_0x0e3195e4 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4f08,&local_68,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4efc,&local_68,0);
  iVar6 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b5c) = uVar1;
  iVar6 = iVar6 + -0x1758;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar6,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b5c));
  piVar2 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b5c);
  *piVar2 = iVar3 + 1;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (local_8,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4eec,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b60) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b60));
  piVar2 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b60);
  iVar6 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4edc,
                     &local_68,0);
  iVar6 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b64) = uVar1;
  iVar6 = iVar6 + -0x16e8;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar6,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b64));
  piVar2 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b64);
  *piVar2 = iVar3 + 1;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (local_8,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4ecc,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b68) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b68));
  piVar2 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b68);
  iVar6 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = /* TODO: GP:-0x7bc4 */ (**(code **)(unaff_gp + -0x7bc4) /* -> EXTERNAL_0x0e34d98c */)
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4ebc,
                     &local_68,0);
  iVar7 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b84) = uVar1;
  iVar7 = iVar7 + -0x1678;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x293d,iVar7,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b84));
  iVar3 = *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b84);
  pcVar9 = /* TODO: GP:-0x7bc4 */ *(code **)(unaff_gp + -0x7bc4) /* -> EXTERNAL_0x0e34d98c */;
  iVar6 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */;
  *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20) = iVar3 + 1;
  uVar1 = (*pcVar9)(local_8,iVar6 + -0x4eac,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b88) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x293d,iVar7,0);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b88));
  iVar3 = *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6ba0) =
       *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b88);
  iVar7 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
  local_68 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  local_60 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
  iVar6 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
  *(int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6e20) = iVar3 + 1;
  local_64 = *(undefined4 *)(iVar7 + 0x6b30);
  local_68 = local_68 + 0x1d4d;
  local_60 = local_60 + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e9c,
                     &local_68,2);
  iVar6 = FUN_00420000 /* was: *(int *)(unaff_gp + -0x7fe4) */ /* -> FUN_00420000 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b6c) = uVar1;
  iVar6 = iVar6 + -0xd4c;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar6,1);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b6c));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (local_8,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e8c,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b70) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,1);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b70));
  local_64 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b3c);
  local_68 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  local_60 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e7c,&local_68,2);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b74) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,2);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b74));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (local_8,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e6c,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b78) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,2);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b78));
  local_64 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b48);
  local_68 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d4d;
  local_60 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e5c,&local_68,2);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b7c) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,3);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b7c));
  uVar1 = /* TODO: GP:-0x7b20 */ (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (local_8,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e4c,&local_68,local_6c);
  iVar3 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b80) = uVar1;
  /* TODO: GP:-0x7c54 */ (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar3 + 0x124b,iVar6,3);
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b80));
  local_68 = /* TODO: GP:-0x7f60 */ *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x26c9;
  local_60 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  local_64 = local_8;
  uVar1 = /* TODO: GP:-0x7bf8 */ (**(code **)(unaff_gp + -0x7bf8) /* -> EXTERNAL_0x0e25ea68 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e3c,&local_68,2);
  puVar8 = (undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6b9c);
  *puVar8 = uVar1;
  /* TODO: GP:-0x7c78 */ (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(*puVar8,*(undefined4 *)(unaff_gp + -0x764c) /* -> fileHelp */) /* =FUN_0042b6c0 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041b040):
     * Function: FUN_0041b040
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Creates an Xt widget (XtCreateManagedWidget or similar) with multiple arguments pushed on stack, stores the returned widget in a global array at offset 27548, calls XtRealizeWidget on it, then calls XtAddCallback with a callback function.
     * **C pseudocode:**
     * ```c
     * Widget w = XtCreateManagedWidget(resource_name, widgetClass, parent, args, 2);
     * DAT_10006b9c = w;  // store widget at gp[-32660] + 27548
     * XtRealizeWidget(w);
     * XtAddCallback(w, XmNactivateCallback, callback_func);
     * ```
     * The stack stores (t2,t4,t5,zero,t3) at offsets 64,72,60,76,68 = Xt arg/value pairs. The `a1,-20028` offset is likely a widget class or resource string. GP-relative loads at -31864 and -30812 are XtRealizeWidget and XtAddCallback respectively.
     */
halt_baddata();
}
