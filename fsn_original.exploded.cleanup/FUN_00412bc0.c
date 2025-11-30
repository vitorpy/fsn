/**
 * FUN_00412bc0
 *
 * Extracted from fsn.c lines 53182-53194
 * Ghidra address: 0x00412bc0
 * Category: Other
 */

void FUN_00412bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x18b0))();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(float *)(param_1 + 0x34) = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
