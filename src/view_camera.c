/**
 * view_camera.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "view_camera.h"
#include "fsn_types.h"
#include "fsn_state.h"

void init_view_transform(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58e4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58dc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4))();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x14) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x18) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_camera_state(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58d4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58cc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4))();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x20) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x24) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x28) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calc_v_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)*(short *)(curcontext + 0xe) /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  *(float *)(curcontext + 0x20) = fVar1;
  fVar1 = cosf(__x);
  *(float *)(curcontext + 0x24) = fVar1;
  fVar1 = tanf(__x);
  *(float *)(curcontext + 0x28) = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_view_state(void)

{
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) != '\0') {
    (**(code **)(unaff_gp + -0x7acc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_eye(void)

{
  save_matrix_state();
  set_camera_lookat((double)view_init_x,(double)view_init_y);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_camera_lookat(double param_1,double param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  undefined4 in_register_00001040;
  undefined4 in_register_00001080;
  undefined4 in_stack_00000014;
  short in_stack_0000001a;
  short in_stack_0000001e;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fe8) + -0xeb0))(0,0);
  (**(code **)(unaff_gp + -0x7ae4))();
  piVar2 = *(int **)(unaff_gp + -0x7684);
  iVar1 = *piVar2;
  if (in_stack_00000020 == *(int *)(iVar1 + 0x3c)) {
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f0) = (float)param_1;
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f4) = (float)param_2;
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f8) =
         (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    *(short *)(*(int *)(unaff_gp + -0x7f94) + 0x6608) = in_stack_0000001a;
    *(short *)(*(int *)(unaff_gp + -0x7f94) + 0x660a) = in_stack_0000001e;
    *(bool *)(*(int *)(unaff_gp + -0x7f94) + 0x660c) = in_stack_0000001a != *(short *)(iVar1 + 0xc);
    *(bool *)(*(int *)(unaff_gp + -0x7f94) + 0x660d) = in_stack_0000001e != *(short *)(iVar1 + 0xe);
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x660e) = 0;
    (**(code **)(unaff_gp + -0x7b2c))(*(int *)(unaff_gp + -0x7f94) + 0x6610,0);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x661c) = in_stack_00000024;
    iVar4 = *(int *)(unaff_gp + -0x75dc);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6620) = in_stack_00000028;
    iVar5 = *(int *)(unaff_gp + -0x7fe8);
    iVar1 = *(int *)(unaff_gp + -0x7fe8);
    iVar3 = *(int *)(unaff_gp + -0x7f94);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6618) = *(undefined4 *)(iVar4 + 0x58);
    (*(code *)(iVar5 + -0xeb0))(iVar1 + -0x450,iVar3 + 0x65f0);
  }
  else {
    if (*(char *)(*(int *)(unaff_gp + -0x75dc) + 2) != '\0') {
      (**(code **)(unaff_gp + -0x7aac))();
      piVar2 = *(int **)(unaff_gp + -0x7684);
      iVar1 = *piVar2;
    }
    *(int *)(iVar1 + 0x3c) = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      (**(code **)(unaff_gp + -0x79c4))();
      piVar2 = *(int **)(unaff_gp + -0x7684);
    }
    *(float *)*piVar2 = (float)param_1;
    *(float *)(*piVar2 + 4) = (float)param_2;
    *(float *)(*piVar2 + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    *(short *)(*piVar2 + 0xc) = in_stack_0000001a;
    (**(code **)(unaff_gp + -0x7ad8))();
    *(short *)(**(int **)(unaff_gp + -0x7684) + 0xe) = in_stack_0000001e;
    (**(code **)(unaff_gp + -0x7ad4))();
    (**(code **)(unaff_gp + -0x7acc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
  iVar2 = equalPositions(auStack_38,
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
    gettimeofday((timeval *)&zoom_start_time,(__timezone_ptr_t)0x0);
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
      update_marked_item();
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

void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  float fVar1;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  get_selection_params(&iStack_4,&iStack_8,auStack_c);
  if (iStack_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (iStack_8 == 0) {
    if (iStack_4 == *(int *)(curcontext + 0x3c)) {
      clear_current_selection();
      *param_1 = camera_lookat_x;
      *param_2 = camera_lookat_y;
      *param_3 = camera_lookat_z;
      *param_4 = (short)camera_rotation_angle;
      *param_6 = *(int *)(curcontext + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = iStack_4;
    }
  }
  else if (iStack_4 == *(int *)(curcontext + 0x3c)) {
    get_item_screen_coords(iStack_8);
    fVar1 = *(float *)(iStack_8 + 0x14);
    *param_1 = (float)((double)fVar1 - (double)*(float *)(curcontext + 0x14) * (double)database_version)
    ;
    *param_2 = (float)(((double)*(float *)(iStack_8 + 0x18) +
                       (double)*(float *)(iStack_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar1 & 0xffffffff00000000)) -
                      (double)*(float *)(curcontext + 0x18) * (double)database_version);
    if (overlay_mode_flag == '\0') {
      *param_3 = overlay_position_offset + *(float *)(iStack_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = layout_offset_base + layout_height_adjust;
    }
    *param_4 = (short)layout_short_value;
    *param_6 = *(int *)(curcontext + 0x3c);
    *param_8 = 1;
  }
  else {
    fprintf((FILE *)0xfb52904,"found file in another dir\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8)

{
  uint extraout_var;
  uint extraout_var_00;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  get_cursor_state(&iStack_4,&iStack_c,&iStack_8);
  if (iStack_c == 0) {
    if (iStack_4 == 0) {
      if (iStack_8 == 0) {
        clear_marked_state();
      }
      else {
        iStack_4 = iStack_8;
        if ((iStack_8 == *(int *)(curcontext + 0x44)) && (*(int *)(iStack_8 + 0x28) != 0)) {
          iStack_4 = *(int *)(iStack_8 + 0x28);
        }
        update_marked_item(iStack_4);
        *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                          (double)*(float *)(curcontext + 0x14) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)layout_spacing_height));
        *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                          (double)*(float *)(curcontext + 0x18) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)layout_spacing_height));
        *param_3 = item_height_offset + *(float *)(iStack_4 + 0x24);
        *param_4 = (short)default_item_type;
        *param_6 = 0;
      }
    }
    else {
      clear_current_selection();
      update_marked_item(iStack_4);
      *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                        (double)*(float *)(curcontext + 0x14) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)layout_spacing_height));
      *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                        (double)*(float *)(curcontext + 0x18) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)layout_spacing_height));
      *param_3 = item_height_offset + *(float *)(iStack_4 + 0x24);
      *param_4 = (short)default_item_type;
      *param_6 = 0;
    }
  }
  else {
    update_marked_item(iStack_4);
    get_item_screen_coords(iStack_c);
    *param_1 = (*(float *)(iStack_4 + 0x34) +
               *(float *)(iStack_c + 0x14) * *(float *)(iStack_4 + 0x58)) -
               *(float *)(curcontext + 0x14) * view_scale_factor;
    *param_2 = (*(float *)(iStack_4 + 0x38) + *(float *)(iStack_c + 0x18)) -
               *(float *)(curcontext + 0x18) * view_scale_factor;
    if (overlay_mode_flag == '\0') {
      *param_3 = layout_offset_base + *(float *)(iStack_4 + 0x24) + *(float *)(iStack_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = layout_offset_base + *(float *)(iStack_4 + 0x24) + layout_height_adjust;
    }
    *param_6 = 0;
    *param_4 = (short)layout_rotation_value;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void calculate_view_params(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  int local_c;
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  (**(code **)(unaff_gp + -0x7924))(&local_4,&local_c,&local_8);
  if (local_c == 0) {
    if (local_4 == 0) {
      if (local_8 == 0) {
        (**(code **)(unaff_gp + -0x79c8))();
      }
      else {
        local_4 = local_8;
        if ((local_8 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44)) &&
           (*(int *)(local_8 + 0x28) != 0)) {
          local_4 = *(int *)(local_8 + 0x28);
        }
        (**(code **)(unaff_gp + -0x79c4))(local_4);
        iVar1 = *(int *)(unaff_gp + -0x75dc);
        piVar2 = *(int **)(unaff_gp + -0x7684);
        *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                          (double)*(float *)(*piVar2 + 0x14) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                          (double)*(float *)(*piVar2 + 0x18) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
        *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
        *param_6 = 0;
      }
    }
    else {
      (**(code **)(unaff_gp + -0x79c0))();
      (**(code **)(unaff_gp + -0x79c4))(local_4);
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      piVar2 = *(int **)(unaff_gp + -0x7684);
      *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                        (double)*(float *)(*piVar2 + 0x14) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                        (double)*(float *)(*piVar2 + 0x18) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
      *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
      *param_6 = 0;
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79c4))(local_4);
    (**(code **)(unaff_gp + -0x79bc))(local_c);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    *param_1 = (*(float *)(local_4 + 0x34) + *(float *)(local_c + 0x14) * *(float *)(local_4 + 0x58)
               ) - *(float *)(*piVar2 + 0x14) * *(float *)(iVar1 + 0x94);
    *param_2 = (*(float *)(local_4 + 0x38) + *(float *)(local_c + 0x18)) -
               *(float *)(*piVar2 + 0x18) * *(float *)(iVar1 + 0x94);
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(local_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(iVar1 + 0x80);
    }
    *param_6 = 0;
    *param_4 = (short)*(undefined4 *)(iVar1 + 0x98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_view_extents(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  uint in_register_00001000;
  
  piVar1 = *(int **)(unaff_gp + -0x7684);
  iVar2 = *(int *)(unaff_gp + -0x75dc);
  *param_2 = (float)((double)*(float *)(param_1 + 0x34) -
                    (double)*(float *)(*piVar1 + 0x14) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
  *param_3 = (float)((double)*(float *)(param_1 + 0x38) -
                    (double)*(float *)(*piVar1 + 0x18) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_view_position(undefined2 *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = *(int **)(unaff_gp + -0x7684);
  *param_1 = *(undefined2 *)(*piVar3 + 0xc);
  param_1[1] = *(undefined2 *)(*piVar3 + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)*piVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*piVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*piVar3 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*piVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(*piVar3 + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(*piVar3 + 0xc50);
  pfVar1 = (float *)*piVar3;
  if (pfVar1[0x11] != 0.0) {
    if (pfVar1[0xf] == 0.0) {
      *(float *)(param_1 + 0xc) = *pfVar1 - *(float *)((int)pfVar1[0x11] + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(*piVar3 + 8) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x24);
      pfVar1 = (float *)*piVar3;
      if (pfVar1[0x12] != 0.0) {
        *(float *)(param_1 + 0x14) =
             *pfVar1 - (*(float *)((int)pfVar1[0x11] + 0x34) +
                       *(float *)((int)pfVar1[0x12] + 0x14) * *(float *)((int)pfVar1[0x11] + 0x58));
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x16) =
             *(float *)(iVar2 + 4) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x38) + *(float *)(*(int *)(iVar2 + 0x48) + 0x18))
        ;
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x18) =
             *(float *)(iVar2 + 8) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x24) + *(float *)(*(int *)(iVar2 + 0x48) + 0x1c))
        ;
      }
    }
    else if (pfVar1[0x12] != 0.0) {
      *(float *)(param_1 + 0x14) = *pfVar1 - *(float *)((int)pfVar1[0x12] + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_view(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
    (**(code **)(unaff_gp + -0x79c0))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x79c8))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x7ac0))();
  }
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    iVar1 = **(int **)(unaff_gp + -0x7684);
    if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
      (**(code **)(unaff_gp + -0x79c0))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x79c8))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x7ac0))();
    }
    (**(code **)(unaff_gp + -0x7894))(1);
  }
  (**(code **)(unaff_gp + -0x79d0))();
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x3c1c))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_view_recursive(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7910))();
  }
  else {
    (**(code **)(unaff_gp + -0x79ec))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_view_recursive(int param_1,int param_2)

{
  int unaff_gp;
  undefined4 uVar1;
  
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38))
  ;
  (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_1 + 0x58));
  (**(code **)(unaff_gp + -0x7908))(param_2);
  (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18))
  ;
  if (((*(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) == '\0') ||
      (*(char *)(*(int *)(unaff_gp + -0x75dc) + 5) == '\0')) ||
     (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44))) {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void configure_viewport(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  int unaff_gp;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_f4;
  
  uVar4 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x7994);
  if ((param_2 != (undefined4 *)*piVar1) ||
     (param_1 != *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990))) {
    *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) = param_1;
    *piVar1 = (int)param_2;
    (**(code **)(unaff_gp + -0x7ae0))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) + 2));
    (**(code **)(unaff_gp + -0x7e0c))((int)*(short *)(*(int *)(unaff_gp + -0x75dc) + 0x26));
    (**(code **)(unaff_gp + -0x7ccc))(0);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b6c))
              ((float)((double)((ulonglong)uVar4 << 0x20) /
                      (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x34)));
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc),0x7a);
    pfVar2 = (float *)**(int **)(unaff_gp + -0x7684);
    if (pfVar2[0xf] == 0.0) {
      uVar3 = (**(code **)(unaff_gp + -0x7b64))
                        (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                         (pfVar2[1] - pfVar2[6] * pfVar2[8] * pfVar2[2]) /
                         *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
      (**(code **)(unaff_gp + -0x7b6c))(uVar3);
      pfVar2 = (float *)**(int **)(unaff_gp + -0x7684);
    }
    (**(code **)(unaff_gp + -0x7b60))(-*pfVar2,-pfVar2[1]);
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        (**(code **)(unaff_gp + -0x790c))(param_1);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7900))(param_1,param_2);
    }
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7e0c))(1);
    if (param_1 == 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6b9c))();
    }
    else {
      uVar3 = (**(code **)(unaff_gp + -0x7a84))(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6c18))(uVar3);
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7ce4))(uVar3,*param_2);
        (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6c18))(uVar3);
      }
    }
    (**(code **)(unaff_gp + -0x7ccc))(1);
    if (param_1 == 0) {
      (**(code **)(unaff_gp + -0x7984))();
    }
    else {
      (**(code **)(unaff_gp + -0x7974))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void viewport(void)

{
  undefined4 in_a3;
  int unaff_gp;
  int iStackX_0;
  undefined1 auStackX_4 [4];
  undefined1 auStackX_8 [8];
  undefined1 *puVar1;
  undefined4 uVar2;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  (**(code **)(unaff_gp + -0x7ff0))();
  __Argv = auStackX_4;
  varargs_ptr = auStackX_8 + iStackX_0 * 4;
  __Argc = iStackX_0;
  puVar1 = &_mips_gp0_value;
  uVar2 = 0;
  __istart();
  (**(code **)(puVar1 + -0x7c5c))();
  uVar2 = (**(code **)(puVar1 + -0x7ae8))
                    (**(undefined4 **)(puVar1 + -0x760c),**(undefined4 **)(puVar1 + -0x7608),
                     **(undefined4 **)(puVar1 + -0x7f48),in_a3,puVar1,uVar2);
  (**(code **)(puVar1 + -0x7c60))(uVar2);
  return;
}
