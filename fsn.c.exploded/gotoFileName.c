/**
 * gotoFileName
 *
 * Extracted from fsn.c lines 45777-45793
 * Category: Filesystem
 */

void gotoFileName(undefined4 param_1)

{
  int iStack_8;
  int iStack_4;
  
  get_position_coords(param_1,&iStack_4,&iStack_8);
  if (iStack_4 != 0) {
    update_marked_item();
    if (iStack_8 != 0) {
      get_item_screen_coords();
    }
    update_gl_context();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
