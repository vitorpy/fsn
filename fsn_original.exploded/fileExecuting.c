/**
 * fileExecuting
 *
 * Extracted from fsn.c lines 55878-55891
 * Category: Filesystem
 */

void fileExecuting(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413580();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    FUN_00433e24(*(undefined4 *)(iVar1 + 0x20),1,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7 | 8;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
