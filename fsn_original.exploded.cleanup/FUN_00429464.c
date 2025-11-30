/**
 * FUN_00429464
 *
 * Extracted from fsn.c lines 65728-65739
 * Ghidra address: 0x00429464
 * Category: Other
 */

void FUN_00429464(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = blankXmString;
  local_8 = 0xe3f40b5;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
