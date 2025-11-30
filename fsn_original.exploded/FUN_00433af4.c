/**
 * FUN_00433af4
 *
 * Extracted from fsn.c lines 71895-71903
 * Ghidra address: 0x00433af4
 * Category: Other
 */

void FUN_00433af4(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b4))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
