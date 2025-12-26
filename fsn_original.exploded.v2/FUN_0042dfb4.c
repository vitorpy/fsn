/**
 * FUN_0042dfb4
 *
 * Extracted from fsn.c lines 68551-68629
 * Ghidra address: 0x0042dfb4
 * Category: Other
 */

void FUN_0042dfb4(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10)

{
  int iVar1;
  int unaff_gp;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_10 = *(undefined1 *)(param_1 + 0x1a);
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar1 = *(int *)(param_1 + 10);
    if (iVar1 != 0) {
      if (iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 3 < 0) {
        *param_8 = iVar1;
        iVar1 = *(int *)(param_1 + 0x12);
        if (iVar1 != 0) {
          if (iVar1->child_center /* was: *(int *)(iVar1 + 0x28) */ << 5 < 0) {
            *param_9 = iVar1;
            *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x14) *
                       *(float *)(*(int *)(param_1 + 10) + 0x58) + param_1->child_count /* was: *(float *)(param_1 + 0x14) */;
            *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
            *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + param_1->child_array /* was: *(float *)(param_1 + 0x18) */;
                    // WARNING: Bad instruction - Truncating control flow here
                /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Extracts position data from a node structure: copies two 16-bit coordinates (x,y) to output params, copies a byte (flags/type), then if the node has a parent with a specific flag bit clear, zeros out three output params and copies a float from a global context.
     * **C pseudocode:**
     * ```c
     * void getPosition(Node *node, short *outX, short *outY, uint8_t *outFlags,
     * float *outFloat, int *out1, int *out2, int *out3) {
     * *outX = node->x;           // offset 0, halfword
     * *outY = node->y;           // offset 2, halfword
     * *outFlags = node->flags;   // offset 52, byte
     * void *parent = node->parent;  // offset 4
     * if (parent == NULL) return;
     * int parentFlags = *(int*)(parent + 116);  // offset 0x74
     * if ((parentFlags << 3) < 0) return;  // test bit 28: if set, return
     * // bit 28 clear path:
     * *out1 = 0;
     * *out2 = 0;
     * *out3 = 0;
     * *outFloat = curcontext->field_0x18;  // float at offset 24 from global
     * }
     * ```
     * The `(parentFlags << 3) < 0` tests if bit 28 is set (shifts bit 28 into sign position). This is checking a flag in the parent node's flags field at offset 116.
     */
halt_baddata();
          }
        }
        *param_9 = 0;
        *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) + param_1->file_count /* was: *(float *)(param_1 + 0xc) */;
        *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) + *(float *)(param_1 + 0xe);
        *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) + param_1->file_array /* was: *(float *)(param_1 + 0x10) */;
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if node->parent exists and if bit 4 of parent->flags is clear. If so, zeros out three output pointers and copies position floats from a global (curcontext) offsets 24/28/32 to output parameters.
     * 2. **C pseudocode:**
     * ```c
     * *outByte = node->field_0x34;  // byte at offset 52
     * parent = node->parent;        // offset 4
     * if (parent == NULL) goto end;
     * flags = parent->flags;        // offset 116 (0x74)
     * if (flags & 0x10) goto skip;  // bit 4 set = skip
     * *outParam1 = 0;               // param at sp+24
     * *outParam2 = 0;               // param at sp+28
     * *outParam3 = 0;               // param at sp+32
     * result = 0;
     * *outX = curcontext->pos_x;    // offset 24 (0x18)
     * *outY = curcontext->pos_y;    // offset 28 (0x1c)
     * *outZ = curcontext->pos_z;    // offset 32 (0x20)
     * ```
     * The `sll t2,t0,0x3` followed by `bltz` is checking bit 4 (shifting left 3 puts bit 4 into sign position). This appears to be a "getPosition" helper that returns the current context's camera/view position when the parent node doesn't have a specific flag set.
     */
halt_baddata();
      }
    }
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(param_1 + 4);
    *param_5 = *(float *)(param_1 + 6);
    *param_6 = *(float *)(param_1 + 8);
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if bit 4 of node->flags (offset 116) is set. If clear, zeros out 6 output parameters and copies position (x,y,z from curcontext offsets 24,28,32), row number (offset 40), and returns 0.
     * 2. **C pseudocode:**
     * ```c
     * // At 42dfec - after halt_baddata recovery
     * flags = node[116/4];  // offset 116 = flags field
     * if ((flags << 3) >= 0) {  // bit 4 not set = item not positioned/visible
     * *out_selected = 0;      // sp+24 -> t3
     * *out_marked = 0;        // sp+28 -> t4
     * *out_unknown = 0;       // sp+32 -> t5
     * *out_x = curcontext[6];  // offset 24 = camera/view x
     * *out_y = curcontext[7];  // offset 28 = camera/view y
     * *out_z = curcontext[8];  // offset 32 = camera/view z (sp+20 -> v1)
     * *out_type = 0;          // a1 = short
     * *out_row = curcontext[10]; // offset 40 = row/level (a2 = short)
     * *out_flag = 0;          // sp+36 -> t8, byte
     * return 0;
     * }
     * ```
     * The `sll t2,t0,0x3` + `bltz` pattern tests bit 28 of the shifted value, which is bit 4 of the original flags (0x10 = FS_POSITIONED or similar flag).
     */
