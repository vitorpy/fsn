/**
 * FUN_00413824
 *
 * Extracted from fsn.c lines 53404-53437
 * Ghidra address: 0x00413824
 * Category: Other
 */

void FUN_00413824(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar1);
      iVar1 = iVar1 + 4;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
