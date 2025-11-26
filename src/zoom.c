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
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void zoomto(double param_1,double param_2)

{
  undefined4 in_register_00001040;
  undefined4 in_register_00001080;
  undefined4 in_stack_00000014;
  short in_stack_0000001a;
  short in_stack_0000001e;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  init_gl_state(0,0);
  set_main_gl_window();
  if (in_stack_00000020 == *(int *)(curcontext + 0x3c)) {
    zoom_stack_pointer = (float)param_1;
    zoom_stack_size = (float)param_2;
    zoom_stack_capacity = (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    camera_position_x = in_stack_0000001a;
    camera_position_y = in_stack_0000001e;
    camera_position_z = in_stack_0000001a != *(short *)(curcontext + 0xc);
    camera_rotation_changed = in_stack_0000001e != *(short *)(curcontext + 0xe);
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    zoom_active_flag = 0;
    gettimeofday((struct timeval *)&zoom_start_time, NULL);
    zoom_param_x = in_stack_00000024;
    zoom_param_y = in_stack_00000028;
    zoom_saved_state = zoom_init_state;
    init_gl_state(zoom_gl_init_callback,&zoom_stack_pointer);
  }
  else {
    if (search_results_pending != '\0') {
      process_search_results();
    }
    *(int *)(curcontext + 0x3c) = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      update_marked_item(0);
    }
    *(float *)curcontext = (float)param_1;
    *(float *)(curcontext + 4) = (float)param_2;
    *(float *)(curcontext + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    *(short *)(curcontext + 0xc) = in_stack_0000001a;
    init_view_transform();
    *(short *)(curcontext + 0xe) = in_stack_0000001e;
    init_camera_state();
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void shrinkDueToZoom(void)

{
  init_gl_state(search_gl_init_callback,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* findzoom_warp and warpZoomToFile are defined in warp.c */

void zoomToSelection(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_context_bounds((void *)(curcontext + 0x44),(void *)(curcontext + 0x48));
  }
  else {
    update_context_display((void *)(curcontext + 0x44),(void *)(curcontext + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* findzoom_landscape is defined in landscape.c */

void findzoom(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    calculate_view_params();
  }
  else {
    calculate_item_params();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
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
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
