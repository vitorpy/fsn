/**
 * highlightByName
 *
 * Extracted from fsn.c lines 51229-51244
 * Category: Other
 */

void highlightByName(undefined4 param_1)

{
  undefined4 uStack_8;
  int iStack_4;
  
  get_position_coords(param_1,&iStack_4,&uStack_8);
  if (iStack_4 == 0) {
    refresh_list_display();
  }
  else {
    configure_viewport(iStack_4,uStack_8,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
