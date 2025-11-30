/**
 * baseLocateHighlight
 *
 * Extracted from fsn.c lines 51002-51070
 * Category: Graphics
 */

void baseLocateHighlight(int param_1,undefined4 *param_2,int param_3)

{
  char *__dest;
  float fVar1;
  uint uVar2;
  undefined8 in_f4;
  
  uVar2 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  if ((param_2 != active_colormap_id) || (param_1 != colormap_dirty_flag)) {
    colormap_dirty_flag = param_1;
    active_colormap_id = param_2;
    glx_reset_context_wrapper();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    linewidth((int)default_line_width);
    zbuffer(0);
    pushmatrix();
    scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)*(float *)(curcontext + 0x34)));
    rotate((int)*(short *)(curcontext + 0xe),0x78);
    rotate((int)*(short *)(curcontext + 0xc),0x7a);
    if (*(int *)(curcontext + 0x3c) == 0) {
      fVar1 = powf(zoom_base_factor,
                   (*(float *)(curcontext + 4) -
                   *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                   *(float *)(curcontext + 8)) / zoom_reference_height);
      scale(fVar1);
    }
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        refresh_view_recursive(param_1);
      }
    }
    else {
      recalc_layout(param_1,param_2);
    }
    popmatrix();
    linewidth(1);
    if (param_1 == 0) {
      update_list_state();
    }
    else {
      __dest = (char *)build_path_string(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          set_status_text(__dest);
        }
      }
      else {
        strcat(__dest,(char *)*param_2);
        set_status_text(__dest);
      }
    }
    zbuffer(1);
    if (param_1 == 0) {
      draw_overview_content();
    }
    else {
      destroy_gl_resources();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
