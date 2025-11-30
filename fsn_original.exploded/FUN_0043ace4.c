/**
 * FUN_0043ace4
 *
 * Extracted from fsn.c lines 78000-78023
 * Ghidra address: 0x0043ace4
 * Category: Memory
 */

void FUN_0043ace4(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_10009f40 != 0) {
    DAT_10017410 = malloc(buffer_size << 2);
    DAT_10017414 = malloc(buffer_size << 2);
    DAT_10017418 = malloc(buffer_size << 2);
    iVar2 = 0;
    iVar1 = 0;
    if (0 < buffer_size) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)((int)DAT_10017414 + iVar1) = 0xffffffff;
        iVar1 = iVar1 + 4;
      } while (iVar2 < buffer_size);
    }
    DAT_10009f40 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
