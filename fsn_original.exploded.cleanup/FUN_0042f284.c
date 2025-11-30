/**
 * FUN_0042f284
 *
 * Extracted from fsn.c lines 69458-69501
 * Ghidra address: 0x0042f284
 * Category: Other
 */

void FUN_0042f284(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int unaff_gp;
  int local_54 [21];
  
  local_54[0] = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x2c7;
  local_54[1] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ba4) /* -> EXTERNAL_0x0e316b30 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3c30,local_54,1);
  puVar4 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ec0);
  *puVar4 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(*puVar4,0xd);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(*puVar4,0xb);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(*puVar4,0xe);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0) /* -> EXTERNAL_0x0e316a34 */)(*puVar4,8);
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar3 = *(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */;
  pcVar5 = *(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6ec4) = uVar1;
  (*pcVar5)(*puVar4,iVar2 + 0x214e,iVar3 + -0xb28,0);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*puVar4,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x14a5,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0xa30,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*puVar4);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(*puVar4,*(undefined4 *)(unaff_gp + -0x7644) /* -> markHelp */);
  uVar1 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x3c40,local_54,0);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x8c4,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(uVar1,*(undefined4 *)(unaff_gp + -0x7644) /* -> markHelp */);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
