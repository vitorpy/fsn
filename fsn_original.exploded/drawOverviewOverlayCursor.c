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
  iVar1 = *(int *)(curcontext + 0x3c);
  if (iVar1 == 0) {
    translate(*(float *)curcontext -
              *(float *)(curcontext + 0x14) * *(float *)(curcontext + 0x20) *
              *(float *)(curcontext + 8),
              *(float *)(curcontext + 4) -
              *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
              *(float *)(curcontext + 8));
    uVar2 = extraout_var_00;
  }
  else {
    translate(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38));
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
  halt_baddata();
}
