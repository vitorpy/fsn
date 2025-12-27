/**
 * persistence.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "persistence.h"
#include <stdint.h>
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

#include "fsn_context.h"
void savecontext(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a7c4):
     * Function: savecontext
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads curcontext pointer (from GP-relative global), dereferences it to get the context value, then stores that value into another global (savecontextsave at offset 0x6e00 from base).
     * 2. **C pseudocode:**
     * void savecontext(void) {
     * savecontextsave = *curcontext;  // or: savecontextsave = curcontext[0];
     * }
     * The GP offsets resolve to:
     * - GP-30324 (0x898c) → curcontext pointer
     * - GP-32660 (0x806c) + 0x6e00 → savecontextsave global
     * This saves the current context's first word (likely a pointer or ID) to a backup global for later restoration.
     */
  return;
}

void restorecontext(void)

{
  set_context_state(saved_context_state,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a7e4):
     * Function: restorecontext
     *
     * Now I can provide the final refined answer:
     * ---
     * **Resolved C pseudocode for restorecontext:**
     * 
     * void restorecontext(void) {
     * // curcontext is at GP-32660 (0x100079a0)
     * // Offset 0x6e00 (28160) into context = glWidget field
     * // GLXwinset is at GP-30872
     * Widget glWidget = ((Widget *)curcontext)[0x6e00 / sizeof(void*)];
     * GLXwinset(glWidget, 1);  // Make GL context current
     * }
     * 
     * **Summary for code comment:**
     * Restores OpenGL context by calling GLXwinset(curcontext->glWidget, 1) - makes the GL drawing widget current for rendering. The offset 0x6e00 (28160 bytes) indexes into the context structure to get the GLX drawing widget.
     */
  return;
}

