/**
 * FUN_00433b44
 *
 * Extracted from fsn.c lines 71921-71929
 * Ghidra address: 0x00433b44
 * Category: Other
 */

void FUN_00433b44(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77ac) /* -> FUN_00434a88 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
