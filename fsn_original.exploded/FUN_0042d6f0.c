/**
 * FUN_0042d6f0
 *
 * Extracted from fsn.c lines 68173-68224
 * Ghidra address: 0x0042d6f0
 * Category: Other
 */

void FUN_0042d6f0(void)

{
  uint in_register_00001000;
  uint extraout_var;
  double dVar1;
  double dVar2;
  double dVar3;
  uint in_fcsr;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_8;
  int local_4;
  
  rgb_to_hsv((double)(float)((double)(**(uint **)(PTR_PTR_100094ec + 4) & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)),
             (double)(float)((double)((int)**(uint **)(PTR_PTR_100094ec + 4) >> 8 & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)));
  dVar1 = (double)local_38 * (double)((ulonglong)extraout_var << 0x20);
  local_8 = 0xf66187b;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  dVar3 = (double)local_3c * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar3 = ROUND(dVar3);
  }
  else {
    dVar3 = FLOOR(dVar3);
  }
  dVar2 = (double)local_34 * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar2 = ROUND(dVar2);
  }
  else {
    dVar2 = FLOOR(dVar2);
  }
  local_4 = (int)dVar2;
  XtSetValues(pref_hue_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar1;
  XtSetValues(pref_sat_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar3;
  XtSetValues(pref_val_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
