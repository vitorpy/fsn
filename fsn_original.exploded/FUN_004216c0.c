/**
 * FUN_004216c0
 *
 * Extracted from fsn.c lines 61233-61248
 * Ghidra address: 0x004216c0
 * Category: Filesystem
 */

void FUN_004216c0(void)

{
  int iVar1;
  
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_0041fd70();
    iVar1 = FUN_004213c8();
    if (iVar1 != 0) {
      save_matrix_state();
      FUN_0041d69c(iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
