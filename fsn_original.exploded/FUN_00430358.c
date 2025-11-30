/**
 * FUN_00430358
 *
 * Extracted from fsn.c lines 70066-70095
 * Ghidra address: 0x00430358
 * Category: Other
 */

void FUN_00430358(void)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  visitedSearchDp = 0;
  visitedSearchFp = 0;
  lastSearchDir = 0;
  bVar2 = firstSearchDir != 0;
  while (bVar2) {
    iVar3 = *(int *)(firstSearchDir + 0x70);
    while (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) & 0xf7;
      iVar3 = *(int *)(firstSearchDir + 0x70);
      *(undefined4 *)(firstSearchDir + 0x70) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = 0;
      iVar3 = *(int *)(firstSearchDir + 0x70);
    }
    *(byte *)(firstSearchDir + 0x76) = *(byte *)(firstSearchDir + 0x76) & 0x7f;
    *(byte *)(firstSearchDir + 0x75) = *(byte *)(firstSearchDir + 0x75) & 0xfe;
    puVar1 = (undefined4 *)(firstSearchDir + 0x6c);
    firstSearchDir = *(int *)(firstSearchDir + 0x6c);
    *puVar1 = 0;
    bVar2 = firstSearchDir != 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
