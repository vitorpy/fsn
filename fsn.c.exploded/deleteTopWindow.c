/**
 * deleteTopWindow
 *
 * Extracted from fsn.c lines 46927-46957
 * Category: Other
 */

void deleteTopWindow(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = 0;
  if (0 < numtop) {
    piVar3 = &colormap_window_list;
    do {
      if (param_1 == *piVar3) {
        iVar2 = numtop + -1;
        if (iVar1 < iVar2) {
          do {
            piVar4 = piVar3 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar4;
          } while (piVar4 < &colormap_window_list + iVar2);
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
