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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421f88):
     * Function: newOverlayColormap
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-31072 with a3=0. Based on result (v0), selects one of two string offsets (-17752 or -17736 from a base pointer). Then calls XtVaGetValues (GP-31936) with display, a resource list at sp+56, and count=1.
     * 2. **C pseudocode:**
     * // c
     * a3 = 0;
     * result = some_check_function();  // GP-31072, likely XVisualIDFromVisual or similar
     * if (result != 0) {
     * resource_name = base_ptr - 17752;  // probably XmNcolormap or similar
     * } else {
     * resource_name = base_ptr - 17736;  // alternate resource string
     * }
     * // Build XtVaGetValues arglist at sp+56
     * arglist[0] = resource_name;
     * arglist[1] = saved_v0;  // from earlier call, destination for value
     * XtVaGetValues(display, arglist, 1);
     * return;
     * // end pseudocode
     * The GP-31072 offset likely resolves to a visual/colormap query function. The two string offsets (-17752, -17736) are probably Xt/Motif resource names like "colormap" vs "visualID". This is fetching a colormap-related resource from a widget based on visual type.
     */
  return;
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
  return;
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
              /*
               * BADDATA ANALYSIS (from binary @ 0x00431348):
               * Function: SG_getDefaultColormap
               *
               * Looking at this assembly:
               * 1. **What it does:** Gets default colormap for a screen. If widget (a0) is NULL, returns -2. If screen_num (a1) is 0, gets it from widget+132. If colormap (a2) is 0, computes it from screen_info array at widget+140 using index screen_num*5*16+40.
               * 2. **C pseudocode:**
               * int SG_getDefaultColormap(Widget *widget, int screen_num, Colormap colormap) {
               * if (widget == NULL) return -2;
               * if (screen_num == 0) screen_num = widget->screen;  // offset 132
               * if (colormap == 0) {
               * // screen_info at offset 140, entry size = 5*16 = 80 bytes
               * ScreenInfo *screens = widget->screen_info;  // offset 140
               * colormap = screens[screen_num].default_colormap;  // offset 40 in entry
               * }
               * // continues to use screens[screen_num] at offset 40...
               * }
               * The index calculation (a1*4 + a1)*16 = a1*80 gives 80-byte stride per screen entry. Offset 40 within that entry is the default colormap field.
               */
              return;
            }
            uVar2 = XCreateColormap((Display*)param_1,*(Window *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                                    (Visual*)param_3,0);
            *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) = uVar2;
            /*
             * BADDATA ANALYSIS (from binary @ 0x00431348):
             * Function: SG_getDefaultColormap
             *
             * Looking at this assembly:
             * 1. **What it does**: Calls a function at gp-32736+9724 (likely XtScreenDatabase or similar X11 call), gets a result struct, then iterates through an array at offset 0x14 of the result, searching for an entry matching a2 (visual/colormap ID). When found, returns the corresponding value from offset 0x1c array.
             * 2. **C pseudocode**:
             * XStandardColormap *result = XtScreenDatabase(screen); // or similar
             * int count = result->count;        // offset 0x18
             * int *visuals = result->visuals;   // offset 0x14
             * Colormap *cmaps = result->cmaps;  // offset 0x1c
             * for (int i = 0; i < count; i++) {
             * if (visuals[i] == target_visual) {
             * return cmaps[i];
             * }
             * }
             * return default_value;
             * The gp-32736+9724 resolves to an X11 function that returns standard colormap info. The loop searches for a matching visual ID and returns the associated colormap.
             */
            return;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < *(int *)(iVar1 + 0x18));
      }
      XCreateColormap((Display*)param_1,*(Window *)(*(int *)(param_1 + 0x8c) + param_2 + 8),(Visual*)param_3,0);
    }
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x00431348):
   * Function: SG_getDefaultColormap
   *
   * Looking at this assembly:
   * **What it does:**
   * This is a loop that searches through an array of 40-byte structures (stride 0x28=40). For each entry, it calls a function via GP-32072 with parameters from the structure. When found (or loop exhausted), it stores the result and returns. The loop index is in v1, compared against a limit in a1.
   * **C pseudocode:**
   * // Inside SG_getDefaultColormap, after halt_baddata section
   * // t0 = some context pointer, t9 = function pointer at gp[-32072]
   * // v1 = offset (increments by 40 each iteration)
   * // a1 = limit from structure at offset 8
   * result = func_gp_32072(s0, entry->field_8);  // jalr at 43145c
   * base = t0->field_1c;  // offset 0x1c
   * *(base + offset) = result;  // store result
   * return *(base + offset);  // return stored value
   * // Loop continuation at 431494:
   * while (a0 < a1) {
   * offset += 40;  // 0x28 stride
   * }
   * // Fallthrough: call func_gp_32072(s0, entry->field_8, 0) with a3=0
   * result = func_gp_32072(s0, s0->field_8c[index]->field_8, 0);
   * return result;
   * **Key observations:**
   * - GP offset -32072 (0x82b8) = likely XDefaultColormapOfScreen or similar X11 colormap function
   * - Structure stride of 40 bytes suggests iterating through Screen/Visual info structures
   * - The a3=zero in the fallthrough path suggests a "create new" vs "lookup existing" flag
   */
  return;
}
