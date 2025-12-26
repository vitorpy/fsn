/**
 * fileCreated
 *
 * Extracted from fsn.c lines 55513-55624
 * Category: UI
 */

void fileCreated(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  char *__dest;
  stat sStack_94;
  char *pcStack_c;
  
  if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    sVar1 = strlen(pcStack_c);
    __dest = pcStack_c + sVar1;
    strcpy(__dest,param_2);
    iVar2 = lstat(pcStack_c,&sStack_94);
    if (-1 < iVar2) {
      bVar6 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar6 & 0x7f;
      param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar6 & 0x3f;
      if ((sStack_94.st_nlink & 0xf000) == 0x4000) {
        iVar2 = FUN_00413610(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00411c04();
          if (param_1->child_count /* was: *(int *)(param_1 + 0x14) */ == 0) {
            pvVar4 = malloc(4);
            param_1->child_array /* was: *(void **)(param_1 + 0x18) */ = pvVar4;
          }
          else {
            pvVar4 = realloc(param_1->child_array /* was: *(void **)(param_1 + 0x18) */,param_1->child_count /* was: *(int *)(param_1 + 0x14) */ * 4 + 4);
            param_1->child_array /* was: *(void **)(param_1 + 0x18) */ = pvVar4;
          }
          *(undefined4 **)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + param_1->child_count /* was: *(int *)(param_1 + 0x14) */ * 4) = puVar3;
          param_1->child_count /* was: *(int *)(param_1 + 0x14) */ = param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 1;
          bVar6 = *(byte *)(puVar3 + 0x1d);
          *(byte *)(puVar3 + 0x1d) = bVar6 | 8;
          *(byte *)(puVar3 + 0x1d) = bVar6 | 10;
          uVar5 = FUN_00411d68(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[3] = 0;
          puVar3[5] = 0;
          puVar3[10] = param_1;
          puVar3[2] = sStack_94.st_nlink;
          bVar7 = DAT_10017493 != '\0';
          if (bVar7) {
            bVar7 = param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xb < 0;
          }
          *(byte *)((int)puVar3 + 0x75) = bVar7 << 4 | *(byte *)((int)puVar3 + 0x75) & 0xef;
          if ((int)(puVar3[0x1d] << 0xb) < 0) {
            FUN_00427e30(puVar3);
          }
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x80;
          bVar6 = FUN_004138e8(puVar3,pcStack_c,__dest,0);
          *(byte *)(param_1 + 0x75) = (bVar6 & 1) << 6 | *(byte *)(param_1 + 0x75) & 0xbf;
          if (((param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
            FUN_004144ec(param_1);
          }
        }
      }
      else {
        FUN_0042df08();
        iVar2 = FUN_00413580(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00411b84();
          if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ == 0) {
            pvVar4 = malloc(4);
            param_1->file_array /* was: *(void **)(param_1 + 0x10) */ = pvVar4;
          }
          else {
            pvVar4 = realloc(param_1->file_array /* was: *(void **)(param_1 + 0x10) */,param_1->file_count /* was: *(int *)(param_1 + 0xc) */ * 4 + 4);
            param_1->file_array /* was: *(void **)(param_1 + 0x10) */ = pvVar4;
          }
          *(undefined4 **)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + param_1->file_count /* was: *(int *)(param_1 + 0xc) */ * 4) = puVar3;
          param_1->file_count /* was: *(int *)(param_1 + 0xc) */ = param_1->file_count /* was: *(int *)(param_1 + 0xc) */ + 1;
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 2;
          *(byte *)((int)puVar3 + 0x29) = *(byte *)((int)puVar3 + 0x29) | 0x80;
          uVar5 = FUN_00411d68(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[2] = sStack_94.st_nlink;
          uVar5 = FUN_00433b44(pcStack_c);
          puVar3[8] = uVar5;
          param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ = (param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + sStack_94.st_blksize) - puVar3[3];
          uVar5 = FUN_004118b0(param_1);
          param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar5;
          puVar3[3] = sStack_94.st_blksize;
          if (DAT_10000184 < sStack_94.st_blksize) {
            DAT_10000184 = sStack_94.st_blksize;
          }
          if (DAT_1000018c < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
            DAT_1000018c = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
          }
          puVar3[4] = sStack_94.st_mtim.tv_sec;
          FUN_00412400(puVar3);
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00417e1c):
     * Function: fileCreated
     *
     * Looking at the assembly:
     * 1. **What it does:** Checks bit 18 of node->flags (offset 0x74). If set, returns 0 early. Otherwise calls getParentPath(NULL, node) and then strlen() on the result, adding them together (likely to compute total path length including the returned string pointer as base).
     * 2. **C pseudocode:**
     * ```c
     * int fileCreated(DirNode *node, /* arg2 */) {
     * // Check if bit 18 is set in flags (0x74 offset)
     * if (node->flags & 0x00040000) {  // bit 18 = "already created" flag
     * return 0;
     * }
     * char *path = getParentPath(NULL, node);  // GP-0x857c
     * int len = strlen(path);                   // GP-0x83e0
     * char *end = path + len;                   // pointer arithmetic
     * // ... continues with path manipulation
     * }
     * ```
     * The `sll t8,t6,0xd` followed by `bgez` is checking bit 18 (shift left 13, then check sign bit = bit 31-13=18). This is likely an "is_created" or "is_valid" flag check. The function appears to build/validate a file path for a newly created file entry.
     */
halt_baddata();
        }
        FUN_00417c2c(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417e1c):
     * Function: fileCreated
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * 1. Conditionally stores v0 if t9 < v0 (min/max calculation)
     * 2. Stores t8 (from stack) into s0+16, calls a function via GP-31348
     * 3. Compares floats: if s0->field_0x1c > s1->field_0x54, updates s1->field_0x54
     * 4. Sets bit 0 of s1->byte_0x74, calls function via GP-30780
     * **C pseudocode:**
     * ```c
     * // Conditional min/max store
     * if (t9 < v0) {
     * *some_ptr = v0;  // v3 points to destination
     * }
     * // Store and call
     * node->field_0x10 = parent_value;  // s0+16 = stack[116]
     * some_function(node);              // GP-31348 call with s0 as arg
     * // Update max width if this node is wider
     * if (node->width > parent->max_child_width) {  // s0+0x1c vs s1+0x54
     * parent->max_child_width = node->width;
     * }
     * // Mark parent as having children
     * parent->flags |= 0x01;  // s1+0x74, bit 0 = has_children
     * another_function();  // GP-30780 call
     * ```
     * The GP offsets (-31348 = 0x858c, -30780 = 0x87c4) need resolution against your GP_MAPPING to identify the actual functions being called.
     */
halt_baddata();
}
