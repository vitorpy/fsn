/**
 * FUN_00410f74
 *
 * Extracted from fsn.c lines 52153-52179
 * Ghidra address: 0x00410f74
 * Category: Other
 */

void FUN_00410f74(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  undefined4 local_4;
  
  local_50 = (**(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */)(param_1,*(undefined4 *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */);
  local_54 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1f78;
  local_4 = local_50;
  uVar1 = (**(code **)(unaff_gp + -0x7ec0) /* -> EXTERNAL_0x0e2bffe8 */)
                    (**(undefined4 **)(unaff_gp + -0x75f0) /* -> toplevel */,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5934,
                     &local_54,1);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0) /* -> EXTERNAL_0x0e2c014c */)(uVar1,2);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0) /* -> EXTERNAL_0x0e2c014c */)(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70) /* -> EXTERNAL_0x0f68d8f8 */)(uVar2);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0xa9,*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0xf30,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  (**(code **)(unaff_gp + -0x7e88) /* -> EXTERNAL_0x0e363b40 */)(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
