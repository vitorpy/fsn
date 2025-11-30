/**
 * FUN_0043ae14
 *
 * Extracted from fsn.c lines 78040-78060
 * Ghidra address: 0x0043ae14
 * Category: Other
 */

void FUN_0043ae14(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_10017414;
  if (0 < buffer_size) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
