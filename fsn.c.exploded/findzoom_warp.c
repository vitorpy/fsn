/**
 * findzoom_warp
 *
 * Extracted from fsn.c lines 43174-43230
 * Category: Other
 */

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
