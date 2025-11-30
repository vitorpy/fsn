/**
 * FUN_004184c8
 *
 * Extracted from fsn.c lines 55851-55872
 * Ghidra address: 0x004184c8
 * Category: Other
 */

void FUN_004184c8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = *(int **)(param_1 + 0x10);
    do {
      iVar1 = iVar1 + 1;
      if (*(int *)(*piVar2 + 0x28) << 0xc < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
