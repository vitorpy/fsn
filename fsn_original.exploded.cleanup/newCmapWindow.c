/**
 * newCmapWindow
 *
 * Extracted from fsn.c lines 61594-61613
 * Category: Other
 */

void newCmapWindow(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (0 < numcmap) {
    puVar1 = &current_colormap + numcmap;
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)((int)&current_colormap + 3) < puVar2);
  }
  numcmap = numcmap + 1;
  current_colormap = param_1;
  FUN_00421c14();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
