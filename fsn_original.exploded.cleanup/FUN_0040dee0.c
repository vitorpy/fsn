/**
 * FUN_0040dee0
 *
 * Extracted from fsn.c lines 50890-50908
 * Ghidra address: 0x0040dee0
 * Category: UI
 */

void FUN_0040dee0(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  FUN_0040d804();
  XtManageChild(DAT_1001665c);
  local_48 = 0xe3f40f2;
  local_44 = DAT_1001665c;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
