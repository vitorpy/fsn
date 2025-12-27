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
  /*
   * BADDATA ANALYSIS (from binary @ 0x0041a9f8):
   * Function: highlightDirWarp
   *
   * Looking at this assembly snippet:
   * **What it does:**
   * Performs a double-precision multiply-add operation on floating point values loaded via GP-relative addressing, converts result to single precision, then calls a function (at GP offset -32240, likely `c3f` or similar GL function) with the computed value and 0.245 (0x3e7ae148) as arguments. The loop at 41ac48-41ac54 iterates through an array. Ends with a call to function at GP offset -31528 (likely `popmatrix`).
   * **C pseudocode:**
   * // After halt_baddata recovery:
   * float result = (float)((double)val * (double)scale_factor + (double)offset);
   * c3f(result, $f12_value, 0.245f);  // or similar 3-arg GL call
   * // Loop continuation (v0 = i, a0 = count, v1 = ptr)
   * i++;
   * if (i < count) goto loop_start;  // back to 41ab44
   * ptr += 4;
   * popmatrix();
   * // function epilogue - restore ra, s0, return
   *
   * The GP offsets need resolution: -32240 (0x8210) and -31528 (0x84d8) should be looked up in GP_MAPPING.md to identify the actual functions being called.
   */
  return;
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
        /*
         * BADDATA ANALYSIS (from binary @ 0x0041ac80):
         * Function: highlightFileWarp
         *
         * Looking at this assembly:
         * 1. **What it does**: Compares the first argument (a0) against `curcontext[15]` (offset 60 = 0x3c). If not equal, jumps to exit. If equal, calls a function (likely `getgdesc` or similar at GP-31560), then divides the float at offset 60 of arg0 by 2.0 (0x4000000000000000 in double).
         * 2. **C pseudocode**:
         * void highlightFileWarp(DirNode *node, int param2) {
         * if (node != curcontext[15]) {  // curcontext + 0x3c
         * return;
         * }
         * some_init_func();  // GP-31560, likely getgdesc or winget
         * double scaled = (double)node->field_3c / 2.0;
         * // ... continues with warp calculation
         * }
         * The `halt_baddata` likely came from Ghidra struggling with the double-precision division setup (mtc1 to both halves of f8/f9 to construct 2.0) and the mixed single/double precision conversion sequence.
         */
        popmatrix();
    }
    /*
     * BADDATA ANALYSIS (from binary @ 0x0041ac80):
     * Function: highlightFileWarp
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Compares node dimensions against context bounds to determine highlight flags. Checks if `node->field_0x1c <= curcontext->field_0x8` and if `curcontext->field_0x0 <= (node->field_0x14 - some_global[0x70]/2.0)`. Sets flags in a3/t3 based on comparisons.
     * **C pseudocode:**
     * float f14 = f12;  // preserve input
     * int flags = a3;   // incoming flags from stack
     * // Compare node height against context upper bound
     * if (node->z_pos <= curcontext->bounds_max) {  // offset 0x1c vs offset 0x8
     * flags = 0x10;
     * }
     * // Compare against adjusted lower bound
     * float threshold = some_global_array[0x70] / 2.0f;
     * if (curcontext->bounds_min <= (node->y_pos - threshold)) {  // offset 0x0 vs offset 0x14
     * flags |= 0x2;
     * }
     * The `bc1f` at 0x41ade8 branches if the first comparison is false (skipping the `li a3,16`). This appears to be visibility/clipping logic for determining which highlight style to apply based on whether the file node is within viewable bounds.
     */
    return;
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
      /*
       * BADDATA ANALYSIS (from binary @ 0x00426ee8):
       * Function: highlightDirLandscape
       *
       * Looking at this assembly:
       * 1. What it does: Compares input node (a0) against curcontext->highlightedDir (offset 0x44).
       *    If equal, returns early. Otherwise calls pushmatrix(), then translate3d() with node's
       *    X/Y coords (offsets 0x34, 0x38) and Z=0, then calls scale() with node's scale factor
       *    (offset 0x58) and 1.0f for Y.
       * 2. C pseudocode:
       *    void highlightDirLandscape(DirNode *node) {
       *        if (node == curcontext->highlightedDir)  // offset 0x44
       *            return;
       *        pushmatrix();
       *        translate(node->x, node->y, 0.0f);  // offsets 0x34, 0x38
       *        scale(node->scale, 1.0f, ...);      // offset 0x58
       *        // ... continues with highlight drawing
       *    }
       * Key GP lookups:
       * - GP-30340 (0x897c): curcontext pointer
       * - GP-31560 (0x84b8): pushmatrix
       * - GP-31584 (0x84a0): translate (3 floats)
       * - GP-31596 (0x8494): scale
       */
      return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00426ee8):
   * Function: highlightDirLandscape
   *
   * Looking at this assembly:
   * 1. What it does: Calls a function at GP-31052 with args (a0, 1, t4), then calls endline()
   *    at GP-31528. If s0->child (offset 40) is non-null, computes spotlight position by adding
   *    child's position (offsets 52, 56) to parent's position (offsets 76, 80), and loads a
   *    global float from GP-32676 offset -17532.
   * 2. C pseudocode:
   *    some_func(a0, 1, t4);  // GP-31052 - likely cpack() or similar
   *    endline();             // GP-31528
   *    child = s0->child;     // offset 0x28 = 40
   *    if (child != NULL) {
   *        spotlight_x = child->x + s0->offset_x;  // offsets 52+76
   *        spotlight_z = child->z + s0->offset_z;  // offsets 56+80
   *        height = global_spotlight_height;       // GP-32676, -17532
   *        // continues to draw spotlight at (spotlight_x, height, spotlight_z)
   *    }
   *    The GP-31052 call is likely cpack(color, 1, t4) setting spotlight color before the
   *    geometry. The structure offsets match FSN's directory node layout where 0x28 is child
   *    pointer, 0x34/0x38 are child coords, 0x4C/0x50 are parent offsets.
   */
  return;
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
    /*
     * BADDATA ANALYSIS (from binary @ 0x00427280):
     * Function: highlightDir
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Loads curcontext, checks if curcontext[15] (offset 0x3c = 60) is non-zero. If set, calls one function (likely unhighlightDir at GP-31212), otherwise calls another function (likely highlightDirWork at GP-30992).
     * **2. C pseudocode:**
     * void highlightDir(void) {
     *     if (curcontext[15] != 0) {  // offset 0x3c = index 15 (assuming 4-byte elements)
     *         unhighlightDir();       // GP offset -31212 (0x8614)
     *     } else {
     *         highlightDirWork();     // GP offset -30992 (0x86f0)
     *     }
     * }
     * GP offset -30340 (0x897c) is curcontext pointer. The function toggles highlight state - if already highlighted (field at +60 set), unhighlight; otherwise do the highlight work.
     */
    return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00427570):
   * Function: highlightFileLandscape
   *
   * Looking at this assembly:
   * 1. **What it does:** Computes bounding box flags by comparing a value (f4 converted to double in f12) against low bound (f2-f0) and high bound (f2+f0). Sets bit 0x1 if value >= low, bit 0x8 if value <= high. Then calls two functions with the flags.
   * 2. **C pseudocode:**
   * double low = f2 - f0;
   * double high = f2 + f0;
   * double val = (double)f4;
   * int flags = s0;
   * if (val >= low) flags |= 0x1;
   * if (val <= high) flags |= 0x8;
   * func_at_gp_minus_31052(???, 1, flags);  // likely lmcolor or similar
   * func_at_gp_minus_31528();                // likely popmatrix or endpoly
   *
   * The GP offsets need resolution - check fsn_original.exploded.cleanup/GP_MAPPING.md for -31052 (0x86b4) and -31528 (0x84d8) to get actual function names. This appears to be setting visibility/culling flags for the highlight geometry.
   */
  return;
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
    /*
     * BADDATA ANALYSIS (from binary @ 0x004277f0):
     * Function: highlightFile
     *
     * [Claude timeout after 120s]
     */
    return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00429634):
   * Function: baseLocateHighlight
   *
   * Now I can provide the complete analysis:
   * ---
   * ## Assembly Analysis: baseLocateHighlight Epilogue (0x4299c4-0x429a38)
   * **What it does:**
   * After calling a function (at 0x4299c4), calls gflush() with arg=1, then checks local var at sp+40. If non-zero, calls undisplayHourglass(); otherwise calls displayHourglass(). Returns.
   * **GP offset resolution (from fsn.c context):**
   * - GP-31948 (0x8334) -> `gflush` (line 38401 shows swapbuffers+gflush pattern)
   * - GP-31092 (0x868c) -> `undisplayHourglass` (at line 54372)
   * - GP-31108 (0x867c) -> `displayHourglass` (at line 54292)
   * **C pseudocode (to replace halt_baddata):**
   * gflush();
   * if (param_1 != 0) {      // sp+40 = param_1 (the directory node)
   *   undisplayHourglass();
   * } else {
   *   displayHourglass(1);  // arg was li a0,1
   * }
   *
   * **Comment for code:**
   * // ASM 0x4299c4-429a38: gflush(); if(param_1) undisplayHourglass(); else displayHourglass(1);
   */
  return;
}

