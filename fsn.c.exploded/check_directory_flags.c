/**
 * check_directory_flags
 *
 * Extracted from fsn.c lines 40060-40322
 * Category: Filesystem
 */

void check_directory_flags(undefined4 *param_1,char *param_2,char *param_3,char param_4)

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
  
  process_pending_events();
  if (-1 < (int)(param_1[0x1d] << 0xd)) {
    bVar1 = *(byte *)((int)param_1 + 0x75);
    *(byte *)((int)param_1 + 0x75) = bVar1 & 0x7f;
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe;
    *(byte *)((int)param_1 + 0x75) = bVar1 & 0x3f;
    strcpy(param_3,(char *)*param_1);
    uVar2 = display_scan_status("scanning",param_2,0);
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
      if (local_90.st_dev._0_4_ != current_device_id) {
        iVar3 = statvfs(param_2,asStack_12c);
        if (iVar3 < 0) {
          *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 4;
          deleteMessage(uVar2);
          halt_baddata();
        }
        if ((localFlag != (asStack_12c[0].__f_spare[1] & 0x80000000U)) ||
           (iVar3 = strcmp((char *)&asStack_12c[0].__f_unused,fstyp), iVar3 != 0)) {
          deleteMessage(uVar2);
          mark_directory_item(param_1);
          halt_baddata();
        }
        current_device_id = local_90.st_dev._0_4_;
      }
      local_4 = opendir(param_2);
      if (local_4 == (DIR *)0x0) {
        deleteMessage(uVar2);
        mark_directory_item(param_1);
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
            process_pending_events();
          }
          __s1 = &pdVar4->d_type;
          if (((pdVar4->d_ino != 0) && (iVar12 = strcmp((char *)__s1,"."), iVar12 != 0)) &&
             (iVar12 = strcmp((char *)__s1,".."), iVar12 != 0)) {
            strncpy(param_3,(char *)__s1,(uint)pdVar4->d_reclen);
            param_3[pdVar4->d_reclen] = '\0';
            iVar12 = lstat(param_2,&local_90);
            if (-1 < iVar12) {
              if ((local_90.st_nlink & 0xf000) == 0x4000) {
                iVar12 = find_directory_by_path(param_1,param_3);
                if (iVar12 == 0) {
                  iVar12 = iVar3 * 4;
                  puVar5 = (undefined4 *)allocate_directory_entry();
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
                  uVar8 = hash_filename(param_3);
                  *puVar5 = uVar8;
                  sVar7 = strlen(param_3);
                  puVar5[1] = sVar7;
                  puVar5[3] = 0;
                  puVar5[5] = 0;
                  puVar5[10] = param_1;
                  puVar5[2] = local_90.st_nlink;
                  bVar10 = special_display_flag != '\0';
                  if (bVar10) {
                    bVar10 = (int)(param_1[0x1d] << 0xb) < 0;
                  }
                  *(byte *)((int)puVar5 + 0x75) = bVar10 << 4 | *(byte *)((int)puVar5 + 0x75) & 0xef
                  ;
                  if ((int)(puVar5[0x1d] << 0xb) < 0) {
                    add_directory_monitor(puVar5);
                  }
                  *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 0x80;
                }
                else {
                  bVar1 = *(byte *)(iVar12 + 0x74);
                  *(byte *)(iVar12 + 0x74) = bVar1 | 2;
                  *(byte *)(iVar12 + 0x74) = bVar1 & 0xf7 | 2;
                }
              }
              else {
                iVar12 = validate_directory_access(param_1,param_3);
                if (iVar12 == 0) {
                  puVar5 = (undefined4 *)create_directory_entry();
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
                  uVar2 = hash_filename(param_3);
                  *puVar5 = uVar2;
                  sVar7 = strlen(param_3);
                  puVar5[1] = sVar7;
                  puVar5[2] = local_90.st_nlink;
                  uVar2 = expand_path(param_2);
                  puVar5[8] = uVar2;
                  param_1[7] = (param_1[7] + local_90.st_blksize) - puVar5[3];
                  uVar2 = calculate_layout_position(param_1);
                  param_1[9] = uVar2;
                  puVar5[3] = local_90.st_blksize;
                  if (window_width < local_90.st_blksize) {
                    window_width = local_90.st_blksize;
                  }
                  if (window_height < (int)param_1[7]) {
                    window_height = param_1[7];
                  }
                  puVar5[4] = local_90.st_mtim.tv_sec;
                  update_directory_bounds(puVar5);
                    // WARNING: Bad instruction - Truncating control flow here
                  halt_baddata();
                }
                if (((local_90.st_nlink != *(uint *)(iVar12 + 8)) ||
                    (local_90.st_blksize != *(int *)(iVar12 + 0xc))) ||
                   ((local_90.st_mtim.tv_sec != *(int *)(iVar12 + 0x10) ||
                    (*(int *)(iVar12 + 0x20) == 0)))) {
                  param_1[7] = (param_1[7] + local_90.st_blksize) - *(int *)(iVar12 + 0xc);
                  uVar2 = calculate_layout_position(param_1);
                  param_1[9] = uVar2;
                  *(__nlink_t *)(iVar12 + 8) = local_90.st_nlink;
                  *(__blksize_t *)(iVar12 + 0xc) = local_90.st_blksize;
                  *(__time_t *)(iVar12 + 0x10) = local_90.st_mtim.tv_sec;
                  uVar2 = expand_path(param_2);
                  *(undefined4 *)(iVar12 + 0x20) = uVar2;
                  if (window_width < *(int *)(iVar12 + 0xc)) {
                    window_width = *(int *)(iVar12 + 0xc);
                    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
                  }
                  if (window_height < (int)param_1[7]) {
                    window_height = param_1[7];
                    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
                  }
                  update_directory_bounds(iVar12);
                    // WARNING: Bad instruction - Truncating control flow here
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
        process_pending_events();
        param_1[3] = iVar11;
        param_1[5] = iVar3;
        if (0 < iVar11) {
          iVar3 = 0;
          do {
            iVar11 = *(int *)(param_1[4] + iVar3);
            if (-1 < *(char *)(iVar11 + 0x29)) {
              *(byte *)(iVar11 + 0x28) = *(byte *)(iVar11 + 0x28) | 1;
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
            if (*(int *)(iVar12 + 0x74) << 6 < 0) {
              if ((param_4 != '\0') || (*(int *)(iVar12 + 0x74) << 4 < 0)) {
                uVar14 = check_directory_flags(iVar12,param_2,param_3);
                *(byte *)((int)param_1 + 0x75) =
                     (byte)(((uint)(param_1[0x1d] << 9) >> 0x1f | uVar14 & 1) << 6) |
                     *(byte *)((int)param_1 + 0x75) & 0xbf;
                iVar11 = param_1[5];
              }
            }
            else {
              *(byte *)(iVar12 + 0x74) = *(byte *)(iVar12 + 0x74) | 4;
              iVar11 = param_1[5];
              *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 0x80;
            }
            iVar3 = iVar3 + 4;
          } while (iVar3 < iVar11 << 2);
        }
        process_pending_events();
        deleteMessage(uVar2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
