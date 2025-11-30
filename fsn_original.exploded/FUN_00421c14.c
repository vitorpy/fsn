/**
 * FUN_00421c14
 *
 * Extracted from fsn.c lines 61458-61480
 * Ghidra address: 0x00421c14
 * Category: Other
 */

void FUN_00421c14(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < numtop) {
    puVar4 = &DAT_10016c10;
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
