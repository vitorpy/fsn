/**
 * FUN_0042dc64
 *
 * Extracted from fsn.c lines 68374-68427
 * Ghidra address: 0x0042dc64
 * Category: Other
 */

void FUN_0042dc64(undefined2 *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  *param_1 = *(undefined2 *)(*piVar3 + 0xc);
  param_1[1] = *(undefined2 *)(*piVar3 + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)*piVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*piVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*piVar3 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*piVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(*piVar3 + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(*piVar3 + 0xc50);
  pfVar1 = (float *)*piVar3;
  if (pfVar1[0x11] != 0.0) {
    if (pfVar1[0xf] == 0.0) {
      param_1->file_count /* was: *(float *)(param_1 + 0xc) */ = *pfVar1 - *(float *)((int)pfVar1[0x11] + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x38);
      param_1->file_array /* was: *(float *)(param_1 + 0x10) */ =
           *(float *)(*piVar3 + 8) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x24);
      pfVar1 = (float *)*piVar3;
      if (pfVar1[0x12] != 0.0) {
        param_1->child_count /* was: *(float *)(param_1 + 0x14) */ =
             *pfVar1 - (*(float *)((int)pfVar1[0x11] + 0x34) +
                       *(float *)((int)pfVar1[0x12] + 0x14) * *(float *)((int)pfVar1[0x11] + 0x58));
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x16) =
             *(float *)(iVar2 + 4) -
             (*(float *)(iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ + 0x38) + *(float *)(iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ + 0x18))
        ;
        iVar2 = *piVar3;
        param_1->child_array /* was: *(float *)(param_1 + 0x18) */ =
             *(float *)(iVar2 + 8) -
             (*(float *)(iVar2->flags /* was: *(int *)(iVar2 + 0x44) */ + 0x24) + *(float *)(iVar2->bound_min_x /* was: *(int *)(iVar2 + 0x48) */ + 0x1c))
        ;
      }
    }
    else if (pfVar1[0x12] != 0.0) {
      param_1->child_count /* was: *(float *)(param_1 + 0x14) */ = *pfVar1 - *(float *)((int)pfVar1[0x12] + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042dc64):
     * Function: FUN_0042dc64
     *
     * ## Analysis
     * **1. What it does:**
     * Copies fields from `curcontext` structure to output struct at `a0`: two 16-bit shorts from offsets 12,14, three floats from offsets 0,4,8, then loads pointer from offset 60.
     * **2. C pseudocode:**
     * ```c
     * // a0 = output struct pointer, gp-30340 = &curcontext
     * void FUN_0042dc64(OutputStruct *out) {
     * Context *ctx = *curcontext;  // gp[-30340] -> curcontext ptr -> deref
     * out->short0 = ctx->field_0c;     // offset 12: short
     * out->short1 = ctx->field_0e;     // offset 14: short
     * out->float0 = ctx->pos_x;        // offset 0: float
     * out->float1 = ctx->pos_y;        // offset 4: float
     * out->float2 = ctx->pos_z;        // offset 8: float
     * void *ptr = ctx->field_3c;       // offset 60: pointer (continues...)
     * }
     * ```
     * **GP offset -30340 (0x897c):** This is `curcontext` (0x10009524). The code reads the current context pointer, then extracts camera/view position (floats at 0,4,8) and viewport dimensions (shorts at 12,14) into the output structure.
     */
halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042dc64):
     * Function: FUN_0042dc64
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a byte from offset 3152 of t9 (likely a global table) and stores it at offset 52 of a struct (a0). Then accesses nested pointers from a2's first element, checks for null at offsets 68, 60, and 72, and if all valid, computes a float subtraction: `result = struct->x - child->x` storing at offset 40.
     * 2. **C pseudocode:**
     * ```c
     * // t9 = global pointer base, a0 = dest struct, a2 = context ptr
     * dest->byte_52 = global_table[3152];
     * node = *context;
     * if (node->field_68 == NULL) goto end;
     * if (node->field_60 == NULL) goto skip;
     * child = node->field_72;
     * if (child == NULL) goto end;
     * dest->float_40 = node->x - child->offset_20;  // offset 0 - offset 0x14
     * node = *context;
     * child = node->field_72;
     * // continues with y coordinate (offset 4 - offset 0x18)
     * ```
     * The pattern suggests saving relative position: subtracting a child/reference node's coordinates from the current node's coordinates and storing the delta. Offsets 0x14/0x18 on the child likely correspond to x/y position fields, while offsets 0/4 on node are its own x/y.
     */
halt_baddata();
}
