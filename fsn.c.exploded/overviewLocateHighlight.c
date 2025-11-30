/**
 * overviewLocateHighlight
 *
 * Extracted from fsn.c lines 51195-51205
 * Category: Other
 */

void overviewLocateHighlight(void)

{
  undefined4 uVar1;
  
  glx_switch_context_wrapper();
  uVar1 = get_current_time();
  configure_viewport(uVar1,0,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
