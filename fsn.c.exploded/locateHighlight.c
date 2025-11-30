/**
 * locateHighlight
 *
 * Extracted from fsn.c lines 51158-51170
 * Category: Other
 */

void locateHighlight(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  set_main_gl_window();
  gl_get_dimensions_wrapper(&uStack_4,&uStack_c,&uStack_8);
  configure_viewport(uStack_4,uStack_c,uStack_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
