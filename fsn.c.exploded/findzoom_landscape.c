/**
 * findzoom_landscape
 *
 * Extracted from fsn.c lines 49091-49166
 * Category: Filesystem
 */

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
