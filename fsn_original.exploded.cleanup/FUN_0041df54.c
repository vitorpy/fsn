/**
 * FUN_0041df54
 *
 * Extracted from fsn.c lines 59405-59423
 * Ghidra address: 0x0041df54
 * Category: Other
 */

void FUN_0041df54(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0041ddf8();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      FUN_0041df54(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2),param_2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
