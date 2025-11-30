/**
 * FUN_0041bd0c
 *
 * Extracted from fsn.c lines 58026-58050
 * Ghidra address: 0x0041bd0c
 * Category: Other
 */

void FUN_0041bd0c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  undefined1 auStack_50 [80];
  
  uVar1 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e30,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b8c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1368,0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b8c),0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b8c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e1c,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b90) = uVar1;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x1180,0);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b90),0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b90));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
