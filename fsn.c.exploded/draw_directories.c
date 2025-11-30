/**
 * draw_directories
 *
 * Extracted from fsn.c lines 48177-48298
 * Category: Graphics
 */

void draw_directories(char param_1)

{
  float fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  selected_id_1 = 0;
  selected_id_2 = 0;
  if (*(int *)(curcontext + 0x3c) == 0) {
    if (topdir != 0) {
      if (param_1 == '\0') {
        fVar1 = powf(zoom_base_factor,
                     (*(float *)(curcontext + 4) -
                     *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                     *(float *)(curcontext + 8)) / zoom_reference_height);
        fVar1 = (icon_size_multiplier * *(float *)(curcontext + 0x34)) / fVar1;
        if (grid_display_flag == '\0') {
          cpack(highlight_packed_color);
          bgnpolygon();
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          endpolygon();
        }
        else {
          shademodel(1);
          bgnpolygon();
          cpack(graphics_state_mode);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(current_packed_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
          bgnpolygon();
          cpack(current_packed_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          endpolygon();
          shademodel(1);
          bgnpolygon();
          cpack(graphics_render_flags);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) - base_y_offset;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) - base_y_offset;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(highlight_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
        }
      }
      process_tree_node(topdir,param_1);
    }
  }
  else {
    apply_context_changes(*(int *)(curcontext + 0x3c),param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
