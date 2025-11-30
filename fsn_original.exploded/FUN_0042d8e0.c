/**
 * FUN_0042d8e0
 *
 * Extracted from fsn.c lines 68230-68253
 * Ghidra address: 0x0042d8e0
 * Category: Other
 */

void FUN_0042d8e0(void)

{
  undefined4 local_14;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = &local_4;
  local_14 = 0xf66187b;
  XtGetValues(pref_red_scale,&local_14,1);
  local_10 = &local_8;
  local_14 = 0xf66187b;
  XtGetValues(pref_green_scale,&local_14,1);
  local_10 = &local_c;
  local_14 = 0xf66187b;
  XtGetValues(pref_blue_scale,&local_14,1);
  **(int **)(PTR_PTR_100094ec + 4) = local_8 * 0x100 + local_4 + local_c * 0x10000;
  FUN_0042d6f0();
  FUN_0042c970(6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
