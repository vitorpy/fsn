/**
 * FUN_00426244
 *
 * Extracted from fsn.c lines 63506-63528
 * Ghidra address: 0x00426244
 * Category: Other
 */

void FUN_00426244(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    if ((*(int *)(param_1 + 0x74) << 2 < 0) || ((*(ushort *)(param_1 + 0x74) & 1) != 0)) {
      FUN_00425ee4(param_1);
    }
    iVar1 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        FUN_00426244(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
