/**
 * getPosition
 *
 * Extracted from fsn.c lines 68469-68545
 * Category: Other
 */

void getPosition(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                undefined1 *param_10)

{
  int iVar1;
  
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
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * Looking at this assembly:
     * **What it does:**
     * Copies position data from a source struct to output parameters: X (halfword), Y (halfword), and a byte flag. Then checks if a linked object exists and if bit 28 of its field at offset 116 is clear - if so, zeroes out three output pointers.
     * **C pseudocode:**
     * ```c
     * void getPosition(SourceStruct *src, short *outX, short *outY,
     * unsigned char *outFlag, int *out1, int *out2, int *out3) {
     * *outX = src->x;           // offset 0, halfword
     * *outY = src->y;           // offset 2, halfword
     * *outFlag = src->flag;     // offset 52, byte
     * void *linked = src->linked_obj;  // offset 4
     * if (linked == NULL) {
     * return;  // branches to 0x42e180
     * }
     * int field116 = *(int*)((char*)linked + 116);
     * if ((field116 << 3) < 0) {  // test bit 28 (sign after shift)
     * return;  // branches to 0x42e064
     * }
     * // Clear outputs when bit 28 is clear
     * *out1 = 0;
     * *out2 = 0;
     * *out3 = 0;
     * // ... continues
     * }
     * ```
     * The `(field116 << 3) < 0` is testing if bit 28 is set (shifting left 3 puts bit 28 into sign position). This is likely checking a flag in the linked object's status field.
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
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores a halfword to arg `a2`, copies a byte from `a0+52` to output pointer at `sp+36`, then checks if `a0->field_4` is NULL. If the node's flags (offset 0x74) bit 28 is set (hidden/collapsed), jumps to 0x42e064. Otherwise, zeros out three output floats and copies camera position (curcontext offsets 0x18, 0x1c) to output params.
     * 2. **C pseudocode:**
     * ```c
     * *outWidth = (short)value;           // sh t7,0(a2)
     * *outType = node->type;              // byte at offset 52
     * if (node->parent == NULL) {
     * goto end_label;                 // beqz to 0x42e180
     * }
     * int flags = node->parent->flags;    // offset 0x74
     * if ((flags << 3) < 0) {             // bit 28 set = hidden
     * goto skip_label;                // bltz to 0x42e064
     * }
     * // Node visible - return camera/default position
     * *outX = 0;
     * *outY = 0;
     * *outZ = 0;
     * *outPosX = curcontext->cameraX;     // offset 0x18
     * *outPosY = curcontext->cameraY;     // offset 0x1c
     * return 0;
     * ```
     * The `(flags << 3) < 0` test checks if bit 28 is set (shifting left 3 puts bit 28 into the sign position). This likely indicates a "hidden" or "collapsed" flag on the parent directory node.
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
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if node offset+116 bit 4 is set (collapsed flag). If not collapsed: zeros out three output pointers, copies 3 floats from curcontext offsets 24/28/32 to output params, zeros a short, copies a value from curcontext+40 to another short output.
     * 2. **C pseudocode:**
     * ```c
     * // At 42dfe0 - after halt_baddata recovery
     * if (node == NULL) goto exit_path;
     * int flags = node->flags;  // offset 116
     * if (flags & 0x10) goto skip_block;  // bit 4 = collapsed?
     * // Node not collapsed - return curcontext position
     * *out_int1 = 0;           // sp+24 -> t3
     * *out_int2 = 0;           // sp+28 -> t4
     * *out_int3 = 0;           // sp+32 -> t5
     * *out_x = curcontext->pos_x;    // curcontext+24 -> a3
     * *out_y = curcontext->pos_y;    // curcontext+28 -> sp+16
     * *out_z = curcontext->pos_z;    // curcontext+32 -> v1 (sp+20)
     * *out_short1 = 0;               // a1
     * *out_short2 = (short)curcontext->field_40;  // curcontext+40 -> a2
     * return 0;
     * ```
     * The gp-relative load at `8f848a24` resolves to `curcontext` (offset -30172 = 0x8a24). This returns the current view position when a node is expanded (not collapsed).
     */
halt_baddata();
  }
  if (-1 < iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 3) {
    *param_7 = 0;
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = view_init_x;
    *param_5 = view_init_y;
    *param_6 = view_init_z;
    *param_2 = 0;
    *param_3 = (short)DAT_100174b8;
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Zeros out 3 output pointers (t3, t4, t5), then copies 3 floats from curcontext offsets 0x18/0x1c/0x20 to output params (a3, sp+16, sp+20). Zeros a short at a1, copies int from offset 0x28 to short at a2, zeros byte at sp+36. Returns 0.
     * 2. **C pseudocode:**
     * ```c
     * int getPosition(short *param1, short *param2, float *outX,
     * float *outZ, float *outY, int *out5, int *out6,
     * int *out7, char *out8) {
     * *out5 = 0;
     * *out6 = 0;
     * *out7 = 0;
     * *outX = curcontext->posX;      // offset 0x18
     * *outZ = curcontext->posZ;      // offset 0x1c
     * *outY = curcontext->posY;      // offset 0x20
     * *param1 = 0;
     * *param2 = (short)curcontext->field_0x28;
     * *out8 = 0;
     * return 0;
     * }
     * ```
     * Note: gp-0x75dc (offset -30172) resolves to curcontext pointer. The function returns camera/viewer position from the current context structure.
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
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * **What it does:**
     * Extracts position (x,y,z) from offsets 24/28/32 of param1 (a0), stores to output pointers. Copies field at offset 40 as short to param4 (a2). Zeros out param3 (t5), param2 (a1), and byte at stack param (sp+36).
     * **C pseudocode:**
     * ```c
     * int getPosition(void *node, short *param2, int *param3, short *param4,
     * float *outX, float *outY, float *outZ, char *param8) {
     * *param3 = 0;                          // t5 <- zero
     * *outX = *(float*)((char*)node + 24);  // f4 from a0+0x18
     * *outY = *(float*)((char*)node + 28);  // f6 from a0+0x1c
     * *outZ = *(float*)((char*)node + 32);  // f8 from a0+0x20
     * *param2 = 0;                          // a1 <- zero (short)
     * *param4 = *(short*)((char*)node + 40); // t7 from a0+0x28
     * *param8 = 0;                          // sp+36 <- zero (byte)
     * return 0;                             // v0 = zero
     * }
     * ```
     */
halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042dfa8):
     * Function: getPosition
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Stores float f6 to [t6], loads float from a0+32 and stores to [v1], stores 0 (short) to [a1], loads int from a0+40 and stores as short to [a2], then stores 0 (byte) to address from sp+36.
     * 2. **C pseudocode:**
     * ```c
     * *outX = f6;                    // swc1 f6 to t6
     * *outY = *(float*)(a0 + 0x20);  // lwc1/swc1 from offset 32
     * *outShort1 = 0;                // sh zero to a1
     * *outShort2 = *(int*)(a0 + 0x28); // lw from offset 40, store as short
     * *outByte = 0;                  // sb zero via sp+36 ptr
     * ```
     * This appears to be the tail of getPosition() extracting X/Y coordinates from a node structure (offsets 0x20 and 0x28 = fields at byte 32 and 40), with additional output parameters being zeroed. The structure at a0 is likely a directory/file node with position data.
     */
halt_baddata();
}
