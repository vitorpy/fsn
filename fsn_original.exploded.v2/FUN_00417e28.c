/**
 * FUN_00417e28
 *
 * Extracted from fsn.c lines 55630-55754
 * Ghidra address: 0x00417e28
 * Category: Other
 */

void FUN_00417e28(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  int unaff_gp;
  undefined1 auStack_94 [20];
  uint local_80;
  int local_64;
  undefined4 local_54;
  int local_c;
  
  if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
    local_c = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(local_c);
    iVar1 = iVar1 + local_c;
    /* TODO: GP:-0x7ecc */ (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(iVar1,param_2);
    iVar2 = /* TODO: GP:-0x7ee0 */ (**(code **)(unaff_gp + -0x7ee0) /* -> EXTERNAL_0x0facbb68 */)(local_c,auStack_94);
    if (-1 < iVar2) {
      bVar5 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar5 & 0x7f;
      param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar5 & 0x3f;
      if ((local_80 & 0xf000) == 0x4000) {
        iVar2 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(param_1,param_2) /* =FUN_00413610 */;
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1c04))();
          if (param_1->child_count /* was: *(int *)(param_1 + 0x14) */ == 0) {
            uVar4 = /* TODO: GP:-0x7c48 */ (**(code **)(unaff_gp + -0x7c48) /* -> EXTERNAL_0x0fabf188 */)(4);
            param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = uVar4;
          }
          else {
            uVar4 = /* TODO: GP:-0x7e74 */ (**(code **)(unaff_gp + -0x7e74) /* -> EXTERNAL_0x0fac19a8 */)
                              (param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */,param_1->child_count /* was: *(int *)(param_1 + 0x14) */ * 4 + 4);
            param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = uVar4;
          }
          *(undefined4 **)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + param_1->child_count /* was: *(int *)(param_1 + 0x14) */ * 4) = puVar3;
          param_1->child_count /* was: *(int *)(param_1 + 0x14) */ = param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 1;
          bVar5 = *(byte *)(puVar3 + 0x1d);
          iVar2 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
          *(byte *)(puVar3 + 0x1d) = bVar5 | 8;
          *(byte *)(puVar3 + 0x1d) = bVar5 | 10;
          uVar4 = (*(code *)(iVar2 + 0x1d68))(param_2);
          *puVar3 = uVar4;
          uVar4 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
          puVar3[1] = uVar4;
          iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
          puVar3[3] = 0;
          puVar3[5] = 0;
          puVar3[10] = param_1;
          puVar3[2] = local_80;
          bVar7 = *(char *)(iVar2 + 3) != '\0';
          if (bVar7) {
            bVar7 = param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xb < 0;
          }
          *(byte *)((int)puVar3 + 0x75) = bVar7 << 4 | *(byte *)((int)puVar3 + 0x75) & 0xef;
          if ((int)(puVar3[0x1d] << 0xb) < 0) {
            (**(code **)(unaff_gp + -0x78ec) /* -> FUN_00427e30 */)(puVar3) /* =FUN_00427e30 */;
          }
          iVar2 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x80;
          bVar5 = (*(code *)(iVar2 + 0x38e8))(puVar3,local_c,iVar1,0);
          *(byte *)(param_1 + 0x75) = (bVar5 & 1) << 6 | *(byte *)(param_1 + 0x75) & 0xbf;
          if (((param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
            (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x44ec))(param_1);
          }
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7848) /* -> FUN_0042df08 */)() /* =FUN_0042df08 */;
        iVar1 = (**(code **)(unaff_gp + -0x7a5c) /* -> FUN_00413580 */)(param_1,param_2) /* =FUN_00413580 */;
        if (iVar1 == 0) {
          puVar3 = (undefined4 *)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1b84))();
          if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ == 0) {
            uVar4 = /* TODO: GP:-0x7c48 */ (**(code **)(unaff_gp + -0x7c48) /* -> EXTERNAL_0x0fabf188 */)(4);
            param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = uVar4;
          }
          else {
            uVar4 = /* TODO: GP:-0x7e74 */ (**(code **)(unaff_gp + -0x7e74) /* -> EXTERNAL_0x0fac19a8 */)
                              (param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */,param_1->file_count /* was: *(int *)(param_1 + 0xc) */ * 4 + 4);
            param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = uVar4;
          }
          *(undefined4 **)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + param_1->file_count /* was: *(int *)(param_1 + 0xc) */ * 4) = puVar3;
          param_1->file_count /* was: *(int *)(param_1 + 0xc) */ = param_1->file_count /* was: *(int *)(param_1 + 0xc) */ + 1;
          iVar1 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 2;
          *(byte *)((int)puVar3 + 0x29) = *(byte *)((int)puVar3 + 0x29) | 0x80;
          uVar4 = (*(code *)(iVar1 + 0x1d68))(param_2);
          *puVar3 = uVar4;
          uVar4 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
          puVar3[1] = uVar4;
          puVar3[2] = local_80;
          uVar4 = (**(code **)(unaff_gp + -0x77e8) /* -> FUN_00433b44 */)(local_c) /* =FUN_00433b44 */;
          puVar3[8] = uVar4;
          iVar1 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
          param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ = (param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + local_64) - puVar3[3];
          uVar4 = (*(code *)(iVar1 + 0x18b0))(param_1);
          param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar4;
          iVar1 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */;
          puVar3[3] = local_64;
          piVar6 = (int *)(iVar1 + 0x184);
          if (*piVar6 < local_64) {
            *piVar6 = local_64;
          }
          piVar6 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x18c);
          if (*piVar6 < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
            *piVar6 = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
          }
          puVar3[4] = local_54;
          (**(code **)(unaff_gp + -0x7a74) /* -> FUN_00412400 */)(puVar3) /* =FUN_00412400 */;
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00417e28):
     * Function: FUN_00417e28
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Checks if bit 18 of node->flags (offset 0x74) is set. If set, returns 0 early. Otherwise calls two GP-indirect functions to build a path string, then calls a third function with that path and the second argument.
     * 2. **C pseudocode:**
     * ```c
     * int fileCreated(DirNode *node, char *param2) {
     * // Check flag bit 18 (0x74 = flags field)
     * if (node->flags & 0x40000) {  // bit 18 = 0x40000
     * return 0;
     * }
     * // GP-857c: likely get_parent_path or similar
     * char *base = get_path_prefix(0, node);
     * // GP-83e0: likely strlen
     * int len = strlen(base);
     * // Concatenate: base + len = pointer to end of base string
     * char *fullpath = base + len;  // Actually stored at sp+48
     * // GP-8134: likely strcat or path operation
     * return some_path_operation(fullpath, param2);
     * }
     * ```
     * The `sll t8,t6,0xd` + `bgez` is checking bit 18 (shift left 13, then check sign = bit 31-13=18). GP offsets -31364, -31776, -32460 are indirect function calls through the GOT.
     */
