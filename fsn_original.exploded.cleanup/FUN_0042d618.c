/**
 * FUN_0042d618
 *
 * Extracted from fsn.c lines 68148-68167
 * Ghidra address: 0x0042d618
 * Category: Other
 */

void FUN_0042d618(void)

{
  uint uVar1;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = **(uint **)(PTR_PTR_100094ec + 4);
  local_4 = uVar1 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_red_scale,&local_8,1);
  local_4 = (int)uVar1 >> 8 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_green_scale,&local_8,1);
  local_4 = (int)uVar1 >> 0x10 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_blue_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
