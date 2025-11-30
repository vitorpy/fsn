/**
 * allocOverlayColor
 *
 * Extracted from fsn.c lines 61873-61898
 * Category: Other
 */

void allocOverlayColor(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined4 auStack_58 [2];
  char *pcStack_50;
  undefined4 *puStack_4c;
  
  iVar1 = init_display_mode();
  puStack_4c = auStack_58;
  if (iVar1 == 0) {
    pcStack_50 = "overlayColormap";
  }
  else {
    pcStack_50 = "popupColormap";
  }
  XtGetValues(param_1,&pcStack_50,1);
  iVar1 = XAllocNamedColor(display,auStack_58[0],param_2,auStack_64,auStack_70);
  if (iVar1 == 0) {
    fprintf((FILE *)0xfb52904,"Could not allocate overlay color %s\n",param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
