/**
 * fileStoppedExecuting
 *
 * Extracted from fsn.c lines 55897-55910
 * Category: Filesystem
 */

void fileStoppedExecuting(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413580();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    FUN_00433e24(*(undefined4 *)(iVar1 + 0x20),0,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
  }
  FUN_004184c8(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
