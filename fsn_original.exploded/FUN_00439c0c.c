/**
 * FUN_00439c0c
 *
 * Extracted from fsn.c lines 77366-77374
 * Ghidra address: 0x00439c0c
 * Category: Other
 */

void FUN_00439c0c(int param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b34))(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
