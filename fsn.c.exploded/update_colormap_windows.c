/**
 * update_colormap_windows
 *
 * Extracted from fsn.c lines 46880-46902
 * Category: Other
 */

void update_colormap_windows(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < numtop) {
    puVar4 = &colormap_window_list;
    do {
      iVar1 = numcmap;
      uVar2 = *puVar4;
      (&current_colormap)[numcmap] = uVar2;
      XSetWMColormapWindows(display,uVar2,&current_colormap,iVar1 + 1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
