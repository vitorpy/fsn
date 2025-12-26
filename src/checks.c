/**
 * checks.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 *
 * Visibility culling functions extracted from:
 * - fsn_original.exploded.v2/check_visibility.c (lines 50431-50440)
 * - fsn_original.exploded.v2/draw_visibility.c (lines 63251-63300)
 * - fsn_original.exploded.v2/FUN_00425bd8.c (lines 63224-63245) - markAllVisible
 * - fsn_original.exploded.v2/FUN_004259dc.c (lines 63178-63192) - traverse for visibility
 * - fsn_original.exploded.v2/FUN_0040bfa0.c (lines 50164-50174) - perspective setup
 */

#include "checks.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include "fsn_context.h"
#include <math.h>

/* Forward declarations for visibility functions */
static void FUN_0040bfa0(void);
static void FUN_00425c80(void);
static void FUN_00425bd8(int param_1);
static void FUN_004259dc(int param_1);

/* External function from item_lookup.c */
extern int get_item_by_index(int name_index);

/**
 * check_visibility - Main visibility culling entry point
 *
 * ORIGINAL: fsn.c lines 50431-50440
 * Sets up matrix, calls perspective setup, then runs visibility test.
 */
void check_visibility(void)

{
  pushmatrix();
  FUN_0040bfa0();
  FUN_00425c80();
  popmatrix();
  return;
}

void check_gl_ready(void)

{
  /* TODO: Extract from original - GL context readiness check */
  return;
}

void check_unmonitor_dp(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)((char *)param_1 + 0x74);
  *(undefined4 *)((char *)param_1 + 100) = 0;
  if ((((iVar1 << 3 < 0) && (iVar1 << 10 < 0)) && (-1 < iVar1 << 0xb)) &&
     (param_1 != *(int *)(curcontext + 0x44))) {
    iVar2 = 0;
    if (((char *)altcontext)[0xc51] != '\0') {
      iVar2 = *(int *)((char *)altcontext + 0x44);
    }
    if ((iVar2 != param_1) && (-1 < iVar1 << 0xe)) {
      flush_rendering(param_1);
    }
  }
  return;
}

/*=============================================================================
 * Visibility Culling Helper Functions
 *
 * These functions implement the original FSN visibility culling system.
 * They use gselect() to test which directory nodes are visible in the
 * current view frustum, and update render_flags bits 6-7 accordingly.
 *============================================================================*/

/**
 * FUN_0040bfa0 - Perspective setup for visibility testing
 *
 * ORIGINAL: fsn.c lines 50164-50174
 * Sets up perspective/clipping parameters for gselect().
 * Uses curcontext offset 0x10 (field of view) and float constants.
 */
static void FUN_0040bfa0(void)
{
  FsnContext *ctx = (FsnContext *)curcontext;

  /* Original calls a function with FOV and three floats:
   * 1.0f (0x3f800000), 0.05f (0x3d4ccccd), 500.0f (0x43fa0000)
   * This is likely perspective(fov, aspect, near, far) setup.
   * For now, use gl_picking_setup_wrapper which sets up pick matrix.
   */
  gl_picking_setup_wrapper();
  return;
}

/**
 * FUN_004259dc - Test single node visibility and traverse children
 *
 * ORIGINAL: fsn.c lines 63178-63192
 * Checks if bit 28 of render_flags is set (should test visibility).
 * If so, updates visibility bits 6-7 based on curcontextflag.
 * Then traverses children if visible.
 */
