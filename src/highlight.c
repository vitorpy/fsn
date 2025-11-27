/**
 * highlight.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "highlight.h"
#include "window.h"
#include "block_render.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void highlightSpecialDir(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  translate((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
            (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  rotate((int)-*(short *)(curcontext + 0xe),0x78);
  translate(0,translate_y_offset);
  fVar1 = (float)((double)-rotation_factor_y / (double)((ulonglong)in_register_00001080 << 0x20));
  rect(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  uint in_register_00001090;
  undefined8 uVar7;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != *(int *)(curcontext + 0x3c)) {
    pushmatrix();
    iVar4 = *(int *)(curcontext + 0x3c);
    if (param_3 == *(int *)(iVar4 + 0x28)) {
      draw_positioned_item((ulonglong)uVar5 << 0x20,(double)*(float *)(iVar4 + 0x3c) + (double)layout_base_height)
      ;
    }
    else if (param_3 == *(int *)(iVar4 + 0x2c)) {
      draw_positioned_item((double)-item_spacing_x,(double)*(float *)(iVar4 + 0x3c) + (double)layout_base_height);
    }
    else if (param_3 == *(int *)(iVar4 + 0x30)) {
      draw_positioned_item((double)item_spacing_x,(double)*(float *)(iVar4 + 0x3c) + (double)layout_base_height);
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = *(int **)(iVar4 + 0x18);
        do {
          if (param_3 == *piVar2) {
            uVar7 = CONCAT44(uVar5,(float)((double)-icon_spacing_factor *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) +
                                          (double)icon_spacing_factor * (double)iVar1));
            translate(uVar7,iVar3,iVar4,0);
            uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
            rotate(0xfffffc7c,0x7a);
            translate(CONCAT44(uVar6,0x3f333333),CONCAT44(uVar8,0xbde66666));
            rect(0xbca3d70a,0xbca3d70a);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightFileWarp(int param_1,int param_2)

{
  uint in_register_00001040;
  
  if (param_1 == *(int *)(curcontext + 0x3c)) {
    pushmatrix();
    translate(0,(float)((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)in_register_00001040 << 0x20)));
    draw_entry(param_2);
    translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((curcontext[0xc50] == '\0') || (overlay_mode_flag == '\0')) {
      scale(view_offset_x,view_offset_x);
    }
    else {
      scale(view_offset_x,view_offset_x);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightOverviewDir(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (overviewActive != '\0') {
    begin_overview_render();
    color(0);
    clear();
    color(overlayHighlightColor);
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    rectf((float)((double)*(float *)(param_1 + 0x34) - dVar3 * (double)*(float *)(param_1 + 0x58)),
          (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      fStack_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      fStack_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      uStack_14 = *(undefined4 *)(param_1 + 0x34);
      fStack_10 = (float)((double)*(float *)(param_1 + 0x38) +
                         (double)-*(float *)(param_1 + 0x3c) /
                         (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000))
      ;
      bgnline();
      v2f((float *)&fStack_c);
      v2f((float *)&uStack_14);
      endline();
    }
    pushmatrix();
    ortho2(-1.0f, 1.0f, -1.0f, 1.0f);
    cmov2(0xbf733333,0xbf666666);
    build_path_string((char *)0,(undefined4 *)param_1);
    charstr((char *)uVar1);
    popmatrix();
    end_rendering();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightDirLandscape(int param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1 != *(int *)(curcontext + 0x44)) {
    pushmatrix();
    translate(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    scale(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      scale(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    fVar3 = (float)((double)-*(float *)(param_1 + 0x3c) /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    rect(fVar3,fVar3);
    popmatrix();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      fStack_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      uStack_10 = 0xbd4ccccd;
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      fStack_8 = (float)dVar2;
      uStack_18 = *(undefined4 *)(param_1 + 0x34);
      fStack_14 = (float)((double)*(float *)(param_1 + 0x38) -
                         (double)*(float *)(param_1 + 0x3c) /
                         (double)((ulonglong)dVar2 & 0xffffffff00000000));
      uStack_4 = uStack_10;
      bgnline();
      v3f((float *)&fStack_c);
      v3f((float *)&uStack_18);
      endline();
      color(0);
      pushmatrix();
      translate(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38));
      scale(*(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x58));
      draw_legend_color_box(0,0,0x1f);
      popmatrix();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightDir(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_tree_bounds();
  }
  else {
    draw_item_recursive();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightFileLandscape(int param_1,int param_2)

{
  pushmatrix();
  translate(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  scale(*(undefined4 *)(param_1 + 0x58));
  draw_entry(param_2);
  translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
  if (((curcontext[0xc50] == '\0') || (overlay_mode_flag == '\0')) ||
     (param_1 != *(int *)(curcontext + 0x44))) {
    scale(view_offset_x,view_offset_x);
  }
  else {
    scale(view_offset_x,view_offset_x);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightFile(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_view_recursive();
  }
  else {
    refresh_context_view();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
  if (((int)param_2 != active_colormap_id) || (param_1 != colormap_dirty_flag)) {
    colormap_dirty_flag = param_1;
    active_colormap_id = (int)param_2;
    glx_reset_context_wrapper();
    color(0);
    clear();
    color(overlayHighlightColor);
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
      recalc_layout(param_1,(int)param_2);
    }
    popmatrix();
    linewidth(1);
    if (param_1 == 0) {
      update_list_state();
    }
    else {
      build_path_string((char *)0, NULL);
      __dest = (char *)0;
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          set_status_text((int)__dest);
        }
      }
      else {
        strcat(__dest,(char *)*param_2);
        set_status_text((int)__dest);
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

void locateHighlight(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  set_main_gl_window();
  gl_get_dimensions_wrapper(&uStack_4,&uStack_c,&uStack_8);
  configure_viewport(uStack_4,uStack_c,uStack_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void overviewLocateHighlight(void)

{
  undefined4 uVar1;
  
  glx_switch_context_wrapper();
  uVar1 = get_current_time();
  configure_viewport(uVar1,0,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void locateHighlightAction(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    reset_list_state();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightByName(undefined4 param_1)

{
  undefined4 uStack_8;
  int iStack_4;
  
  get_position_coords(param_1,&iStack_4,&uStack_8);
  if (iStack_4 == 0) {
    refresh_list_display();
  }
  else {
    configure_viewport(iStack_4,uStack_8,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void locateClear(void)

{
  if (colormap_dirty_flag != 0) {
    update_list_state();
    glx_reset_context_wrapper();
    color(0);
    clear();
    colormap_dirty_flag = 0;
    active_colormap_id = 0;
    draw_overview_content();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void locateClearAction(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    refresh_list_display();
    gl_pop_state();
    gflush();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
