/**
 * zoom.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "zoom.h"
#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include <sys/time.h>

#include "fsn_context.h"
/* TODO: This should be in fsn_state.h */
extern struct timeval zoom_start_time;

void pushzoom(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_38 [12];
  undefined4 auStack_8 [2];
  
  get_view_position(auStack_38);
  iVar2 = equalPositions((int)auStack_38,
                         *(int *)(curcontextwindows + 0x34) + *(int *)(curcontext + 0x40) * 0x38);
  if (iVar2 == 0) {
    *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + 1;
    iVar2 = *(int *)(curcontext + 0x40);
    if (9 < iVar2) {
      *(undefined4 *)(curcontext + 0x40) = 0;
      iVar2 = *(int *)(curcontext + 0x40);
    }
    puVar1 = (undefined4 *)(*(int *)(curcontextwindows + 0x34) + iVar2 * 0x38);
    puVar5 = auStack_38;
    do {
      puVar4 = puVar5;
      puVar3 = puVar1;
      puVar5 = puVar4 + 3;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar1 = puVar3 + 3;
    } while (puVar5 != auStack_8);
    puVar3[3] = *puVar5;
    puVar3[4] = puVar4[4];
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

void popzoom(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = get_window_entry(*(int *)(curcontextwindows + 0x34) + *(int *)(curcontext + 0x40) * 0x38);
  if (iVar1 == 0) {
    do {
      *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + -1;
      iVar1 = *(int *)(curcontext + 0x40);
      if (iVar1 < 0) {
        *(undefined4 *)(curcontext + 0x40) = 9;
        iVar1 = *(int *)(curcontext + 0x40);
      }
      iVar2 = iVar2 + 1;
      iVar1 = get_window_entry(*(int *)(curcontextwindows + 0x34) + iVar1 * 0x38);
    } while ((iVar1 == 0) && (iVar2 != 10));
  }
  *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + -1;
  if (*(int *)(curcontext + 0x40) < 0) {
    *(undefined4 *)(curcontext + 0x40) = 9;
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

/*
 * FIXED: Reconstructed function signature from parameter usage analysis.
 * Ghidra only decoded 2 of 3 double parameters. The CONCAT44 patterns were
 * reconstructing the third double (Z position) from register/stack halves.
 *
 * Parameters (inferred from usage):
 *   param_1 (double) -> curcontext[0] = X position
 *   param_2 (double) -> curcontext[4] = Y position
 *   param_3 (double) -> curcontext[8] = Z position (was CONCAT44)
 *   param_4 (short)  -> curcontext[0xc] = rotation X
 *   param_5 (short)  -> curcontext[0xe] = rotation Y
 *   param_6 (int)    -> compared with curcontext[0x3c] = target directory
 *   param_7 (int)    -> zoom_param_x
 *   param_8 (int)    -> zoom_param_y
 */
void zoomto(double param_1, double param_2, double param_3,
            short param_4, short param_5, int param_6,
            undefined4 param_7, undefined4 param_8)
{
    FsnContext *ctx = (FsnContext *)curcontext;
  init_gl_state(0,0);
  set_main_gl_window();
  if (param_6 == ctx->zoom_mode) {
    zoom_stack_pointer = (float)param_1;
    zoom_stack_size = (float)param_2;
    zoom_stack_capacity = (float)param_3;
    camera_position_x = param_4;
    camera_position_y = param_5;
    camera_position_z = param_4 != ctx->rotation_z;
    camera_rotation_changed = param_5 != ctx->rotation_x;
    if (param_6 == 0) {
      /* Early return - halt_baddata was Ghidra artifact */
      return;
    }
    zoom_active_flag = 0;
    gettimeofday((struct timeval *)&zoom_start_time, NULL);
    zoom_param_x = param_7;
    zoom_param_y = param_8;
    zoom_saved_state = zoom_init_state;
    init_gl_state(zoom_gl_init_callback,&zoom_stack_pointer);
  }
  else {
    if (search_results_pending != '\0') {
      process_search_results();
    }
    ctx->zoom_mode = param_6;
    if (param_6 != 0) {
      update_marked_item(0);
    }
    ctx->camera_x = (float)param_1;
    ctx->camera_y = (float)param_2;
    ctx->camera_z = (float)param_3;
    ctx->rotation_z = param_4;
    init_view_transform();
    ctx->rotation_x = param_5;
    init_camera_state();
    redraw_gl_scene();
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

void shrinkDueToZoom(void)

{
  init_gl_state(search_gl_init_callback,0);
  /* halt_baddata was Ghidra epilogue artifact */
}

/* findzoom_warp and warpZoomToFile are defined in warp.c */

void zoomToSelection(void)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  if (ctx->zoom_mode == 0) {
    update_context_bounds((void *)(curcontext + 0x44),(void *)(curcontext + 0x48));
  }
  else {
    update_context_display((void *)(curcontext + 0x44),(void *)(curcontext + 0x48));
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

/* findzoom_landscape is defined in landscape.c */

void findzoom(void)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  if (ctx->zoom_mode == 0) {
    calculate_view_params();
  }
  else {
    calculate_item_params();
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

/* landscapeZoomToFile is defined in landscape.c */

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
    if (cStack_1d == '\0') {
      curcontext[0xc50] = 0;
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
    else {
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
  }
  /* halt_baddata was Ghidra epilogue artifact */
}
