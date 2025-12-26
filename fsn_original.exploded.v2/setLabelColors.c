/**
 * setLabelColors
 *
 * Extracted from fsn.c lines 65431-65473
 * Category: UI
 */

void setLabelColors(void)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puStack_24 = auStack_30;
  uStack_28 = 0xf6615ba;
  XtGetValues(toplevel,&uStack_28,1);
  puVar1 = &legendLabel;
  ppuVar2 = &dcolorBoxes;
  puVar3 = &labelColors;
  do {
    FUN_00428cc0(*(undefined4 *)(*ppuVar2 + 4),puVar3,*puVar1,auStack_30[0]);
    puVar1 = puVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 4;
  } while (puVar1 != (undefined4 *)&legendShowing);
  if (DAT_10017494 == '\0') {
    FUN_00428cc0(DAT_100175d8,&lhLabelColor,*(undefined4 *)(curcontextwindows + 0x2c),auStack_30[0])
    ;
  }
  else {
    FUN_00428cc0(DAT_100175dc,&lhLabelColor,*(undefined4 *)(curcontextwindows + 0x2c),auStack_30[0])
    ;
  }
  if (*(int *)(altcontextwindows + 0x2c) != 0) {
    puStack_24 = DAT_10017654;
    uStack_1c = lhLabelColor;
    uStack_28 = 0xf6615f6;
    uStack_20 = 0xf661554;
    XtSetValues(*(undefined4 *)(altcontextwindows + 0x2c),&uStack_28,2);
  }
  FUN_00428cc0(DAT_10017604,&monitorLabelColor,monitorLabelWidget,auStack_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429034):
     * Function: setLabelColors
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls XtVaSetValues on a widget (offset 44 from v0) with arg count 2, then calls XtVaSetValues on widget at s0+372 with XmNforeground resource set to a color value, plus an additional argument from stack offset 64.
     * 2. **C pseudocode:**
     * ```c
     * // First call: XtVaSetValues(widget->field_2c, ..., 2)
     * XtVaSetValues(v0->widget_2c, XmNsomething, value, NULL);
     * // Second call: set foreground color on widget at offset 0x174
     * XtVaSetValues(((Widget*)s0)[0x174/4],
     * XmNforeground, foreground_color,
     * extra_arg, NULL);
     * // Function epilogue - restore s0-s3, ra, return
     * ```
     * The GP offsets resolve to:
     * - gp-31936 (0x8340): XtVaSetValues
     * - gp-30188 (0x8a14): Likely XmNforeground resource constant pointer
     * - gp-32736 (0x8020) + (-29504): Another function, possibly XtVaSetValues or similar Xt call
     * - gp-30144 (0x8a40): Another Xm resource constant
     * The `addiu t9,t9,-29504` adjusts the function pointer loaded from GOT, which is unusual - suggests a stub or PLT-like indirection for the second Xt call.
     */
halt_baddata();
}
