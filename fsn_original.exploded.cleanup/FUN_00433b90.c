/**
 * FUN_00433b90
 *
 * Extracted from fsn.c lines 71947-71955
 * Ghidra address: 0x00433b90
 * Category: Other
 */

void FUN_00433b90(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b0) /* -> FUN_004349f8 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
