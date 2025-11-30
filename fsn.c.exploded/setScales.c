/**
 * setScales
 *
 * Extracted from fsn.c lines 37740-37764
 * Category: UI
 */

void setScales(void)

{
  undefined4 uStack_50;
  int iStack_4c;
  
  if ((controlsShowing != '\0') && (curcontext[0xc53] == '\0')) {
    if (cached_view_angle_1 != *(short *)(curcontext + 0xc)) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)*(short *)(curcontext + 0xc);
      cached_view_angle_1 = *(short *)(curcontext + 0xc);
      XtSetValues(view_angle_widget,&uStack_50,1);
    }
    if (cached_view_angle_2 != *(short *)(curcontext + 0xe)) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)*(short *)(curcontext + 0xe);
      cached_view_angle_2 = *(short *)(curcontext + 0xe);
      XtSetValues(vertical_scale_widget,&uStack_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
