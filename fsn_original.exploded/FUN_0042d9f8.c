/**
 * FUN_0042d9f8
 *
 * Extracted from fsn.c lines 68259-68315
 * Ghidra address: 0x0042d9f8
 * Category: Other
 */

void FUN_0042d9f8(void)

{
  uint extraout_var;
  uint extraout_var_00;
  double dVar1;
  double dVar2;
  double dVar3;
  uint in_fcsr;
  undefined4 local_38;
  int *local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  local_34 = &local_4;
  local_38 = 0xf66187b;
  XtGetValues(pref_hue_scale,&local_38,1);
  local_34 = &local_8;
  local_38 = 0xf66187b;
  XtGetValues(pref_sat_scale,&local_38,1);
  local_34 = (int *)local_c;
  local_38 = 0xf66187b;
  XtGetValues(pref_val_scale,&local_38,1);
  hsv_to_rgb((double)(float)((double)local_4 / (double)((ulonglong)extraout_var << 0x20)),
             (double)(float)((double)local_8 / (double)((ulonglong)extraout_var << 0x20)));
  dVar1 = (double)local_2c * (double)((ulonglong)extraout_var_00 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  dVar3 = (double)local_28 * (double)((ulonglong)extraout_var_00 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar3 = ROUND(dVar3);
  }
  else {
    dVar3 = FLOOR(dVar3);
  }
  dVar2 = (double)local_30 * (double)((ulonglong)extraout_var_00 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar2 = ROUND(dVar2);
  }
  else {
    dVar2 = FLOOR(dVar2);
  }
  **(int **)(PTR_PTR_100094ec + 4) = (int)dVar1 * 0x100 + (int)dVar3 + (int)dVar2 * 0x10000;
  FUN_0042d618();
  FUN_0042c970(6);
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
