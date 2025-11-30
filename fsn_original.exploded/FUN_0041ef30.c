/**
 * FUN_0041ef30
 *
 * Extracted from fsn.c lines 59741-59766
 * Ghidra address: 0x0041ef30
 * Category: Other
 */

void FUN_0041ef30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_2c;
  uint local_28;
  
  iVar1 = *(int *)(curcontext + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(param_3 + 8) == 0) {
      FUN_0041889c(iVar1);
    }
    else {
      FUN_004187f4(iVar1);
    }
    FUN_0041c3e4();
    if (iVar1 == *(int *)(curcontext + 0x44)) {
      local_2c = 0xe3f48f1;
      local_28 = (uint)(*(int *)(iVar1 + 0x74) << 0xd) >> 0x1f;
      XtSetValues(DAT_10016b58,&local_2c,1);
      XtSetSensitive(menu_monitor_directory,-1 < *(int *)(iVar1 + 0x74) << 0xd);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
