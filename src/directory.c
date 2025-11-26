/**
 * directory.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "directory.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setup_directory_handler(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  ushort *local_28;
  undefined4 local_24;
  uint local_20;
  ushort local_2;
  
  if (view_mode_flags == '\0') {
    gl_swap_buffers(1);
    setup_context_widgets();
    view_mode_flags = '\x01';
    gl_swap_buffers(1);
  }
  local_28 = &local_2;
  local_2c = 0xf66160a;
  XtGetValues(context_top_widget,&local_2c,1);
  local_28 = (ushort *)(uint)(local_2 >> 1);
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_20 = (uint)local_28;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0xc));
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_28 = (ushort *)0x1;
  local_20 = 1000;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  altcontext[0xc51] = 1;
  uVar1 = XtDisplay(*(undefined4 *)(altcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(altcontextwindows + 0x28));
  XMapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(curcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  uVar1 = XtDisplay(*(undefined4 *)(curcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(curcontextwindows + 0x28));
  XUnmapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(altcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  gl_swap_buffers(1);
  draw_mark_overlay();
  gl_swap_buffers(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_directory_data(int param_1)

{
  if (((displayHeight != 0) && (displayHeight != 1)) && (displayHeight == 2)) {
    powf((float)param_1,display_height_exponent);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void create_directory_entry(void)

{
  void *pvVar1;
  
  if ((file_memory_pool_ptr == 0) || (file_pool_limit <= file_memory_pool_ptr)) {
    pvVar1 = calloc(100,0x2c);
    file_pool_limit = (int)pvVar1 + 0x1130;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void allocate_directory_entry(void)

{
  if ((directory_memory_pool == (void *)0x0) || (directory_pool_limit <= directory_memory_pool)) {
    directory_memory_pool = calloc(0x40,0x78);
    directory_pool_limit = (void *)((int)directory_memory_pool + 0x1e00);
    if (directory_pool_index == 0) {
      dir_index = malloc(0x40);
      directory_pool_capacity = 0x10;
    }
    else if (directory_pool_index == directory_pool_capacity) {
      directory_pool_capacity = directory_pool_capacity + 0x10;
      dir_index = realloc(dir_index,directory_pool_capacity * 4);
    }
    *(void **)((int)dir_index + directory_pool_index * 4) = directory_memory_pool;
    directory_pool_index = directory_pool_index + 1;
  }
  *(undefined4 *)((int)directory_memory_pool + 0x5c) = dir_entry_initial_value;
  directory_memory_pool = (void *)((int)directory_memory_pool + 0x78);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void count_directory_items(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_directory_layout(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte in_fcsr;
  int local_1c [7];
  
  fVar1 = (float)*(int *)(param_1 + 0xc) * item_scale_factor;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  iVar5 = (int)fVar1;
  bzero(local_1c,0x1c);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + iVar3);
      iVar3 = iVar3 + 4;
      piVar4 = local_1c + (*(uint *)(*piVar4 + 0x28) >> 0x1d);
      *piVar4 = *piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  if (iVar5 < local_1c[0]) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else if (iVar5 < local_1c[1]) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else if (iVar5 < local_1c[2]) {
    *(undefined4 *)(param_1 + 0x68) = 2;
  }
  else if (iVar5 < local_1c[3]) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  else if (iVar5 < local_1c[4]) {
    *(undefined4 *)(param_1 + 0x68) = 4;
  }
  else if (iVar5 < local_1c[5]) {
    *(undefined4 *)(param_1 + 0x68) = 5;
  }
  else if (iVar5 < local_1c[6]) {
    *(undefined4 *)(param_1 + 0x68) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 7;
  }
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

void init_directory_layout(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  double dVar4;
  float fVar5;
  float fVar6;
  uint unaff_000010b0;
  uint in_fcsr;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x10;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(unaff_gp + -0x7ef8))((double)(*(int *)(param_1 + 0xc) + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar4 = ROUND(dVar4);
    }
    else {
      dVar4 = FLOOR(dVar4);
    }
    iVar3 = (int)dVar4 + 1;
  }
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74));
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)iVar3 *
                ((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74)));
  }
  fVar5 = *(float *)(iVar2 + 0x74);
  fVar6 = *(float *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar5 = (float)((double)(1 - iVar3) *
                  ((double)fVar6 + (double)((ulonglong)unaff_000010b0 << 0x20) * (double)fVar5) *
                 (double)((ulonglong)(double)fVar6 & 0xffffffff00000000));
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar3 = *(int *)(unaff_gp + -0x7fe8);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    (*(code *)(iVar3 + 0x2234))(param_1);
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x18c);
    if (*piVar1 < *(int *)(param_1 + 0x1c)) {
      *piVar1 = *(int *)(param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      (**(code **)(unaff_gp + -0x7a70))(**(undefined4 **)(param_1 + 0x18));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar3 = **(int **)(param_1 + 0x10);
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 4;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar3 + 0xc);
  *(float *)(iVar3 + 0x14) = fVar5;
  *(float *)(iVar3 + 0x18) = fVar5;
  (**(code **)(unaff_gp + -0x7a74))(iVar3);
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

void find_directory_by_path(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_80 [30];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8[0] = local_80;
    local_80[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08))
              (local_8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),4,
               *(undefined4 *)(unaff_gp + -0x7a60));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void mark_directory_item(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar1);
      iVar1 = iVar1 + 4;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
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

void process_child_directory(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
      sVar7 = *(size_t *)(param_1 + 0xc);
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = *(int **)(param_1 + 0x10);
        iVar12 = 0;
        do {
          iVar4 = *piVar6;
          if (iVar11 < (int)sVar7) {
            bVar1 = *(byte *)(iVar4 + 0x28);
            iVar10 = iVar11 + 1;
            if ((bVar1 & 1) != 0) {
              bVar2 = true;
              do {
                *(byte *)(iVar4 + 0x28) = bVar1 & 0xfb;
                iVar8 = *(int *)(param_1 + 0xc);
                iVar3 = iVar10 * 4;
                iVar4 = iVar10;
                if (iVar10 < iVar8) {
                  do {
                    iVar4 = iVar4 + 1;
                    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3);
                    iVar3 = iVar3 + 4;
                    puVar5[-1] = *puVar5;
                    iVar8 = *(int *)(param_1 + 0xc);
                  } while (iVar4 < iVar8);
                }
                sVar7 = iVar8 - 1;
                *(size_t *)(param_1 + 0xc) = sVar7;
                piVar6 = (int *)(*(int *)(param_1 + 0x10) + iVar12);
                iVar4 = *piVar6;
              } while ((iVar11 < (int)sVar7) && (bVar1 = *(byte *)(iVar4 + 0x28), (bVar1 & 1) != 0))
              ;
            }
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x10);
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = *(size_t *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0x10) = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = *(size_t *)(param_1 + 0xc);
          *(void **)(param_1 + 0x10) = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_files);
    }
    if (*(char *)(param_1 + 0x75) < '\0') {
      sVar7 = *(size_t *)(param_1 + 0x14);
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = *(int **)(param_1 + 0x18);
        iVar12 = 0;
        do {
          if ((iVar11 < (int)sVar7) && (iVar4 = iVar11 + 1, *(int *)(*piVar6 + 0x74) << 5 < 0)) {
            bVar2 = true;
            do {
              free_child_nodes();
              iVar8 = *(int *)(param_1 + 0x14);
              iVar3 = iVar4 * 4;
              iVar10 = iVar4;
              if (iVar4 < iVar8) {
                do {
                  iVar10 = iVar10 + 1;
                  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3);
                  iVar3 = iVar3 + 4;
                  puVar5[-1] = *puVar5;
                  iVar8 = *(int *)(param_1 + 0x14);
                } while (iVar10 < iVar8);
              }
              sVar7 = iVar8 - 1;
              *(size_t *)(param_1 + 0x14) = sVar7;
              piVar6 = (int *)(*(int *)(param_1 + 0x18) + iVar12);
            } while ((iVar11 < (int)sVar7) && (*(int *)(*piVar6 + 0x74) << 5 < 0));
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = *(size_t *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x18) = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = *(size_t *)(param_1 + 0x14);
          *(void **)(param_1 + 0x18) = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_dirs);
    }
    if (*(int *)(param_1 + 0x74) << 9 < 0) {
      iVar11 = 0;
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          process_child_directory(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar12));
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < *(int *)(param_1 + 0x14));
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

void init_directory_state(void)

{
  size_t sVar1;
  int iVar2;
  char acStack_8 [8];
  
  sVar1 = fread(acStack_8,1,6,current_file);
  if ((sVar1 == 6) && (iVar2 = strncmp(acStack_8,"FuSioN",6), iVar2 == 0)) {
    if (__iob_func_result == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        current_input_byte = __filbuf();
      }
      else {
        current_input_byte = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      current_input_byte = __semgetc(current_file);
    }
    if ((2 < (int)current_input_byte) || ((int)current_input_byte < 0)) {
      fprintf((FILE *)0xfb52904,"unknown database version %d, quitting\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  else {
    rewind(current_file);
    current_input_byte = 0;
  }
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

void refresh_directory_view(int param_1)

{
  int iVar1;
  int unaff_gp;
  undefined1 auStack_400 [1024];
  
  (**(code **)(unaff_gp + -0x7a84))(auStack_400,*(undefined4 *)(param_1 + 0x28));
  iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x38e8))
                    (param_1,auStack_400,auStack_400 + iVar1,0);
  if (iVar1 != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x44ec))(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directory(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_var;
  double dVar5;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_2 + 0x74) << 3 < 0) {
    uStack_18 = 0xbd4ccccd;
    if ((((*(uint *)(param_2 + 0x74) >> 0x1e & curcontextflag) != 0) ||
        ((int)(*(uint *)(param_2 + 0x74) << 2) < 0)) || ((*(ushort *)(param_2 + 0x74) & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uStack_c = uStack_18;
    if (*(short *)(param_2 + 0x76) < 0) {
      pushmatrix();
      draw_scaled_element(param_1 & 0xffffffff00000000,
                   (double)maxy * (double)((ulonglong)extraout_var << 0x20));
      popmatrix();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_2 + 0x18) + iVar4);
        if (*(int *)(iVar3 + 0x74) << 3 < 0) {
          process_tree_node(iVar3,param_3);
          pushname((int)*(short *)(iVar3 + 0x5e));
          uVar2 = dir_type_icon;
          if ((-1 < *(int *)(iVar3 + 0x74) << 2) &&
             (uVar2 = file_type_icon, *(int *)(iVar3 + 0x74) << 0xd < 0)) {
            uVar2 = directory_color_active;
          }
          cpack(uVar2);
          dVar5 = (double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar3 + 0x4c);
          fStack_14 = (float)dVar5;
          fStack_10 = *(float *)(param_2 + 0x38) + *(float *)(iVar3 + 0x50);
          uStack_20 = *(undefined4 *)(iVar3 + 0x34);
          fStack_1c = (float)((double)*(float *)(iVar3 + 0x38) -
                             (double)*(float *)(iVar3 + 0x3c) /
                             (double)((ulonglong)dVar5 & 0xffffffff00000000));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(3);
          }
          bgnline();
          v3f(&fStack_14);
          v3f(&uStack_20);
          endline();
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(1);
          }
          if ((param_3 == '\0') &&
             ((*(int *)(param_2 + 0x74) << 2 < 0 || (*(int *)(iVar3 + 0x74) << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          popname();
          iVar1 = *(int *)(param_2 + 0x14);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_visible_directory(int param_1)

{
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~curcontextflag) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void render_directory(int param_1)

{
  int unaff_gp;
  
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~**(uint **)(unaff_gp + -0x7670)) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directory_tree(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x74) =
       (byte)((*(uint *)(param_1 + 0x74) >> 0x1e | **(uint **)(unaff_gp + -0x7670)) << 6) |
       *(byte *)(param_1 + 0x74) & 0x3f;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      (**(code **)(unaff_gp + -0x7930))(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
