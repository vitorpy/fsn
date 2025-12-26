/**
 * FUN_004138e8
 *
 * Extracted from fsn.c lines 53443-53705
 * Ghidra address: 0x004138e8
 * Category: Filesystem
 */

void FUN_004138e8(undefined4 *param_1,char *param_2,char *param_3,char param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  dirent *pdVar4;
  undefined4 *puVar5;
  void *pvVar6;
  size_t sVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uchar *__s1;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  statvfs asStack_12c [2];
  stat local_90;
  DIR *local_4;
  
  FUN_00411998();
  if (-1 < (int)(param_1[0x1d] << 0xd)) {
    bVar1 = *(byte *)((int)param_1 + 0x75);
    *(byte *)((int)param_1 + 0x75) = bVar1 & 0x7f;
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe;
    *(byte *)((int)param_1 + 0x75) = bVar1 & 0x3f;
    strcpy(param_3,(char *)*param_1);
    uVar2 = FUN_00410e7c("scanning",param_2,0);
    param_3[param_1[1]] = '/';
    param_3[param_1[1] + 1] = '\0';
    param_3 = param_3 + param_1[1] + 1;
    iVar3 = lstat(param_2,&local_90);
    if (iVar3 < 0) {
      *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 4;
      deleteMessage(uVar2);
    }
    else {
      param_1[2] = local_90.st_nlink;
      if (local_90.st_dev._0_4_ != DAT_100166b8) {
        iVar3 = statvfs(param_2,asStack_12c);
        if (iVar3 < 0) {
          *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 4;
          deleteMessage(uVar2);
              /*
     * BADDATA ANALYSIS (from binary @ 0x004138e8):
     * Function: FUN_004138e8
     *
     * Looking at this assembly:
     * 1. **What it does:** Function prologue saves registers, calls a function via GP-relative lookup (offset -31368/0x8578), then checks bit 18 of field at offset 0x74 in the first argument struct. If bit 18 is set, returns 0 immediately.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_004138e8(struct_type *a0, int a1, int a2, int a3) {
     * // GP-relative call at offset -31368 (0x8578) - likely initialization
     * some_init_func();
     * // Check bit 18 of flags field at offset 0x74
     * if (a0->flags_74 & 0x40000) {  // (flags << 13) < 0 tests bit 18
     * return 0;
     * }
     * // ... continues processing
     * }
     * ```
     * The `sll t8,t6,0xd` followed by `bgez t8` is a bit-test idiom: shift left by 13, then branch if result >= 0 (i.e., if original bit 18 was 0). If bit 18 was set, fall through to return 0.
     */
halt_baddata();
        }
        if ((localFlag != (asStack_12c[0].__f_spare[1] & 0x80000000U)) ||
           (iVar3 = strcmp((char *)&asStack_12c[0].__f_unused,fstyp), iVar3 != 0)) {
          deleteMessage(uVar2);
          FUN_00413824(param_1);
              /*
     * BADDATA ANALYSIS (from binary @ 0x004138e8):
     * Function: FUN_004138e8
     *
     * Looking at this assembly:
     * 1. **What it does:** If v0 is zero, calls free(sp[84]) then calls a function at gp-32744+14372 with s2 as argument, then jumps to function epilogue. If v0 is non-zero, loops through s2->children array clearing bit 0x80 in each child's flags byte at offset 41.
     * 2. **C pseudocode:**
     * ```c
     * if (result == NULL) {
     * free(path_component);
     * somefunc(dir_node);  // gp-32744+14372 - likely freeDir or similar
     * return;
     * }
     * // Clear "marked" flag (bit 7) on all children
     * for (i = 0; i < dir_node->num_children; i++) {
     * child = dir_node->children[i];
     * child->flags &= ~0x80;  // offset 41, clear high bit
     * }
     * ```
     * GP offsets: -31388 = free(), -32744+14372 likely points to internal cleanup function. The 0xff7f mask clears bit 7 (0x80) of the flags byte at offset 41 in each child structure.
     */
halt_baddata();
        }
        DAT_100166b8 = local_90.st_dev._0_4_;
      }
      local_4 = opendir(param_2);
      if (local_4 == (DIR *)0x0) {
        deleteMessage(uVar2);
        FUN_00413824(param_1);
      }
      else {
        iVar11 = param_1[3];
        iVar12 = 0;
        iVar3 = 0;
        if (0 < iVar11) {
          do {
            iVar12 = iVar12 + 1;
            *(byte *)(*(int *)(param_1[4] + iVar3) + 0x29) =
                 *(byte *)(*(int *)(param_1[4] + iVar3) + 0x29) & 0x7f;
            piVar15 = (int *)(param_1[4] + iVar3);
            iVar3 = iVar3 + 4;
            *(byte *)(*piVar15 + 0x28) = *(byte *)(*piVar15 + 0x28) & 0xfd;
            iVar11 = param_1[3];
          } while (iVar12 < iVar11);
        }
        iVar13 = 0;
        iVar3 = param_1[5];
        iVar12 = 0;
        if (0 < iVar3) {
          do {
            iVar13 = iVar13 + 1;
            *(byte *)(*(int *)(param_1[6] + iVar12) + 0x74) =
                 *(byte *)(*(int *)(param_1[6] + iVar12) + 0x74) & 0xfd;
            piVar15 = (int *)(param_1[6] + iVar12);
            iVar12 = iVar12 + 4;
            *(byte *)(*piVar15 + 0x74) = *(byte *)(*piVar15 + 0x74) & 0xf7;
            iVar3 = param_1[5];
          } while (iVar13 < iVar3);
          iVar11 = param_1[3];
        }
        uVar14 = 0;
        pdVar4 = readdir(local_4);
        while (pdVar4 != (dirent *)0x0) {
          uVar9 = uVar14 & 0xf;
          uVar14 = uVar14 + 1;
          if (uVar9 == 0) {
            FUN_00411998();
          }
          __s1 = &pdVar4->d_type;
          if (((pdVar4->d_ino != 0) && (iVar12 = strcmp((char *)__s1,"."), iVar12 != 0)) &&
             (iVar12 = strcmp((char *)__s1,".."), iVar12 != 0)) {
            strncpy(param_3,(char *)__s1,(uint)pdVar4->d_reclen);
            param_3[pdVar4->d_reclen] = '\0';
            iVar12 = lstat(param_2,&local_90);
            if (-1 < iVar12) {
              if ((local_90.st_nlink & 0xf000) == 0x4000) {
                iVar12 = FUN_00413610(param_1,param_3);
                if (iVar12 == 0) {
                  iVar12 = iVar3 * 4;
                  puVar5 = (undefined4 *)FUN_00411c04();
                  if (iVar3 == 0) {
                    pvVar6 = malloc(4);
                    param_1[6] = pvVar6;
                  }
                  else {
                    pvVar6 = realloc((void *)param_1[6],iVar12 + 4);
                    param_1[6] = pvVar6;
                  }
                  iVar3 = iVar3 + 1;
                  *(undefined4 **)(param_1[6] + iVar12) = puVar5;
                  bVar1 = *(byte *)(puVar5 + 0x1d);
                  *(byte *)(puVar5 + 0x1d) = bVar1 | 8;
                  *(byte *)(puVar5 + 0x1d) = bVar1 | 10;
                  uVar8 = FUN_00411d68(param_3);
                  *puVar5 = uVar8;
                  sVar7 = strlen(param_3);
                  puVar5[1] = sVar7;
                  puVar5[3] = 0;
                  puVar5[5] = 0;
                  puVar5[10] = param_1;
                  puVar5[2] = local_90.st_nlink;
                  bVar10 = DAT_10017493 != '\0';
                  if (bVar10) {
                    bVar10 = (int)(param_1[0x1d] << 0xb) < 0;
                  }
                  *(byte *)((int)puVar5 + 0x75) = bVar10 << 4 | *(byte *)((int)puVar5 + 0x75) & 0xef
                  ;
                  if ((int)(puVar5[0x1d] << 0xb) < 0) {
                    FUN_00427e30(puVar5);
                  }
                  *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 0x80;
                }
                else {
                  bVar1 = iVar12->render_flags /* was: *(byte *)(iVar12 + 0x74) */;
                  iVar12->render_flags /* was: *(byte *)(iVar12 + 0x74) */ = bVar1 | 2;
                  iVar12->render_flags /* was: *(byte *)(iVar12 + 0x74) */ = bVar1 & 0xf7 | 2;
                }
              }
              else {
                iVar12 = FUN_00413580(param_1,param_3);
                if (iVar12 == 0) {
                  puVar5 = (undefined4 *)FUN_00411b84();
                  if (iVar11 == 0) {
                    pvVar6 = malloc(4);
                    param_1[4] = pvVar6;
                  }
                  else {
                    pvVar6 = realloc((void *)param_1[4],iVar11 * 4 + 4);
                    param_1[4] = pvVar6;
                  }
                  *(undefined4 **)(param_1[4] + iVar11 * 4) = puVar5;
                  *(byte *)((int)puVar5 + 0x29) = *(byte *)((int)puVar5 + 0x29) | 0x80;
                  *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) | 2;
                  uVar2 = FUN_00411d68(param_3);
                  *puVar5 = uVar2;
                  sVar7 = strlen(param_3);
                  puVar5[1] = sVar7;
                  puVar5[2] = local_90.st_nlink;
                  uVar2 = FUN_00433b44(param_2);
                  puVar5[8] = uVar2;
                  param_1[7] = (param_1[7] + local_90.st_blksize) - puVar5[3];
                  uVar2 = FUN_004118b0(param_1);
                  param_1[9] = uVar2;
                  puVar5[3] = local_90.st_blksize;
                  if (DAT_10000184 < local_90.st_blksize) {
                    DAT_10000184 = local_90.st_blksize;
                  }
                  if (DAT_1000018c < (int)param_1[7]) {
                    DAT_1000018c = param_1[7];
                  }
                  puVar5[4] = local_90.st_mtim.tv_sec;
                  FUN_00412400(puVar5);
                    // WARNING: Bad instruction - Truncating control flow here
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004138e8):
     * Function: FUN_004138e8
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares a found directory node's stat fields (dev at +8, ino at +12, mtime at +16) against target values from stack. If all match AND offset +32 is zero, jumps to success. Otherwise, adjusts an offset field and calls a function (likely string operation at GP-32744+6320).
     * 2. **C pseudocode:**
     * ```c
     * // v0 = found node, s2 = search context
     * if (v0 != NULL) {
     * s0 = v0;
     * if (v0->dev == target_dev &&      // +8 vs sp+284
     * v0->ino == target_ino &&      // +12 vs sp+312
     * v0->mtime == target_mtime &&  // +16 vs sp+328
     * v0->field_0x20 == 0) {        // +32
     * goto found_match;
     * }
     * // Adjust offset: s2->offset = s2->field_1c + target_ino - s0->ino
     * s2->field_0x1c = s2->field_0x1c + sp_312 - s0->field_0xc;
     * some_string_func(...);  // jalr to GP-relative function
     * }
     * ```
     * This is stat-based directory matching - comparing device, inode, and mtime to find a directory by its filesystem identity rather than just name.
     */
halt_baddata();
                }
                if (((local_90.st_nlink != *(uint *)(iVar12 + 8)) ||
                    (local_90.st_blksize != iVar12->file_count /* was: *(int *)(iVar12 + 0xc) */)) ||
                   ((local_90.st_mtim.tv_sec != iVar12->file_array /* was: *(int *)(iVar12 + 0x10) */ ||
                    (iVar12->_field_20 /* was: *(int *)(iVar12 + 0x20) */ == 0)))) {
                  param_1[7] = (param_1[7] + local_90.st_blksize) - iVar12->file_count /* was: *(int *)(iVar12 + 0xc) */;
                  uVar2 = FUN_004118b0(param_1);
                  param_1[9] = uVar2;
                  *(__nlink_t *)(iVar12 + 8) = local_90.st_nlink;
                  iVar12->file_count /* was: *(__blksize_t *)(iVar12 + 0xc) */ = local_90.st_blksize;
                  iVar12->file_array /* was: *(__time_t *)(iVar12 + 0x10) */ = local_90.st_mtim.tv_sec;
                  uVar2 = FUN_00433b44(param_2);
                  iVar12->_field_20 /* was: *(undefined4 *)(iVar12 + 0x20) */ = uVar2;
                  if (DAT_10000184 < iVar12->file_count /* was: *(int *)(iVar12 + 0xc) */) {
                    DAT_10000184 = iVar12->file_count /* was: *(int *)(iVar12 + 0xc) */;
                    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
                  }
                  if (DAT_1000018c < (int)param_1[7]) {
                    DAT_1000018c = param_1[7];
                    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
                  }
                  FUN_00412400(iVar12);
                    // WARNING: Bad instruction - Truncating control flow here
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004138e8):
     * Function: FUN_004138e8
     *
     * Looking at this assembly:
     * 1. **What it does:** Calculates a layout offset (t8 + t2 - t4) and stores it in s2[7] (offset 28). Calls a function via GP at offset 6320 with s2 as arg, stores float result at s2[9]. Updates s0[3] with t5, then conditionally updates max values at s6 and s7 if current values exceed stored maxes.
     * 2. **C pseudocode:**
     * ```c
     * s2->offset_x = running_total + width_accum - child->width;  // s2[7] = t8+t2-t4
     * s2->text_width = calc_text_width(s2);  // jalr to gp[-32744]+6320, result in f0
     * parent->current_offset = width_accum;  // s0[3] = t5
     * if (*max_y < width_accum)      // s6[0] < t5
     * *max_y = width_accum;
     * x_pos = s2->offset_x;          // s2[7]
     * if (*max_x < x_pos)            // s7[0] < v0
     * *max_x = x_pos;
     * parent->depth = stack_val;     // s0[4] = sp[328]
     * ```
     * The GP indirect call at offset 6320 is likely `strwidth()` or similar text measurement function (returns float width in $f0). The s6/s7 registers track maximum extents for bounding box calculation during directory tree layout.
     */
halt_baddata();
                }
                *(byte *)(iVar12 + 0x29) = *(byte *)(iVar12 + 0x29) | 0x80;
              }
            }
          }
          pdVar4 = readdir(local_4);
        }
        iVar12 = 0;
        closedir(local_4);
        FUN_00411998();
        param_1[3] = iVar11;
        param_1[5] = iVar3;
        if (0 < iVar11) {
          iVar3 = 0;
          do {
            iVar11 = *(int *)(param_1[4] + iVar3);
            if (-1 < *(char *)(iVar11 + 0x29)) {
              iVar11->child_center /* was: *(byte *)(iVar11 + 0x28) */ = iVar11->child_center /* was: *(byte *)(iVar11 + 0x28) */ | 1;
              *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
            }
            iVar12 = iVar12 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar12 < (int)param_1[3]);
        }
        iVar11 = param_1[5];
        iVar3 = 0;
        if (0 < iVar11) {
          do {
            iVar12 = *(int *)(param_1[6] + iVar3);
            if (iVar12->render_flags /* was: *(int *)(iVar12 + 0x74) */ << 6 < 0) {
              if ((param_4 != '\0') || (iVar12->render_flags /* was: *(int *)(iVar12 + 0x74) */ << 4 < 0)) {
                uVar14 = FUN_004138e8(iVar12,param_2,param_3);
                *(byte *)((int)param_1 + 0x75) =
                     (byte)(((uint)(param_1[0x1d] << 9) >> 0x1f | uVar14 & 1) << 6) |
                     *(byte *)((int)param_1 + 0x75) & 0xbf;
                iVar11 = param_1[5];
              }
            }
            else {
              iVar12->render_flags /* was: *(byte *)(iVar12 + 0x74) */ = iVar12->render_flags /* was: *(byte *)(iVar12 + 0x74) */ | 4;
              iVar11 = param_1[5];
              *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 0x80;
            }
            iVar3 = iVar3 + 4;
          } while (iVar3 < iVar11 << 2);
        }
        FUN_00411998();
        deleteMessage(uVar2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004138e8):
     * Function: FUN_004138e8
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Sets a flag byte at offset 117 of s2 struct (ORs in 0x80)
     * 2. Calls function via GP-32540 with path argument, branches back if result non-zero
     * 3. If result is zero: calls GP-32552 (likely free/cleanup), then GP-31368 (likely sync/update)
     * 4. Stores s5 and s8 into struct at offsets 12 and 20, then loops through array at offset 16
     * **C pseudocode:**
     * ```c
     * s2->flags[117] |= 0x80;                    // Mark directory flag
     * result = findDirByName(path);              // GP-32540: lookup function
     * if (result != NULL) {
     * s1 = result;
     * goto found_label;                      // Branch back to 413c68
     * }
     * s3 = NULL;
     * free(path);                                // GP-32552: cleanup path string
     * syncFilesystem();                          // GP-31368: sync/refresh
     * s2->child_count = s5;                      // offset 12: number of children
     * s2->some_ptr = s8;                         // offset 20: related pointer
     * if (s5 > 0) {
     * for (i = 0; i < s5; i++) {
     * child = s2->children[i];           // offset 16: children array
     * // ... process each child
     * }
     * }
     * ```
     * **GP offset resolution needed:** -32540, -32552, -31368 — use `resolve_got.py` to identify exact functions.
     */
halt_baddata();
}
