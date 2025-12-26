/**
 * drawOverviewOverlayCursor
 *
 * Extracted from fsn.c lines 60809-60848
 * Category: Graphics
 */

void drawOverviewOverlayCursor(void)

{
  int iVar1;
  uint extraout_var;
  uint extraout_var_00;
  uint uVar2;
  
  color(*(undefined2 *)(curcontextwindows + 0x32));
  pushmatrix();
  iVar1 = curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */;
  if (iVar1 == 0) {
    translate(*(float *)curcontext -
              curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
              *(float *)(curcontext + 8),
              *(float *)(curcontext + 4) -
              curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
              *(float *)(curcontext + 8));
    uVar2 = extraout_var_00;
  }
  else {
    translate(iVar1->pos_x /* was: *(undefined4 *)(iVar1 + 0x34) */,iVar1->pos_y /* was: *(undefined4 *)(iVar1 + 0x38) */);
    uVar2 = extraout_var;
  }
  scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)window_scale_x),
        (float)((double)((ulonglong)uVar2 << 0x20) / (double)window_scale_y));
  linewidth(3);
  bgnline();
  v2i(&DAT_10006ecc);
  v2i(&DAT_10006ed4);
  endline();
  bgnline();
  v2i(&DAT_10006edc);
  v2i(&DAT_10006ee4);
  endline();
  linewidth(1);
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420870):
     * Function: drawOverviewOverlayCursor
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