static void FUN_004259dc(int param_1)
{
  int child_count;
  int i;
  int child_offset;
  int *child_array;

  /* Check bit 28 (0x10000000) - visibility test flag */
  if ((int)(*(uint *)((char *)param_1 + 0x74) << 3) < 0) {
    /* Update visibility bits 6-7 based on curcontextflag
     * Original: clears bits 6-7, then sets from (bits30-31 & ~curcontextflag) << 6
     */
    *(byte *)((char *)param_1 + 0x74) =
         (byte)((*(uint *)((char *)param_1 + 0x74) >> 0x1e & ~(uint)curcontextflag) << 6) |
         *(byte *)((char *)param_1 + 0x74) & 0x3f;

    /* Traverse children - count at offset 0x14, array at offset 0x18 */
    child_count = *(int *)((char *)param_1 + 0x14);
    if (child_count > 0) {
      child_array = *(int **)((char *)param_1 + 0x18);
      child_offset = 0;
      for (i = 0; i < child_count; i++) {
        FUN_004259dc(*(int *)((char *)child_array + child_offset));
        child_offset += 4;
      }
    }
  }
  return;
}

/**
 * FUN_00425bd8 - Mark all nodes visible (recursive)
 *
 * ORIGINAL: fsn.c lines 63224-63245
 * Called when gselect() returns overflow (negative).
 * Recursively marks all nodes as visible by setting bits 6-7.
 */
static void FUN_00425bd8(int param_1)
{
  int iVar1;
  int iVar2;

  /* Update visibility bits 6-7: (bits30-31 | curcontextflag) << 6 */
  *(byte *)((char *)param_1 + 0x74) =
       (byte)((*(uint *)((char *)param_1 + 0x74) >> 0x1e | (uint)curcontextflag) << 6) |
       *(byte *)((char *)param_1 + 0x74) & 0x3f;

  /* Recurse on children - count at offset 0x14, array at offset 0x18 */
  iVar1 = 0;
  if (0 < *(int *)((char *)param_1 + 0x14)) {
    iVar2 = 0;
    do {
      FUN_00425bd8(*(int *)(*(int *)((char *)param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)((char *)param_1 + 0x14));
  }
  return;
}

/**
 * FUN_00425c80 - Main visibility testing (draw_visibility)
 *
 * ORIGINAL: fsn.c lines 63306-63365
 * Uses gselect() to test which nodes are visible in the view frustum.
 * Updates render_flags bits 6-7 for each visible node.
 * If gselect overflows (returns negative), marks all visible via FUN_00425bd8.
 */
static void FUN_00425c80(void)
{
  FsnContext *ctx = (FsnContext *)curcontext;
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar6;
  int iVar7;
  float fVar10;
  short local_1000[2048];

  if (topdir != NULL && *topdir != 0) {
    initnames();
    gselect(local_1000, 0x800);

    /* Set up view transformation */
    scale(1.0f / ctx->scale_factor);
    rotate((int)ctx->rotation_x, 0x78);  /* 'x' rotation */
    rotate((int)ctx->rotation_z, 0x7a);  /* 'z' rotation */

    /* Calculate zoom factor */
    fVar10 = powf(zoom_base_factor,
                  (ctx->camera_y -
                   ctx->cos_z * ctx->sin_x * ctx->camera_z) / zoom_reference_height);
    scale(fVar10);
    translate(-ctx->camera_x, -ctx->camera_y);

    /* Traverse tree for visibility testing */
    FUN_004259dc((int)(intptr_t)topdir);

    /* Get selection results */
    iVar1 = endselect(local_1000);

    /* If overflow (negative), mark all visible */
    if (iVar1 < 0) {
      FUN_00425bd8((int)(intptr_t)topdir);
    }

    /* Process selection hits */
    iVar4 = 0;
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        iVar6 = (int)local_1000[iVar4];
        if (iVar6 == 1) {
          iVar2 = get_item_by_index((int)local_1000[iVar4 + 1]);
          if (iVar2 != 0) {
            /* Update visibility bits: (bits30-31 | curcontextflag) << 6 */
            *(byte *)((char *)iVar2 + 0x74) =
                 (byte)((*(uint *)((char *)iVar2 + 0x74) >> 0x1e | (uint)curcontextflag) << 6) |
                 *(byte *)((char *)iVar2 + 0x74) & 0x3f;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1 + iVar6;
      } while (iVar7 != iVar1);
    }
  }
  return;
}
