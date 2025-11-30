/**
 * zoomPosition
 *
 * Extracted from fsn.c lines 53456-53499
 * Category: Filesystem
 */

void zoomPosition(undefined4 param_1)

{
  int iVar1;
  char cStack_1d;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  float fStack_c;
  float fStack_8;
  undefined1 auStack_4 [2];
  undefined1 auStack_2 [2];
  
  iVar1 = extract_position_data(param_1,auStack_2,auStack_4,&fStack_8,&fStack_c,auStack_10,auStack_14,
                       &iStack_18,&iStack_1c,&cStack_1d);
  if (iVar1 != 0) {
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
    if (cStack_1d == '\0') {
      curcontext[0xc50] = 0;
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
    else {
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
