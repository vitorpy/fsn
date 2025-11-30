/**
 * FUN_0042cbb8
 *
 * Extracted from fsn.c lines 67871-67881
 * Ghidra address: 0x0042cbb8
 * Category: Other
 */

void FUN_0042cbb8(undefined4 param_1,undefined *param_2,int param_3)

{
  if (*(int *)(param_3 + 8) != 0) {
    PTR_PTR_100094ec = param_2;
  }
  FUN_0042d618();
  FUN_0042d6f0();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
