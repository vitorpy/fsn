/**
 * locateHighlight
 *
 * Extracted from fsn.c lines 65963-65975
 * Category: Other
 */

void locateHighlight(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  set_main_gl_window();
  FUN_00426dc0(&uStack_4,&uStack_c,&uStack_8);
  FUN_00429640(uStack_4,uStack_c,uStack_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