halt_baddata();
  }
  if (-1 < iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 3) {
    *param_7 = 0;
    iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = iVar1->child_array /* was: *(float *)(iVar1 + 0x18) */;
    *param_5 = iVar1->_field_1c /* was: *(float *)(iVar1 + 0x1c) */;
    *param_6 = iVar1->_field_20 /* was: *(float *)(iVar1 + 0x20) */;
    *param_2 = 0;
    *param_3 = (short)iVar1->child_center /* was: *(undefined4 *)(iVar1 + 0x28) */;
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * Looking at this assembly:
     * 1. **What it does:** Zeros out two int pointers (sp+28, sp+32), copies 3 floats from a0+24/28/32 to output params (a3, sp+16, v1), zeros a short at a1, copies a short from a0+40 to a2, zeros a byte at sp+36, returns 0.
     * 2. **C pseudocode:**
     * ```c
     * // a0 = global from GP-30172 (likely curcontext or similar struct)
     * // Arguments: a1=short*, a2=short*, a3=float*, sp+16=float*, v1=float*, sp+28=int*, sp+32=int*, sp+36=char*
     * *out_int1 = 0;           // sp+28
     * *out_int2 = 0;           // sp+32
     * *out_x = ctx->field_0x18;  // float at offset 24
     * *out_y = ctx->field_0x1c;  // float at offset 28
     * *out_z = ctx->field_0x20;  // float at offset 32
     * *out_short1 = 0;         // a1
     * *out_short2 = ctx->field_0x28;  // short from offset 40
     * *out_byte = 0;           // sp+36
     * return 0;
     * ```
     * This appears to be a "get default/initial state" function - it retrieves 3D position (x,y,z floats) and a short value from some global context structure while zeroing out other output parameters.
     */
halt_baddata();
  }
  *param_7 = iVar1;
  *param_8 = iVar1;
  iVar1 = *(int *)(param_1 + 0x12);
  if ((iVar1 != 0) && (iVar1->child_center /* was: *(int *)(iVar1 + 0x28) */ << 5 < 0)) {
    *param_9 = iVar1;
    *param_4 = *(float *)(*(int *)(param_1 + 0x12) + 0x14) + param_1->child_count /* was: *(float *)(param_1 + 0x14) */;
    *param_5 = *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
    *param_6 = *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + param_1->child_array /* was: *(float *)(param_1 + 0x18) */;
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * **What it does:**
     * Extracts fields from a structure at a0 (offsets 0x1c, 0x20, 0x28) into output pointers, clears a short at a1, and clears a byte at the address from sp+36.
     * **C pseudocode:**
     * ```c
     * // a0 = struct pointer, a3/t6/v1 = float output ptrs, a1/a2 = short ptrs, sp+36 = byte ptr
     * *((float*)a3) = *(float*)(a0 + 0x1c);   // offset 28
     * *((float*)t6) = *(float*)(a0 + 0x1c);   // also offset 28 (duplicate store to different ptr)
     * *((float*)v1) = *(float*)(a0 + 0x20);   // offset 32
     * *((short*)a1) = 0;                       // clear short
     * *((short*)a2) = *(int*)(a0 + 0x28);     // offset 40, truncate to short
     * *((char*)sp_36) = 0;                     // clear byte flag
     * ```
     * Note: t6 comes from sp+16 (a parameter passed on stack). The first swc1 to a3 stores offset 0x1c field, but the lwc1 before it loaded from a different offset - need to see earlier code for $f4's source. This appears to be extracting X/Y/Z coordinates and status fields from a file/directory node structure.
     */
halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfb4):
     * Function: FUN_0042dfb4
     *
     * Looking at this assembly snippet (the tail end of FUN_0042dfb4):
     * **1. What it does:**
     * Stores a float to memory via v1, clears a short at a1, copies a word from offset 40 of a0 to a short at a2, then clears a byte at an address from the stack (sp+36).
     * **2. C pseudocode:**
     * ```c
     * *(float *)v1 = f8;           // swc1 $f8,0(v1)
     * *(short *)a1 = 0;            // sh zero,0(a1)
     * *(short *)a2 = *(int *)(a0 + 40);  // lw t7,40(a0); sh t7,0(a2)
     * *(char *)stack_var_36 = 0;   // lw t8,36(sp); sb zero,0(t8)
     * return;                      // jr ra
     * ```
     * This looks like end-of-function cleanup - storing computed results and clearing flags/state before return. The a0+40 offset suggests reading a field from a struct (possibly a node's child count or similar field being copied to a 16-bit output parameter).
     */
halt_baddata();
}
