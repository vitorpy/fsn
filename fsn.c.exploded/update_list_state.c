/**
 * update_list_state
 *
 * Extracted from fsn.c lines 50923-50934
 * Category: Filesystem
 */

void update_list_state(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = blankXmString;
  local_8 = 0xe3f40b5;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
