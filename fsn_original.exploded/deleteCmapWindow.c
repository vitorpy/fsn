/**
 * deleteCmapWindow
 *
 * Extracted from fsn.c lines 61651-61680
 * Category: Other
 */

void deleteCmapWindow(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < numcmap) {
    piVar1 = &current_colormap;
    do {
      if (param_1 == *piVar1) {
        numcmap = numcmap + -1;
        if (iVar3 < numcmap) {
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < &current_colormap + numcmap);
        }
        FUN_00421c14();
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < numcmap);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