halt_baddata();
        }
        (**(code **)(unaff_gp + -0x7a30) /* -> FUN_00417c2c */)(param_1,param_2) /* =FUN_00417c2c */;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417e28):
     * Function: FUN_00417e28
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Conditionally stores v0 if t9 < v0 (updates some max value)
     * 2. Stores t8 (from stack) to offset 16 of s0 struct, calls a function via GP
     * 3. Compares floats: if s0->offset_0x1c > s1->offset_0x54, updates s1->offset_0x54
     * 4. Sets bit 0 of s1->offset_0x74 (flags byte), calls another GP function, then branches to exit
     * **C pseudocode:**
     * ```c
     * // s0 = new node, s1 = parent directory, v1 = some pointer, t9 = current max
     * if (v0 > current_max) {
     * *some_ptr = v0;  // update max
     * }
     * s0->field_0x10 = stack_var_116;  // store parent or type info
     * unknown_func_858c(s0);           // GP[-31348] - likely node setup
     * // Update parent's max child width if this node is wider
     * if (s0->width > s1->max_child_width) {
     * s1->max_child_width = s0->width;
     * }
     * s1->flags |= 0x01;  // mark parent as having children/needs update
     * unknown_func_87c4();            // GP[-30780] - likely redraw trigger
     * goto exit_label;
     * ```
     * **Context:** This is in `fileCreated` - adding a new file node to a directory. The float comparison updates the parent's max child width for layout purposes, and the flag bit marks the directory as needing visual update.
     */
halt_baddata();
}