void locateHighlight(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  set_main_gl_window();
  gl_get_dimensions_wrapper(&uStack_4,&uStack_c,&uStack_8);
  configure_viewport(uStack_4,uStack_c,uStack_8);
  /*
   * BADDATA ANALYSIS (from binary @ 0x00429a3c):
   * Function: locateHighlight
   *
   * The Ghidra decompile is actually correct except for the `halt_baddata()` cut-off. Looking at the assembly:
   * **Final Answer:**
   * **1. What it does:**
   * Sets up GL context window, gets viewport dimensions (width, height, depth or x,y,z), then configures the viewport with those dimensions. Standard GL setup before locate/highlight operation.
   * **2. Corrected C code (remove halt_baddata):**
   * 
   * void locateHighlight(void)
   * {
   * int width, height, depth;  // or x, y, z coordinates
   * set_main_gl_window();
   * gl_get_dimensions_wrapper(&width, &height, &depth);
   * configure_viewport(width, height, depth);
   * }
   * 
   * The `halt_baddata()` at line 51169 is spurious - Ghidra couldn't parse the function epilogue (stack restore + return) and incorrectly flagged it. The assembly shows a clean return sequence:
   * - `lw ra,28(sp)` - restore return address
   * - `lw gp,24(sp)` - restore GP
   * - `jr ra` - return
   * - `addiu sp,sp,48` - restore stack (branch delay slot)
   */
  return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00429b00):
   * Function: locateHighlightAction
   *
   * [Claude timeout after 120s]
   */
  return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00429bbc):
   * Function: highlightByName
   *
   * Looking at the GP offsets and call pattern:
   * **1. What it does:**
   * Calls a lookup function (likely `findNodeByName`) with name parameter, getting back a node pointer and some value. If node found, calls `highlightNode(node, value, 0)`. If not found, calls `clearHighlight()`.
   * **2. C pseudocode:**
   * void highlightByName(char *name) {
   *     void *node;
   *     int value;
   *     node = findNodeByName(name, &node, &value);  // GP-0x878c
   *     if (node != NULL) {
   *         highlightNode(node, value, 0);           // GP-0x874c
   *     } else {
   *         clearHighlight();                         // GP-0x8744
   *     }
   * }
   * Note: The first call at GP-0x878c takes `name` (a0), `&node` (a1=sp+36), `&value` (a2=sp+32) as out-params. The branch checks the returned node pointer. GP offsets -30836, -30900, -30908 map to specific GOT entries for the three function calls.
   */
  return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x004294c0):
   * Function: locateClear
   *
   * Now I can see the pattern. Looking at the assembly after `halt_baddata()`:
   * **Summary:**
   * **1. What it does:**
   * After clearing colormap state, calls: update_list_state(), glx_reset_context(), color(0), clear(), draw_overview_content(). Then zeros two global flags (offsets 0x7990, 0x7994 from a base pointer) and calls hideOverview().
   * **2. C pseudocode (reconstructed):**
   * void locateClear(void)
   * {
   * if (colormap_dirty_flag != 0) {
   * update_list_state();
   * glx_reset_context_wrapper();
   * color(0);
   * clear();
   * colormap_dirty_flag = 0;
   * active_colormap_id = 0;
   * draw_overview_content();
   * }
   * // Assembly continuation after halt_baddata:
   * update_list_state();        // GP-8520
   * glx_reset_context(0);       // GP-8304, a0=0
   * some_function();            // GP-8308
   * // Zero locate highlight flags
   * locate_highlight_active = 0;      // base+0x7990
   * locate_highlight_pending = 0;     // base+0x7994
   * hideOverview();             // GP-867c
   * }
   * The two zeroed globals (offsets 0x7990/0x7994) likely control the "locate" highlight feature - clearing them disables the highlight display. The GP-867c call is probably `hideOverview()` based on the context (locate/highlight functions).
   */
  return;
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
  /*
   * BADDATA ANALYSIS (from binary @ 0x00429578):
   * Function: locateClearAction
   *
   * [Claude timeout after 120s]
   */
  return;
}