void savePosition(undefined2 *param_1)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  *param_1 = ctx->rotation_z;
  param_1[1] = ctx->rotation_x;
  *(undefined4 *)(param_1 + 4) = ctx->camera_x;
  *(undefined4 *)(param_1 + 6) = ctx->camera_y;
  *(undefined4 *)(param_1 + 8) = ctx->camera_z;
  *(undefined4 *)(param_1 + 2) = ctx->zoom_mode;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(curcontext + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(curcontext + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (*(int *)(curcontext + 0x44) != 0) {
    if (ctx->zoom_mode == 0) {
      *(float *)(param_1 + 0xc) =
           ctx->camera_x - *(float *)(*(int *)(curcontext + 0x44) + 0x34);
      *(float *)(param_1 + 0xe) =
           ctx->camera_y - *(float *)(*(int *)(curcontext + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           ctx->camera_z - *(float *)(*(int *)(curcontext + 0x44) + 0x24);
      if (*(int *)(curcontext + 0x48) != 0) {
        *(float *)(param_1 + 0x14) =
             ctx->camera_x -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x34) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x14) *
             *(float *)(*(int *)(curcontext + 0x44) + 0x58));
        *(float *)(param_1 + 0x16) =
             ctx->camera_y -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x38) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x18));
        *(float *)(param_1 + 0x18) =
             ctx->camera_z -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x24) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x1c));
      }
    }
    else if (*(int *)(curcontext + 0x48) != 0) {
      *(float *)(param_1 + 0x14) =
           ctx->camera_x - *(float *)(*(int *)(curcontext + 0x48) + 0x14);
      *(float *)(param_1 + 0x16) =
           ctx->camera_y - *(float *)(*(int *)(curcontext + 0x48) + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here
     * BADDATA ANALYSIS (from binary @ 0x0042dc58):
     * Function: savePosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads curcontext via GP, reads two 16-bit shorts from offsets 12 and 14, and three floats from offsets 0, 4, 8 of the context structure. Stores them into the output struct at a0.
     * 2. **C pseudocode:**
     * void savePosition(SavedPosition *out) {
     *     // GP offset -30340 (0x897c) = curcontext
     *     Context *ctx = *curcontext;
     *     out->col = ctx->col;           // offset 12, short
     *     out->row = ctx->row;           // offset 14, short
     *     out->x = ctx->x;               // offset 0, float
     *     out->y = ctx->y;               // offset 4, float
     *     out->z = ctx->z;               // offset 8, float
     * }
     * Output struct layout: {short col, short row, padding?, float x, float y, float z} at offsets 0, 2, 8, 12, 16.
     */
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here
     * BADDATA ANALYSIS (from binary @ 0x0042dc58):
     * Function: savePosition
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a byte from offset 3152 of t9 (likely GP-relative global) into offset 52 of the destination struct. Then accesses a linked structure chain: loads pointer at offset 68, checks if non-null, loads pointer at offset 60, then offset 72. Performs float subtraction: dest->offset40 = src->x - src->child->x_offset (float at offset 0 minus float at offset 20 of child).
     * 2. **C pseudocode**:
     * dest->flags = some_global_byte;  // offset 52, from GP+3152
     * struct_ptr = *param3;            // deref a2
     * if (struct_ptr->field_44 == NULL) goto end;  // offset 68
     * if (struct_ptr->field_3c == NULL) goto next_block;  // offset 60
     * child = struct_ptr->field_48;    // offset 72
     * if (child == NULL) goto end;
     * dest->rel_x = struct_ptr->x - child->x_offset;  // offset 40 = offset 0 - child offset 20
     * // continues loading more floats...
     * The pattern suggests saving relative position of an object versus its parent/child in the scene graph. Offsets 0,4,8 are likely x,y,z coords; offsets 20,24,28 in child are reference offsets.
     */
  return;
}

void savePositions(void)
{
  get_view_position(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    get_view_position(&fam_request_id);
    gl_swap_buffers(1);
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x0042defc):
   * Function: savePositions
   *
   * Looking at this assembly:
   * **What it does:**
   * Checks if byte at offset 0xC51 (3153) of a structure pointer is non-zero. If set, calls a function twice with arg=1, and between those calls, calls another function with a string pointer (rodata + 0x6e88).
   * **C pseudocode:**
   * // At end of savePositions, after halt_baddata marker:
   * if (some_struct->flags_c51 != 0) {
   * set_cursor(1);                    // gp[-30868] - likely hourglass/busy cursor
   * show_message(rodata + 0x6e88);    // gp[-30796] - status/error message
   * set_cursor(1);                    // restore cursor
   * }
   * // function epilogue: restore ra, sp += 32, return
   * **GP offsets to resolve:**
   * - gp[-30868] (0x876c): cursor control function (called with 1)
   * - gp[-30796] (0x87b4): message display function
   * - gp[-32660] + 0x6e88 (0x806c): rodata base, string at offset 28296
   * The pattern suggests: "if dirty flag set, show busy cursor, display save message, restore cursor"
   */
  return;
}

void restorePosition(undefined4 param_1)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  extract_position_data((void *)(uintptr_t)param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
                &iStack_1c,(undefined1 *)((int)curcontext + 0xc50));
  if (sStack_2 != ctx->rotation_z) {
    ctx->rotation_z = sStack_2;
    init_view_transform();
  }
  if (sStack_4 != ctx->rotation_x) {
    ctx->rotation_x = sStack_4;
    init_camera_state();
  }
  ctx->camera_x = uStack_8;
  ctx->camera_y = uStack_c;
  ctx->camera_z = uStack_10;
  ctx->zoom_mode = uStack_14;
  if (iStack_18 != *(int *)(curcontext + 0x44)) {
    if (iStack_18 == 0) {
      clear_marked_state();
    }
    else {
      update_marked_item(0);
    }
  }
  if (iStack_1c != *(int *)(curcontext + 0x48)) {
    if (iStack_1c == 0) {
      clear_current_selection();
    }
    else {
      get_item_screen_coords(NULL);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e3b0):
     * Function: restorePosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares a local variable (sp+60) against curcontext[18] (offset 72). If not equal, calls either selectDir(t4) if t4 is non-null, or clearSelection() if t4 is null. Then returns.
     * 2. **C pseudocode:**
     * // At end of restorePosition, after halt_baddata:
     * void *saved_dir = local_60;  // sp+60
     * void *current_selected = curcontext[18];  // offset 0x48 = 72
     * if (saved_dir != current_selected) {
     * if (saved_dir != NULL) {
     * selectDir(saved_dir);      // gp-31164 = 0x8644
     * } else {
     * clearSelection();          // gp-31168 = 0x8640
     * }
     * }
     * return;
     * GP offsets: -30340 (0x897c) = curcontext, -31164 (0x8644) = selectDir, -31168 (0x8640) = clearSelection
     */
  return;
}

void restorePositions(void)
{
  sync_fam_state(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    sync_fam_state(&fam_request_id);
    gl_swap_buffers(1);
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x0042e5b8):
   * Function: restorePositions
   *
   * Looking at this assembly:
   * **1. What it does:**
   * Loads a pointer from t6, checks byte at offset 0xC51 (3153). If non-zero, calls a function twice with arg=1 (likely `displayHourglass`), and between those calls another function with a string pointer (rodata + 28296, likely `set_status_message`).
   * **2. C pseudocode:**
   * // t6 = some global pointer (likely curcontext or topdir)
   * void *ptr = *(void **)t6;
   * if (((unsigned char *)ptr)[0xC51] != 0) {
   * displayHourglass(1);                    // gp-30868
   * set_status_message(rodata_base + 28296); // gp-32660 base, gp-30784 func
   * displayHourglass(1);
   * }
   * // function epilogue - restore ra, sp += 32, return
   * **GP offset resolution:**
   * - `gp-30868` (0x876c): `displayHourglass` (hourglass on/off)
   * - `gp-30784` (0x87c0): `set_status_message`
   * - `gp-32660` (0x806c): rodata base pointer
   * - Offset 28296 (0x6E88): likely string "Restoring positions..." or similar
   */
  return;
}
