/**
 * colormap.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "colormap.h"
#include "fsn_types.h"
#include "fsn_state.h"

void newOverlayColormap(Widget param_1)

{
  int iVar1;
  char **ppcVar2;
  Colormap uVar3;
  Visual **puStack_5c;
  Window uStack_58;
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
  XtGetValues(param_1,(Arg*)apcStack_50,iStack_54 + 1);
  uVar3 = XCreateColormap(display,uStack_58,(Visual*)*puStack_5c,0);
  iVar1 = init_display_mode();
  if (iVar1 == 0) {
    apcStack_50[0] = "overlayColormap";
  }
  else {
    apcStack_50[0] = "popupColormap";
  }
  apcStack_50[1] = (char *)uVar3;
  XtSetValues(param_1,(Arg*)apcStack_50,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void allocOverlayColor(Widget param_1,undefined4 param_2)

{
  int iVar1;
  XColor auStack_70;
  XColor auStack_64;
  Colormap auStack_58 [2];
  char *pcStack_50;
  Colormap *puStack_4c;

  iVar1 = init_display_mode();
  puStack_4c = auStack_58;
  if (iVar1 == 0) {
    pcStack_50 = "overlayColormap";
  }
  else {
    pcStack_50 = "popupColormap";
  }
  XtGetValues(param_1,(Arg*)&pcStack_50,1);
  iVar1 = XAllocNamedColor(display,auStack_58[0],(char*)param_2,&auStack_64,&auStack_70);
  if (iVar1 == 0) {
    fprintf((FILE *)0xfb52904,"Could not allocate overlay color %s\n",param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getDefaultColormap(int param_1,int param_2,int param_3)

{
  int iVar1;
  Colormap uVar2;
  int *piVar3;
  int iVar4;

  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x28);
    }
    param_2 = param_2 * 0x50;
    if (param_3 != *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28)) {
      iVar1 = get_bytecode_context(param_1, 0);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x18)) {
        piVar3 = *(int **)(iVar1 + 0x14);
        do {
          if (param_3 == *piVar3) {
            if (*(int *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) != 0) {
              halt_baddata();
            }
            uVar2 = XCreateColormap((Display*)param_1,*(Window *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                                    (Visual*)param_3,0);
            *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) = uVar2;
            halt_baddata();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < *(int *)(iVar1 + 0x18));
      }
      XCreateColormap((Display*)param_1,*(Window *)(*(int *)(param_1 + 0x8c) + param_2 + 8),(Visual*)param_3,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
