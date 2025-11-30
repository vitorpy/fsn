/**
 * FUN_0040f080
 *
 * Extracted from fsn.c lines 51186-51207
 * Ghidra address: 0x0040f080
 * Category: Other
 */

void FUN_0040f080(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(curcontext + 0x2c);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  *param_2 = (float)((*(int *)(param_1 + 0x20) - (iVar1 >> 1)) * 2) / (float)iVar2;
  iVar2 = *(int *)(curcontext + 0x30);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  *param_3 = (float)(((iVar1 >> 1) - *(int *)(param_1 + 0x24)) * 2) / (float)iVar2;
  FUN_0040bc28();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
