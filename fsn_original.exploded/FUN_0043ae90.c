/**
 * FUN_0043ae90
 *
 * Extracted from fsn.c lines 78066-78086
 * Ghidra address: 0x0043ae90
 * Category: Other
 */

void FUN_0043ae90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_10017414;
  if (0 < buffer_size) {
    do {
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
