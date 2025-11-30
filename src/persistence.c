/**
 * persistence.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "persistence.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

#include "fsn_context.h"
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
    FsnContext *ctx = (FsnContext *)curcontext;
  *param_1 = ctx->rotation_z;
  param_1[1] = ctx->rotation_x;
  *(undefined4 *)(param_1 + 4) = ctx->camera_x;
  *(undefined4 *)(param_1 + 6) = ctx->camera_y;
  *(undefined4 *)(param_1 + 8) = ctx->camera_z;
  *(undefined4 *)(param_1 + 2) = ctx->zoom_mode;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(curcontext + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(curcontext + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (*(int *)(curcontext + 0x44) != 0) {
    if (ctx->zoom_mode == 0) {
      *(float *)(param_1 + 0xc) =
           ctx->camera_x - *(float *)(*(int *)(curcontext + 0x44) + 0x34);
      *(float *)(param_1 + 0xe) =
           ctx->camera_y - *(float *)(*(int *)(curcontext + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           ctx->camera_z - *(float *)(*(int *)(curcontext + 0x44) + 0x24);
      if (*(int *)(curcontext + 0x48) != 0) {
        *(float *)(param_1 + 0x14) =
             ctx->camera_x -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x34) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x14) *
             *(float *)(*(int *)(curcontext + 0x44) + 0x58));
        *(float *)(param_1 + 0x16) =
             ctx->camera_y -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x38) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x18));
        *(float *)(param_1 + 0x18) =
             ctx->camera_z -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x24) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x1c));
      }
    }
    else if (*(int *)(curcontext + 0x48) != 0) {
      *(float *)(param_1 + 0x14) =
           ctx->camera_x - *(float *)(*(int *)(curcontext + 0x48) + 0x14);
      *(float *)(param_1 + 0x16) =
           ctx->camera_y - *(float *)(*(int *)(curcontext + 0x48) + 0x18);
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
    FsnContext *ctx = (FsnContext *)curcontext;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  extract_position_data(param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
               &iStack_1c,(undefined1 *)((int)curcontext + 0xc50));
  if (sStack_2 != ctx->rotation_z) {
    ctx->rotation_z = sStack_2;
    init_view_transform();
  }
  if (sStack_4 != ctx->rotation_x) {
    ctx->rotation_x = sStack_4;
    init_camera_state();
  }
  ctx->camera_x = uStack_8;
  ctx->camera_y = uStack_c;
  ctx->camera_z = uStack_10;
  ctx->zoom_mode = uStack_14;
  if (iStack_18 != *(int *)(curcontext + 0x44)) {
    if (iStack_18 == 0) {
      clear_marked_state();
    }
    else {
      update_marked_item(0);
    }
  }
  if (iStack_1c != *(int *)(curcontext + 0x48)) {
    if (iStack_1c == 0) {
      clear_current_selection();
    }
    else {
      get_item_screen_coords(NULL);
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
