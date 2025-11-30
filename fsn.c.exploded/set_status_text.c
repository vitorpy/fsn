/**
 * set_status_text
 *
 * Extracted from fsn.c lines 50903-50917
 * Category: Filesystem
 */

void set_status_text(void)

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
