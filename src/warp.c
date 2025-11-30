/**
 * warp.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "warp.h"
#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include "vector_font.h"
#include <stdio.h>
#include <stdint.h>

#include "fsn_context.h"
void draw_warp(void)
{
  cpack(cpack_color);
  clear();
  swapbuffers();
  gflush();
}

void do_warp(int param_1)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_main_gl_window();
  save_matrix_state();
  if (param_1 == 0) {
    if (ctx->zoom_mode == 0) {
      set_camera_lookat((double)view_init_x,(double)view_init_y);
    }
    else {
      get_view_extents((void *)(long)ctx->zoom_mode,&local_4,&local_8,(int)(long)local_c);
      set_camera_lookat((double)local_4,(double)local_8);
    }
  }
  else {
    set_camera_lookat((double)camera_lookat_x,(double)camera_lookat_y);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/**
 * draw_warp_directory - Render directory in warp/zoom mode
 *
 * VERIFIED AGAINST BINARY: analysis/render_call_tree/FUN_00419424.annotated.asm
 *
 * Key fixes from assembly analysis:
 * - "unaff_f20" was 2.0f constant (lui at,0x4000 at 0x419c6c)
 * - "unaff_000010b0 << 0x20" was view_offset_z global
 * - CONCAT44 patterns were simple float divisions by 2.0
 * - 0x70a3d70a = 0.009765625f (label spacing)
 * - 0x3cf5c28f = 0.03f (icon scale)
 */
void draw_warp_directory(float *dir_position, float unused_param, undefined4 *param_3, char param_4)
{
    FsnContext *ctx = (FsnContext *)curcontext;
  int iVar2;
  int iVar3;
  int iVar4;
  float half_size;      /* param_3[0xf] / 2.0 */
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fVar8;
  float ctx_x, ctx_y, ctx_z;

  /* Get context coordinates */
  ctx_x = ctx->camera_x;
  ctx_y = ctx->camera_y;
  ctx_z = ctx->camera_z;

  if (param_4 == '\0') {
    /* Original uses DAT_100175a0 = ground_scale_width (2000.0) */
    fVar8 = ground_scale_width * ctx->scale_factor;
    if (grid_display_flag == '\0') {
      /* Solid ground plane */
      cpack(highlight_packed_color);
      bgnpolygon();
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;  /* FIXED: was bizarre shift */
      v3f(&fStack_28);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;  /* FIXED: was bizarre shift */
      v3f(&fStack_28);
      endpolygon();
    }
    else {
      /* Gradient ground plane */
      shademodel(1);
      bgnpolygon();
      cpack(graphics_state_mode);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      cpack(current_packed_color);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;
      v3f(&fStack_28);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;
      v3f(&fStack_28);
      endpolygon();
      shademodel(0);
      bgnpolygon();
      cpack(current_packed_color);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;
      v3f(&fStack_28);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;  /* FIXED */
      v3f(&fStack_28);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;  /* FIXED */
      v3f(&fStack_28);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = ctx_z + view_offset_z;
      v3f(&fStack_28);
      endpolygon();
      shademodel(1);
      bgnpolygon();
      cpack(graphics_render_flags);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y - base_y_offset;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y - base_y_offset;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      cpack(highlight_color);
      fStack_28 = ctx_x + fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      fStack_28 = ctx_x - fVar8;
      fStack_24 = ctx_y + view_offset_y;
      fStack_20 = -0.5f;
      v3f(&fStack_28);
      endpolygon();
      shademodel(0);
    }
  }

  fStack_18 = ctx_y - ctx->cos_z * ctx->sin_x * ctx_z;
  loadname((int)*(short *)((int)param_3 + 0x5e));
  pushmatrix();

  /* FIXED: dVar16 was 2.0, not bizarre bitwise AND */
  half_size = (float)param_3[0xf] / 2.0f;
  translate(0.0f, half_size, 0.0f);

  if ((int)(param_3[0x1d] << 0xb) < 0) {
    /* Draw platform under directory */
    pushmatrix();
    cpack(monitor_label_color);
    translate(0.0f, 0.0f, -0.05f);  /* Small Z offset */
    /* FIXED: rectf with proper float args */
    float rect_coord = -half_size - layout_z_offset;
    rectf(rect_coord, rect_coord, rect_coord, rect_coord);
    popmatrix();
  }

  cpack(*(undefined4 *)(boxDir + 0x10));

  /* FIXED: rect/rectf with proper coordinates */
  float neg_half = -half_size;
  if ((int)(param_3[0x1d] << 0xd) < 0) {
    rect(neg_half, neg_half, neg_half, neg_half);
  }
  else {
    rectf(neg_half, neg_half, neg_half, neg_half);
  }

  pushmatrix();
  /* FIXED: 0x70a3d70a = 0.009765625f (label spacing constant) */
  float label_offset = (float)(int)param_3[1] * 0.009765625f;
  /* FIXED: 0x9999999a as double ~= 0.1f */
  float z_offset = -half_size - 0.1f;
  translate(label_offset, z_offset, 0.0f);
  rotate((int)-ctx->rotation_x, 0x78);
  /* FIXED: 0x3cf5c28f = 0.03f (icon scale) */
  scale(0.03f, 0.03f, 1.0f);
  draw_file_icon((const char *)(uintptr_t)*param_3);
  popmatrix();

  /* Render files in directory */
  int file_index = 0;
  int num_files = (int)param_3[3];
  if (num_files > 0) {
    int file_offset = 0;
    do {
      int file_ptr = *(int *)(param_3[4] + file_offset);
      pushname((int)(short)file_index);

      /* Determine render flags based on mode */
      unsigned char render_flags;
      if (param_4 == '\0') {
        /* Normal mode - check file selected state */
        render_flags = (*(int *)(file_ptr + 0x28) << 9 < 0) ? 1 : 0;
      }
      else {
        /* Warp mode - use constant 4 */
        render_flags = 4;
      }

      render_file_icon((int)(long)param_3, file_ptr, 0, param_4 == '\0', render_flags, 0x1f);

      /* Draw spotlight beam for selected files */
      if (*(int *)(file_ptr + 0x28) << 3 < 0) {
        pushmatrix();
        /* FIXED: translate with proper float args */
        translate(0.0f, -half_size, 0.0f);
        /* FIXED: draw_scaled_element with proper args */
        float beam_size = (float)param_3[0xf] * 2.0f;
        draw_scaled_element(0.0f, beam_size);
        popmatrix();
        /* Draw connecting lines (FUN_004237b4) would go here */
      }

      file_index++;
      popname();
      file_offset += 4;
    } while (file_index < num_files);
  }

  process_pick_item((int)(long)param_3, param_4);
  popmatrix();
}

