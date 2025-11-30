/**
 * FUN_0040f20c
 *
 * Extracted from fsn.c lines 51253-51264
 * Ghidra address: 0x0040f20c
 * Category: Other
 */

void FUN_0040f20c(int param_1)

{
  ulonglong in_f10;
  
  *(float *)(curcontext + 8) =
       *(float *)(curcontext + 8) +
       *(float *)(param_1 + 0xc) *
       (float)((double)*(int *)(curcontext + 0xc4c) / (double)(in_f10 & 0xffffffff00000000));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
