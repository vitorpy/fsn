/**
 * restorePosition
 *
 * Extracted from fsn.c lines 53306-53350
 * Category: Filesystem
 */

void restorePosition(undefined4 param_1)

{
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  extract_position_data(param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
               &iStack_1c,(int)curcontext + 0xc50);
  if (sStack_2 != *(short *)(curcontext + 0xc)) {
    *(short *)(curcontext + 0xc) = sStack_2;
    init_view_transform();
  }
  if (sStack_4 != *(short *)(curcontext + 0xe)) {
    *(short *)(curcontext + 0xe) = sStack_4;
    init_camera_state();
  }
  *(undefined4 *)curcontext = uStack_8;
  *(undefined4 *)(curcontext + 4) = uStack_c;
  *(undefined4 *)(curcontext + 8) = uStack_10;
  *(undefined4 *)(curcontext + 0x3c) = uStack_14;
  if (iStack_18 != *(int *)(curcontext + 0x44)) {
    if (iStack_18 == 0) {
      clear_marked_state(0);
    }
    else {
      update_marked_item();
    }
  }
  if (iStack_1c != *(int *)(curcontext + 0x48)) {
    if (iStack_1c == 0) {
      clear_current_selection(0);
    }
    else {
      get_item_screen_coords();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
