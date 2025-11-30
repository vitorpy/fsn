/**
 * FUN_0041ed94
 *
 * Extracted from fsn.c lines 59690-59719
 * Ghidra address: 0x0041ed94
 * Category: Other
 */

void FUN_0041ed94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x74) << 0xc < 0) &&
     (*(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7, 0 < *(int *)(param_1 + 0xc))) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_0041ed94(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
