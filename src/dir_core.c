/**
 * dir_core.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "dir_core.h"
#include "fsn_types.h"
#include "fsn_state.h"

void validate_directory(int param_1)

{
  if (displayHeight == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  process_directory_data(*(undefined4 *)(param_1 + 0xc));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void index_to_dir(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_directory_bounds(int param_1)

{
  int unaff_gp;
  undefined4 uVar1;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1804))();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void compare_dirs(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void validate_directory_access(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_34 [11];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8[0] = local_34;
    local_34[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08))
              (local_8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),4,
               *(undefined4 *)(unaff_gp + -0x7a64));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void finddir(int param_1,undefined4 param_2)

{
  undefined4 auStack_80 [30];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    apuStack_8[0] = auStack_80;
    auStack_80[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x14),4,compare_dirs);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void cleanup_directory(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  undefined1 local_400 [1024];
  
  local_400[0] = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(unaff_gp + -0x7a84))(local_400);
  }
  iVar1 = (**(code **)(unaff_gp + -0x7c20))(local_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x38e8))(param_1,local_400,local_400 + iVar1,1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(unaff_gp + -0x7a98))(*(int *)(unaff_gp + -0x7fa4) + -0x5804,0);
    (**(code **)(unaff_gp + -0x7a88))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x44ec))(param_1);
    (**(code **)(unaff_gp + -0x7a9c))(uVar2);
    (**(code **)(unaff_gp + -0x7a78))();
  }
  (**(code **)(unaff_gp + -0x79b8))();
  (**(code **)(unaff_gp + -0x7acc))();
  (**(code **)(unaff_gp + -0x7880))();
  (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x4da4))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void create_root_directory(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  statvfs asStack_124 [2];
  stat local_88;
  
  uVar1 = set_status_message("no database available...building...please wait",0);
  process_pending_events();
  iVar2 = lstat(param_1,&local_88);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot stat %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if ((local_88.st_nlink & 0xf000) != 0x4000) {
    fprintf((FILE *)0xfb52904,"%s must be a directory\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  current_device_id = local_88.st_dev._0_4_;
  iVar2 = statvfs(param_1,asStack_124);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot statvfs %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
  localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
  topdir = (undefined4 *)allocate_directory_entry();
  uVar3 = hash_filename(param_1);
  *topdir = uVar3;
  sVar4 = strlen(param_1);
  topdir[1] = sVar4;
  topdir[3] = 0;
  topdir[5] = 0;
  topdir[10] = 0;
  *(byte *)(topdir + 0x1d) = *(byte *)(topdir + 0x1d) | 2;
  cleanup_directory(topdir);
  set_status_message("file system database built",2000);
  deleteMessage(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_directory_info(uint param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_448 [52];
  undefined1 auStack_414 [1044];
  
  process_pending_events();
  puVar3 = (undefined4 *)allocate_directory_entry();
  puVar4 = (undefined4 *)(**(code **)(vinfop + 8))(auStack_414);
  if (param_1 != *(byte *)((int)puVar4 + 10)) {
    fprintf((FILE *)0xfb52904,"invalid depth: expected %d got %d: %s\n",param_1,
            (uint)*(byte *)((int)puVar4 + 10),auStack_414);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  param_1 = param_1 + 1;
  uVar5 = hash_filename(auStack_414);
  *puVar3 = uVar5;
  puVar3[1] = (uint)*(ushort *)(puVar4 + 1);
  puVar3[2] = *puVar4;
  puVar3[3] = (uint)*(ushort *)(puVar4 + 2);
  uVar2 = *(ushort *)((int)puVar4 + 6);
  *(byte *)(puVar3 + 0x1d) = *(byte *)(puVar3 + 0x1d) | 2;
  puVar3[5] = (uint)uVar2;
  bVar1 = *(byte *)((int)puVar4 + 0xb);
  if ((bVar1 & 1) != 0) {
    *(byte *)((int)puVar3 + 0x75) = *(byte *)((int)puVar3 + 0x75) | 4;
    bVar1 = *(byte *)((int)puVar4 + 0xb);
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)puVar3 + 0x75) = *(byte *)((int)puVar3 + 0x75) | 0x10;
  }
  if (puVar3[3] == 0) {
    puVar3[4] = 0;
  }
  else {
    pvVar6 = malloc(puVar3[3] << 2);
    puVar3[4] = pvVar6;
  }
  if (puVar3[5] == 0) {
    puVar3[6] = 0;
  }
  else {
    pvVar6 = malloc(puVar3[5] << 2);
    puVar3[6] = pvVar6;
  }
  puVar3[10] = param_2;
  iVar9 = 0;
  if (0 < (int)puVar3[3]) {
    iVar8 = 0;
    do {
      puVar4 = (undefined4 *)create_directory_entry();
      *(undefined4 **)(puVar3[4] + iVar8) = puVar4;
      puVar7 = (undefined4 *)(**(code **)(vinfop + 0xc))(auStack_414,auStack_448);
      if (param_1 != *(byte *)(puVar7 + 4)) {
        fprintf((FILE *)0xfb52904,"invalid depth: expected %d got %d: %s\n",param_1,
                (uint)*(byte *)(puVar7 + 4),auStack_414);
                    // WARNING: Subroutine does not return
        exit(1);
      }
      uVar5 = hash_filename(auStack_414);
      *puVar4 = uVar5;
      puVar4[1] = (uint)*(ushort *)(puVar7 + 3);
      puVar4[2] = puVar7[2];
      puVar4[3] = *puVar7;
      puVar4[4] = puVar7[1];
      uVar5 = eval_icon_script(auStack_448);
      puVar4[8] = uVar5;
      *(byte *)((int)puVar4 + 0x29) = *(byte *)((int)puVar4 + 0x29) | 0x80;
      if (window_width < (int)puVar4[3]) {
        window_width = puVar4[3];
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < (int)puVar3[3]);
  }
  iVar8 = 0;
  iVar9 = 0;
  if (0 < (int)puVar3[5]) {
    do {
      uVar5 = get_directory_info(param_1,puVar3);
      *(undefined4 *)(puVar3[6] + iVar9) = uVar5;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar8 < (int)puVar3[5]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void updateDir(int param_1)

{
  size_t sVar1;
  int iVar2;
  char acStack_400 [1024];
  
  build_path_string(acStack_400,*(undefined4 *)(param_1 + 0x28));
  sVar1 = strlen(acStack_400);
  iVar2 = check_directory_flags(param_1,acStack_400,acStack_400 + sVar1,0);
  if (iVar2 != 0) {
    process_child_directory(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void add_directory_monitor(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') && (-1 < *(int *)(param_1 + 0x74) << 10)) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7718))(*(int *)(unaff_gp + -0x7f94) + 0x6c70,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
