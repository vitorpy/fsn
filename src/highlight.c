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
#include "overview.h"

#include "fsn_context.h"
void highlightSpecialDir(float param_1, float param_2, undefined4 param_3, undefined4 param_4)
{
    FsnContext *ctx = (FsnContext *)curcontext;
  float fVar1;

  /*
   * FIXED: Ghidra CONCAT44 artifacts were confused function argument passing.
   * Assembly shows params passed via $f12-$f15 (MIPS float convention).
   * See analysis/FUN_0041a8fc.annotated.asm
   */
  translate(param_1, param_2, 0);
  rotate((int)-ctx->rotation_x, 'x');
  translate(0, translate_y_offset);

  /*
   * FIXED: (ulonglong)in_register << 0x20 is Ghidra artifact for constant 2.0
   * Assembly at 0x41a99c-0x41a9bc: lui at,0x4000; mtc1 at,$f17; mtc1 zero,$f16
   * This constructs double 2.0 (0x4000000000000000), then div.d by it.
   */
  fVar1 = (float)(-rotation_factor_y / 2.0);
  rect(fVar1, fVar1);
}

void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3)

{
    FsnContext *ctx = (FsnContext *)curcontext;
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
  if (param_3 != ctx->zoom_mode) {
    pushmatrix();
    iVar4 = ctx->zoom_mode;
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
            /*
             * FIXED: CONCAT44 patterns decoded from assembly FUN_0041a9f8.annotated.asm
             *
             * Line 41ab58-64: lui at,0x3fe0; mtc1 zero,$f18 constructs double 0.5
             * Formula: -icon_spacing_factor * 0.5 * (count-1) + icon_spacing_factor * index
             * This centers the items around 0.
             */
            float centered_x = (float)(-icon_spacing_factor * 0.5 * (double)(iVar3 - 1) +
                                       icon_spacing_factor * (double)iVar1);
            translate(centered_x, 0, 0);
            rotate(-900, 'z');  /* 0xfffffc7c = -900, 0x7a = 'z' */
            /*
             * FIXED: translate constants loaded from data section at offsets -20644, -20640
             * 0x3f333333 = 0.7f, 0xbde66666 = -0.1125f
             */
            translate(0.7f, -0.1125f, 0);
            /* 0xbca3d70a = -0.02f */
            rect(-0.02f, -0.02f);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    popmatrix();
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

void highlightFileWarp(int param_1, int param_2)
{
    FsnContext *ctx = (FsnContext *)curcontext;
  if (param_1 == ctx->zoom_mode) {
    pushmatrix();
    /*
     * FIXED: (ulonglong)in_register << 0x20 is Ghidra artifact for constant 2.0
     * Same pattern as highlightSpecialDir - division by 2.0
     */
    translate(0, (float)(*(float *)(param_1 + 0x3c) / 2.0f));
    draw_entry(param_2);
    translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((curcontext[0xc50] == '\0') || (overlay_mode_flag == '\0')) {
      scale(view_offset_x,view_offset_x);
    }
    else {
      scale(view_offset_x,view_offset_x);
    }
    /* halt_baddata was inner block artifact */
    popmatrix();
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

/* highlightOverviewDir - now implemented in overview.c with DirectoryNode* parameter */

void highlightDirLandscape(int param_1)
{
  int iVar1;
  double dVar2;
  float fVar3;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;

  if (param_1 != *(int *)(curcontext + 0x44)) {
    pushmatrix();
    translate(*(undefined4 *)(param_1 + 0x34), *(undefined4 *)(param_1 + 0x38));
    scale(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      scale(*(undefined4 *)(param_1 + 0x3c), *(undefined4 *)(param_1 + 0x3c));
      /* halt_baddata was early return in conditional */
    }
    /*
     * FIXED: (ulonglong)in_register << 0x20 is Ghidra artifact for constant 2.0
     * Same pattern as other highlight functions.
     */
    fVar3 = (float)(-*(float *)(param_1 + 0x3c) / 2.0);
    rect(fVar3, fVar3);
    popmatrix();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      fStack_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      uStack_10 = 0xbd4ccccd;
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      fStack_8 = (float)dVar2;
      uStack_18 = *(undefined4 *)(param_1 + 0x34);
      /*
       * FIXED: (ulonglong)dVar2 & 0xffffffff00000000 is Ghidra artifact for constant 2.0
       * Assembly shows register reuse with mtc1 constructing 2.0 constant.
       */
      fStack_14 = (float)((double)*(float *)(param_1 + 0x38) -
                         (double)*(float *)(param_1 + 0x3c) / 2.0);
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
  /* halt_baddata was Ghidra epilogue artifact */
}

void highlightDir(void)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  if (ctx->zoom_mode == 0) {
    update_tree_bounds();
  }
  else {
    draw_item_recursive();
  }
  /* halt_baddata was Ghidra epilogue artifact */
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
  /* halt_baddata was Ghidra epilogue artifact */
}

void highlightFile(void)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  if (ctx->zoom_mode == 0) {
    update_view_recursive();
  }
  else {
    refresh_context_view();
  }
  /* halt_baddata was Ghidra epilogue artifact */
}

void baseLocateHighlight(int param_1,undefined4 *param_2,int param_3)

{
    FsnContext *ctx = (FsnContext *)curcontext;
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
    scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)ctx->scale_factor));
    rotate((int)ctx->rotation_x,0x78);
    rotate((int)ctx->rotation_z,0x7a);
    if (ctx->zoom_mode == 0) {
      fVar1 = powf(zoom_base_factor,
                   (ctx->camera_y -
                   ctx->cos_z * ctx->sin_x *
                   ctx->camera_z) / zoom_reference_height);
      scale(fVar1);
    }
    translate(-ctx->camera_x,-ctx->camera_y);
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
  /* halt_baddata was Ghidra epilogue artifact */
}

void locateHighlight(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  set_main_gl_window();
  gl_get_dimensions_wrapper(&uStack_4,&uStack_c,&uStack_8);
  configure_viewport(uStack_4,uStack_c,uStack_8);
  /* halt_baddata was Ghidra epilogue artifact */
}

/* overviewLocateHighlight - now implemented in overview.c */

void locateHighlightAction(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 0) {
    gl_push_state();
    set_gl_context(param_1,1);
    reset_list_state();
    gl_pop_state();
    gflush();
  }
  /* halt_baddata was Ghidra epilogue artifact */
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
  /* halt_baddata was Ghidra epilogue artifact */
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
  /* halt_baddata was Ghidra epilogue artifact */
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
  /* halt_baddata was Ghidra epilogue artifact */
}
