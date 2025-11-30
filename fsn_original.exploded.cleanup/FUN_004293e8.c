/**
 * FUN_004293e8
 *
 * Extracted from fsn.c lines 65708-65722
 * Ghidra address: 0x004293e8
 * Category: Memory
 */

void FUN_004293e8(void)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = XmStringCreateSimple();
  local_c = 0xe3f40b5;
  local_4 = local_8;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_c,1);
  XmStringFree(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
