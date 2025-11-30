/**
 * setScales
 *
 * Extracted from fsn.c lines 50682-50706
 * Category: Other
 */

void setScales(void)

{
  undefined4 uStack_50;
  int iStack_4c;
  
  if ((controlsShowing != '\0') && (curcontext[0xc53] == '\0')) {
    if (DAT_10000148 != *(short *)(curcontext + 0xc)) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)*(short *)(curcontext + 0xc);
      DAT_10000148 = *(short *)(curcontext + 0xc);
      XtSetValues(DAT_1001663c,&uStack_50,1);
    }
    if (DAT_1000014c != *(short *)(curcontext + 0xe)) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)*(short *)(curcontext + 0xe);
      DAT_1000014c = *(short *)(curcontext + 0xe);
      XtSetValues(DAT_10016640,&uStack_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
