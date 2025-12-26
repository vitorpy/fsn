/**
 * savePosition
 *
 * Extracted from fsn.c lines 68321-68368
 * Category: Other
 */

void savePosition(undefined2 *param_1)

{
  *param_1 = curcontext->rotation_z /* was: *(undefined2 *)(curcontext + 0xc) */;
  param_1[1] = curcontext->rotation_x /* was: *(undefined2 *)(curcontext + 0xe) */;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)curcontext;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(curcontext + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(curcontext + 8);
  *(undefined4 *)(param_1 + 2) = curcontext->zoom_mode /* was: *(undefined4 *)(curcontext + 0x3c) */;
  *(undefined4 *)(param_1 + 10) = curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */;
  *(undefined4 *)(param_1 + 0x12) = curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */;
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) {
    if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
      param_1->file_count /* was: *(float *)(param_1 + 0xc) */ =
           *(float *)curcontext - *(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(curcontext + 4) - *(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x38);
      param_1->file_array /* was: *(float *)(param_1 + 0x10) */ =
           *(float *)(curcontext + 8) - *(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x24);
      if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) {
        param_1->child_count /* was: *(float *)(param_1 + 0x14) */ =
             *(float *)curcontext -
             (*(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x34) +
             *(float *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x14) *
             *(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x58));
        *(float *)(param_1 + 0x16) =
             *(float *)(curcontext + 4) -
             (*(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x38) +
             *(float *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x18));
        param_1->child_array /* was: *(float *)(param_1 + 0x18) */ =
             *(float *)(curcontext + 8) -
             (*(float *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x24) +
             *(float *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x1c));
      }
    }
    else if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) {
      param_1->child_count /* was: *(float *)(param_1 + 0x14) */ =
           *(float *)curcontext - *(float *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(curcontext + 4) - *(float *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042dc58):
     * Function: savePosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads `curcontext` via GP, reads two 16-bit shorts from offsets 12 and 14, and three floats from offsets 0, 4, 8 of the context structure. Stores them into the output struct at a0.
     * 2. **C pseudocode:**
     * ```c
     * void savePosition(SavedPosition *out) {
     * // GP offset -30340 (0x897c) = curcontext
     * Context *ctx = *curcontext;
     * out->col = ctx->col;           // offset 12, short
     * out->row = ctx->row;           // offset 14, short
     * out->x = ctx->x;               // offset 0, float
     * out->y = ctx->y;               // offset 4, float
     * out->z = ctx->z;               // offset 8, float
     * }
     * ```
     * Output struct layout: `{short col, short row, padding?, float x, float y, float z}` at offsets 0, 2, 8, 12, 16.
     */
halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042dc58):
     * Function: savePosition
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a byte from offset 3152 of t9 (likely GP-relative global) into offset 52 of the destination struct. Then accesses a linked structure chain: loads pointer at offset 68, checks if non-null, loads pointer at offset 60, then offset 72. Performs float subtraction: dest->offset40 = src->x - src->child->x_offset (float at offset 0 minus float at offset 20 of child).
     * 2. **C pseudocode**:
     * ```c
     * dest->flags = some_global_byte;  // offset 52, from GP+3152
     * struct_ptr = *param3;            // deref a2
     * if (struct_ptr->field_44 == NULL) goto end;  // offset 68
     * if (struct_ptr->field_3c == NULL) goto next_block;  // offset 60
     * child = struct_ptr->field_48;    // offset 72
     * if (child == NULL) goto end;
     * dest->rel_x = struct_ptr->x - child->x_offset;  // offset 40 = offset 0 - child offset 20
     * // continues loading more floats...
     * ```
     * The pattern suggests saving relative position of an object versus its parent/child in the scene graph. Offsets 0,4,8 are likely x,y,z coords; offsets 20,24,28 in child are reference offsets.
     */
halt_baddata();
}
