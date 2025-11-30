/**
 * newOverlayColormap
 *
 * Extracted from fsn.c lines 61770-61813
 * Category: Other
 */

void newOverlayColormap(undefined4 param_1)

{
  int iVar1;
  char **ppcVar2;
  undefined4 uVar3;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  char *apcStack_50 [20];
  
  iVar1 = init_display_mode();
  apcStack_50[1] = (char *)&uStack_58;
  if (iVar1 == 0) {
    apcStack_50[0] = "overlayWindow";
  }
  else {
    apcStack_50[0] = "popupWindow";
  }
  iStack_54 = 1;
  iVar1 = init_display_mode();
  if (iVar1 == 0) {
    ppcVar2 = apcStack_50 + iStack_54 * 2;
    *ppcVar2 = "overlayVisual";
  }
  else {
    ppcVar2 = apcStack_50 + iStack_54 * 2;
    *ppcVar2 = "popupVisual";
  }
  ppcVar2[1] = (char *)&puStack_5c;
  XtGetValues(param_1,apcStack_50,iStack_54 + 1);
  uVar3 = XCreateColormap(display,uStack_58,*puStack_5c,0);
  iVar1 = init_display_mode();
  if (iVar1 == 0) {
    apcStack_50[0] = "overlayColormap";
  }
  else {
    apcStack_50[0] = "popupColormap";
  }
  apcStack_50[1] = (char *)uVar3;
  XtSetValues(param_1,apcStack_50,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
