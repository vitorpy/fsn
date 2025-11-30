/**
 * FUN_0042caa0
 *
 * Extracted from fsn.c lines 67831-67838
 * Ghidra address: 0x0042caa0
 * Category: Other
 */

void FUN_0042caa0(undefined4 param_1,int param_2,int param_3)

{
  **(undefined1 **)(param_2 + 4) = (char)*(undefined4 *)(param_3 + 8);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
