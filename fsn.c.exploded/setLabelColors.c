/**
 * setLabelColors
 *
 * Extracted from fsn.c lines 50686-50728
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
    apply_label_color(*(undefined4 *)(*ppuVar2 + 4),puVar3,*puVar1,auStack_30[0]);
    puVar1 = puVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 4;
  } while (puVar1 != (undefined4 *)&legendShowing);
  if (grid_display_flag == '\0') {
    apply_label_color(highlight_packed_color,&lhLabelColor,*(undefined4 *)(curcontextwindows + 0x2c),auStack_30[0])
    ;
  }
  else {
    apply_label_color(current_packed_color,&lhLabelColor,*(undefined4 *)(curcontextwindows + 0x2c),auStack_30[0])
    ;
  }
  if (*(int *)(altcontextwindows + 0x2c) != 0) {
    puStack_24 = cached_context_ptr;
    uStack_1c = lhLabelColor;
    uStack_28 = 0xf6615f6;
    uStack_20 = 0xf661554;
    XtSetValues(*(undefined4 *)(altcontextwindows + 0x2c),&uStack_28,2);
  }
  apply_label_color(monitor_label_color,&monitorLabelColor,monitorLabelWidget,auStack_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
