/**
 * FUN_0042caec
 *
 * Extracted from fsn.c lines 67844-67851
 * Ghidra address: 0x0042caec
 * Category: Other
 */

void FUN_0042caec(undefined4 param_1,int param_2,int param_3)

{
  **(undefined4 **)(param_2 + 4) = *(undefined4 *)(param_3 + 8);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
