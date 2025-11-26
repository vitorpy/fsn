/**
 * persistence.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "persistence.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void savecontext(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void restorecontext(void)

{
  set_context_state(saved_context_state,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void savePosition(undefined2 *param_1)

{
  *param_1 = *(undefined2 *)(curcontext + 0xc);
  param_1[1] = *(undefined2 *)(curcontext + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)curcontext;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(curcontext + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(curcontext + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(curcontext + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(curcontext + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(curcontext + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (*(int *)(curcontext + 0x44) != 0) {
    if (*(int *)(curcontext + 0x3c) == 0) {
      *(float *)(param_1 + 0xc) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x44) + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(curcontext + 8) - *(float *)(*(int *)(curcontext + 0x44) + 0x24);
      if (*(int *)(curcontext + 0x48) != 0) {
        *(float *)(param_1 + 0x14) =
             *(float *)curcontext -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x34) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x14) *
             *(float *)(*(int *)(curcontext + 0x44) + 0x58));
        *(float *)(param_1 + 0x16) =
             *(float *)(curcontext + 4) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x38) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x18));
        *(float *)(param_1 + 0x18) =
             *(float *)(curcontext + 8) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x24) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x1c));
      }
    }
    else if (*(int *)(curcontext + 0x48) != 0) {
      *(float *)(param_1 + 0x14) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x48) + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void savePositions(void)

{
  get_view_position(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    get_view_position(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void restorePositions(void)

{
  sync_fam_state(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    sync_fam_state(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
