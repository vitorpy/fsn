/**
 * FUN_0042cb38
 *
 * Extracted from fsn.c lines 67857-67865
 * Ghidra address: 0x0042cb38
 * Category: Other
 */

void FUN_0042cb38(undefined4 param_1,int param_2,int param_3)

{
  **(float **)(param_2 + 4) =
       (float)*(int *)(param_3 + 8) / *(float *)(&DAT_100094f0 + *(int *)(param_2 + 0x14) * 4);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
