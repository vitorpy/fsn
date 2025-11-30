/**
 * FUN_0040df80
 *
 * Extracted from fsn.c lines 50914-50927
 * Ghidra address: 0x0040df80
 * Category: UI
 */

void FUN_0040df80(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  
  local_50 = 0xe3f40cb;
  local_4c = 1;
  controlsShowing = 0;
  XtSetValues(panel_vsep_widget,&local_50,1);
  XtUnmanageChild(DAT_1001665c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