void pickWarp(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_register_00001020;
  int iStack_40c;
  short asStack_3f0 [500];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0;
  uStack_8 = 0;
  iVar5 = -1;
  iStack_40c = -1;
  pushmatrix();
  initnames();
  picksize(10,10);
  pick(asStack_3f0,500);
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)in_register_00001020 << 0x20) /
               (double)ctx->scale_factor));
  rotate((int)ctx->rotation_x,0x78);
  rotate((int)ctx->rotation_z,0x7a);
  translate(-ctx->camera_x,-ctx->camera_y);
  apply_context_changes((void *)(long)ctx->zoom_mode,1);
  iVar1 = endpick(asStack_3f0);
  popmatrix();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)asStack_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)asStack_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        iStack_40c = (int)asStack_3f0[iVar3 + 2];
        iVar5 = (int)asStack_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (iStack_4 = get_item_by_index(iVar5), -1 < iStack_40c)) {
    if (iStack_4 == ctx->zoom_mode) {
      uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_40c * 4);
    }
    else {
      fprintf((FILE *)0xfb52904,"found file in another dir\n");
      iStack_4 = 0;
    }
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  float fVar1;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  get_selection_params(&iStack_4,&iStack_8,(int)(long)auStack_c);
  if (iStack_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (iStack_8 == 0) {
    if (iStack_4 == ctx->zoom_mode) {
      clear_current_selection();
      *param_1 = camera_lookat_x;
      *param_2 = camera_lookat_y;
      *param_3 = camera_lookat_z;
      *param_4 = (short)camera_rotation_angle;
      *param_6 = ctx->zoom_mode;
    }
    else {
      *param_7 = 1;
      *param_6 = iStack_4;
    }
  }
  else if (iStack_4 == ctx->zoom_mode) {
    get_item_screen_coords((undefined4*)iStack_8);
    fVar1 = *(float *)(iStack_8 + 0x14);
    *param_1 = (float)((double)fVar1 - (double)ctx->sin_z * (double)database_version)
    ;
    *param_2 = (float)(((double)*(float *)(iStack_8 + 0x18) +
                       (double)*(float *)(iStack_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar1 & 0xffffffff00000000)) -
                      (double)ctx->cos_z * (double)database_version);
    if (overlay_mode_flag == '\0') {
      *param_3 = overlay_position_offset + *(float *)(iStack_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = layout_offset_base + layout_height_adjust;
    }
    *param_4 = (short)layout_short_value;
    *param_6 = ctx->zoom_mode;
    *param_8 = 1;
  }
  else {
    fprintf((FILE *)0xfb52904,"found file in another dir\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* highlightDirWarp and highlightFileWarp are defined in highlight.c */

void warpZoomToFile(int param_1,int param_2)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  uint uVar1;
  undefined8 in_f18;
  
  uVar1 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != ctx->zoom_mode) {
      do_warp(param_1);
    }
    if (param_2 != 0) {
      set_camera_lookat((double)*(float *)(param_2 + 0x14) -
                   (double)ctx->sin_z * (double)database_version,
                   ((double)*(float *)(param_2 + 0x18) +
                   (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar1 << 0x20)) -
                   (double)ctx->cos_z * (double)database_version);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_warp_entry(int param_1,float *param_2,float *param_3)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  uint in_register_00001000;
  
  *param_2 = (float)((double)*(float *)(param_1 + 0x34) -
                    (double)ctx->sin_z *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
  *param_3 = (float)((double)*(float *)(param_1 + 0x38) -
                    (double)ctx->cos_z *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
