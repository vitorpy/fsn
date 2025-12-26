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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421f88):
     * Function: newOverlayColormap
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-31072 with a3=0. Based on result (v0), selects one of two string offsets (-17752 or -17736 from a base pointer). Then calls XtVaGetValues (GP-31936) with display, a resource list at sp+56, and count=1.
     * 2. **C pseudocode:**
     * ```c
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
     * ```
     * The GP-31072 offset likely resolves to a visual/colormap query function. The two string offsets (-17752, -17736) are probably Xt/Motif resource names like "colormap" vs "visualID". This is fetching a colormap-related resource from a widget based on visual type.
     */
halt_baddata();
}
