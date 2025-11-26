/**
 * file_ops.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "file_ops.h"
#include "fsn_types.h"
#include "fsn_state.h"

void filemessage(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char acStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  set_status_message(acStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fileerror(char *param_1,char *param_2)

{
  char acStack_434 [1076];
  
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  show_error_message(acStack_434);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void hash_filename(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if ((string_copy_buffer == (void *)0x0) || (string_buffer_limit <= (int)string_copy_buffer + sVar1 + 1)) {
    string_copy_buffer = malloc(10000);
    string_buffer_limit = (int)string_copy_buffer + 10000;
  }
  bcopy(param_1,string_copy_buffer,sVar1 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calculate_file_view(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = validate_directory();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void compare_files(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findfile(int param_1,undefined4 param_2)

{
  undefined4 auStack_34 [11];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    apuStack_8[0] = auStack_34;
    auStack_34[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0xc),4,compare_files);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void write_file_entry(FILE *param_1)

{
  int iVar1;
  undefined1 auStack_3c [56];
  undefined2 local_4;
  undefined1 local_2;
  
  if (__iob_func_result == 0) {
    iVar1 = param_1->_flags + -1;
    param_1->_flags = iVar1;
    if (iVar1 < 0) {
      __flsbuf(5,param_1);
    }
    else {
      *param_1->_IO_read_ptr = '\x05';
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
    }
  }
  else {
    __semputc(5,param_1);
  }
  local_4 = (undefined2)curcontextid;
  local_2 = curcontext[0xc51];
  fwrite(&local_4,4,1,param_1);
  get_view_position(auStack_3c);
  copy_selection_data(auStack_3c,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fileChanged(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  stat sStack_90;
  char *pcStack_8;
  
  iVar1 = validate_directory_access();
  if (iVar1 != 0) {
    pcStack_8 = (char *)build_path_string(0,param_1);
    strcat(pcStack_8,param_2);
    iVar2 = lstat(pcStack_8,&sStack_90);
    if (-1 < iVar2) {
      if (((sStack_90.st_nlink != *(__nlink_t *)(iVar1 + 8)) ||
          (sStack_90.st_blksize != *(int *)(iVar1 + 0xc))) ||
         (sStack_90.st_mtim.tv_sec != *(int *)(iVar1 + 0x10))) {
        *(int *)(param_1 + 0x1c) =
             (*(int *)(param_1 + 0x1c) + sStack_90.st_blksize) - *(int *)(iVar1 + 0xc);
        uVar3 = calculate_layout_position(param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        *(__nlink_t *)(iVar1 + 8) = sStack_90.st_nlink;
        *(__blksize_t *)(iVar1 + 0xc) = sStack_90.st_blksize;
        *(__time_t *)(iVar1 + 0x10) = sStack_90.st_mtim.tv_sec;
        uVar3 = expand_path(pcStack_8);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
        if (window_width < *(int *)(iVar1 + 0xc)) {
          window_width = *(int *)(iVar1 + 0xc);
        }
        if (window_height < *(int *)(param_1 + 0x1c)) {
          window_height = *(int *)(param_1 + 0x1c);
        }
        update_directory_bounds(iVar1);
        update_directory_layout(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    sVar1 = strlen(pcStack_c);
    __dest = pcStack_c + sVar1;
    strcpy(__dest,param_2);
    iVar2 = lstat(pcStack_c,&sStack_94);
    if (-1 < iVar2) {
      bVar6 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar6 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar6 & 0x3f;
      if ((sStack_94.st_nlink & 0xf000) == 0x4000) {
        iVar2 = find_directory_by_path(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)allocate_directory_entry();
          if (*(int *)(param_1 + 0x14) == 0) {
            pvVar4 = malloc(4);
            *(void **)(param_1 + 0x18) = pvVar4;
          }
          else {
            pvVar4 = realloc(*(void **)(param_1 + 0x18),*(int *)(param_1 + 0x14) * 4 + 4);
            *(void **)(param_1 + 0x18) = pvVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puVar3;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          bVar6 = *(byte *)(puVar3 + 0x1d);
          *(byte *)(puVar3 + 0x1d) = bVar6 | 8;
          *(byte *)(puVar3 + 0x1d) = bVar6 | 10;
          uVar5 = hash_filename(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[3] = 0;
          puVar3[5] = 0;
          puVar3[10] = param_1;
          puVar3[2] = sStack_94.st_nlink;
          bVar7 = special_display_flag != '\0';
          if (bVar7) {
            bVar7 = *(int *)(param_1 + 0x74) << 0xb < 0;
          }
          *(byte *)((int)puVar3 + 0x75) = bVar7 << 4 | *(byte *)((int)puVar3 + 0x75) & 0xef;
          if ((int)(puVar3[0x1d] << 0xb) < 0) {
            add_directory_monitor(puVar3);
          }
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x80;
          bVar6 = check_directory_flags(puVar3,pcStack_c,__dest,0);
          *(byte *)(param_1 + 0x75) = (bVar6 & 1) << 6 | *(byte *)(param_1 + 0x75) & 0xbf;
          if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
            process_child_directory(param_1);
          }
        }
      }
      else {
        clear_selection_state();
        iVar2 = validate_directory_access(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)create_directory_entry();
          if (*(int *)(param_1 + 0xc) == 0) {
            pvVar4 = malloc(4);
            *(void **)(param_1 + 0x10) = pvVar4;
          }
          else {
            pvVar4 = realloc(*(void **)(param_1 + 0x10),*(int *)(param_1 + 0xc) * 4 + 4);
            *(void **)(param_1 + 0x10) = pvVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 4) = puVar3;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 2;
          *(byte *)((int)puVar3 + 0x29) = *(byte *)((int)puVar3 + 0x29) | 0x80;
          uVar5 = hash_filename(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[2] = sStack_94.st_nlink;
          uVar5 = expand_path(pcStack_c);
          puVar3[8] = uVar5;
          *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + sStack_94.st_blksize) - puVar3[3];
          uVar5 = calculate_layout_position(param_1);
          *(undefined4 *)(param_1 + 0x24) = uVar5;
          puVar3[3] = sStack_94.st_blksize;
          if (window_width < sStack_94.st_blksize) {
            window_width = sStack_94.st_blksize;
          }
          if (window_height < *(int *)(param_1 + 0x1c)) {
            window_height = *(int *)(param_1 + 0x1c);
          }
          puVar3[4] = sStack_94.st_mtim.tv_sec;
          update_directory_bounds(puVar3);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        handle_item_action(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fileDeleted(int param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  stat sStack_94;
  char *pcStack_c;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    strcat(pcStack_c,param_2);
    iVar1 = lstat(pcStack_c,&sStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar2 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = validate_directory_access(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = find_directory_by_path(param_1,param_2);
        if (iVar1 != 0) {
          bVar2 = *(byte *)(iVar1 + 0x74) & 0xfd;
          *(byte *)(iVar1 + 0x74) = bVar2;
          *(byte *)(iVar1 + 0x74) = bVar2 | 4;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x7f | 0x80;
        }
      }
      else {
        *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0x7f;
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfe | 1;
        *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
      }
      if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
        process_child_directory(param_1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fileExecuting(int param_1)

{
  int iVar1;
  
  iVar1 = validate_directory_access();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    set_icon_flags(*(undefined4 *)(iVar1 + 0x20),1,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7 | 8;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fileStoppedExecuting(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = validate_directory_access();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    set_icon_flags(*(undefined4 *)(iVar1 + 0x20),0,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
  }
  update_item_state(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char *pcVar1;
  char *__s1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_464 [1124];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    sprintf(acStack_464,"Don\'t know how to %s current selection",param_5);
    show_error_message(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      show_error_message(acStack_464);
    }
    else {
      __s1 = (char *)get_icon_attribute(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        show_error_message(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (wineditor_enabled != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            copy_file_item(param_1,param_2);
            halt_baddata();
          }
        }
        display_scan_status(param_6,pcVar1,2000);
        if (rest_mode_enabled != '\0') {
          sVar2 = strlen("REST=");
          XtMalloc(sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        sprintf(acStack_464,"LEADER=%s",pcVar1);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_dir_path != (char *)0x0) {
          XtFree(current_dir_path);
        }
        current_dir_path = pcVar1;
        uVar4 = get_icon_string(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_file_path != (char *)0x0) {
          XtFree(current_file_path);
        }
        current_file_path = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        update_status_display(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gotoFileName(undefined4 param_1)

{
  int iStack_8;
  int iStack_4;
  
  get_position_coords(param_1,&iStack_4,&iStack_8);
  if (iStack_4 != 0) {
    update_marked_item();
    if (iStack_8 != 0) {
      get_item_screen_coords();
    }
    update_gl_context();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
              undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  undefined *puVar5;
  uint extraout_var;
  undefined4 uVar6;
  undefined8 in_f4;
  double dVar7;
  char cStackX_f;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar6 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = get_selection_string();
      setpattern((int)sVar4);
    }
    bVar1 = curcontext[0xc50] != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = overlay_mode_flag != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    pushmatrix();
    translate(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      cpack(0);
      pushmatrix();
      iVar2 = param_2[1];
      if (max_scale_limit < (int)param_2[1]) {
        iVar2 = max_scale_limit;
      }
      dVar7 = (double)iVar2 * (double)CONCAT44(uVar6,0xeb851eb8);
      translate((float)dVar7,
                (float)((double)-view_offset_x /
                        (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                       (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x9999999a)),iVar2,
                &fsn_resources,0x3cf5c28f);
      rotate((int)-*(short *)(curcontext + 0xe),0x78);
      scale(0x3c23d70a,0x3c23d70a);
      if (max_scale_limit < (int)param_2[1]) {
        scale((float)max_scale_limit / (float)(int)param_2[1]);
      }
      draw_file_icon(*param_2);
      popmatrix();
    }
    if (cStackX_f != '\0') {
      zwritemask(0);
      pushmatrix();
      scale(view_offset_x,view_offset_x);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
      }
      else {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
      }
      draw_legend_color_box(puVar5,param_5,0x10);
      popmatrix();
      pushmatrix();
      get_icon_bounds(param_2[8],&fStack_4,&fStack_8,&fStack_c,&fStack_10);
      scale(view_offset_x,view_offset_x);
      translate(0xbf000000,0xbf000000);
      scale((float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_c - (double)fStack_4)),
            (float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_10 - (double)fStack_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    scale(view_offset_x,view_offset_x);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
    }
    else {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
    }
    draw_legend_color_box(puVar5,param_5,param_6);
    popmatrix();
    if ((int)(param_2[10] << 10) < 0) {
      setpattern(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file_pointers(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sStackX_6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + param_3 * 4);
  selected_id_1 = iVar4;
  selected_id_2 = iVar2;
  loadname((int)(short)param_3);
  pushmatrix();
  translate(*(float *)(iVar4 + 0x14) + view_offset_x + view_offset_adjustment,*(undefined4 *)(iVar4 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar2 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&matrix_buffer_0);
  v2f(&matrix_buffer_1);
  v2f(&matrix_buffer_2);
  endtmesh();
  popmatrix();
  sStackX_6 = (short)param_2;
  loadname((int)sStackX_6);
  pushmatrix();
  translate(*(float *)(iVar2 + 0x14) - (view_offset_x + view_offset_adjustment),*(undefined4 *)(iVar2 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar4 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&matrix_buffer_3);
  v2f(&current_matrix_ptr);
  v2f(&projection_matrix_ptr);
  endtmesh();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_files(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        pushname((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file_item(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        (**(code **)(unaff_gp + -0x7db0))((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void checkPointerFile(int param_1,undefined4 param_2)

{
  if (param_1 == selected_id_1) {
    pushmatrix();
    translate(*(float *)(selected_id_2 + 0x14) - (view_offset_x + view_offset_adjustment),
              *(undefined4 *)(selected_id_2 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&matrix_buffer_3);
    v2f(&current_matrix_ptr);
    v2f(&projection_matrix_ptr);
    endclosedline();
    popmatrix();
  }
  else if (param_1 == selected_id_2) {
    pushmatrix();
    translate(*(float *)(selected_id_1 + 0x14) + view_offset_x + view_offset_adjustment,
              *(undefined4 *)(selected_id_1 + 0x18),&fsn_resources,param_2,0);
    scale(view_offset_x,view_offset_x);
    bgnclosedline();
    v2f(&matrix_buffer_0);
    v2f(&matrix_buffer_1);
    v2f(&matrix_buffer_2);
    endclosedline();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightFileLandscape(int param_1,int param_2)

{
  pushmatrix();
  translate(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  scale(*(undefined4 *)(param_1 + 0x58));
  draw_entry(param_2);
  translate(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
  if (((curcontext[0xc50] == '\0') || (overlay_mode_flag == '\0')) ||
     (param_1 != *(int *)(curcontext + 0x44))) {
    scale(view_offset_x,view_offset_x);
  }
  else {
    scale(view_offset_x,view_offset_x);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void highlightFile(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    update_view_recursive();
  }
  else {
    refresh_context_view();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void landscapeZoomToFile(int param_1,int param_2)

{
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)*(float *)(param_1 + 0x3c) / (double)(in_f4 & 0xffffffff00000000) +
              (double)layout_spacing_height;
      set_camera_lookat((double)*(float *)(param_1 + 0x34) -
                   (double)*(float *)(curcontext + 0x14) * dVar1,
                   (double)*(float *)(param_1 + 0x38) -
                   (double)*(float *)(curcontext + 0x18) * dVar1);
    }
    else {
      if (overlay_mode_flag == '\0') {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      else {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      set_camera_lookat(((double)*(float *)(param_1 + 0x34) +
                   (double)fVar2 * (double)*(float *)(param_1 + 0x58)) -
                   (double)*(float *)(curcontext + 0x14) * (double)view_scale_factor,
                   ((double)*(float *)(param_1 + 0x38) + (double)*(float *)(param_2 + 0x18)) -
                   (double)*(float *)(curcontext + 0x18) * (double)view_scale_factor);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void viewFile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  stat sStack_8c;
  void *pvStack_4;
  
  build_path_string((int)curcontext + 0x84c,param_1);
  strcat(curcontext + 0x84c,(char *)*param_2);
  iVar1 = stat(curcontext + 0x84c,&sStack_8c);
  if (iVar1 < 0) {
    show_error_dialog("cannot stat",(int)curcontext + 0x84c);
  }
  else {
    pvStack_4 = (void *)XtMalloc(sStack_8c.st_blksize + 1);
    iVar1 = open(curcontext + 0x84c,0);
    if (iVar1 < 0) {
      show_error_dialog("cannot open",(int)curcontext + 0x84c);
    }
    else {
      sVar2 = read(iVar1,pvStack_4,sStack_8c.st_blksize);
      if (sVar2 == sStack_8c.st_blksize) {
        *(undefined1 *)((int)pvStack_4 + sStack_8c.st_blksize) = 0;
        close(iVar1);
        XmTextSetString(*(undefined4 *)(curcontextwindows + 0x14),pvStack_4);
        XtFree(pvStack_4);
        iVar1 = access(curcontext + 0x84c,2);
        if (iVar1 < 0) {
          XtSetSensitive(*(undefined4 *)(curcontextwindows + 0x18),0);
          XmTextSetEditable(*(undefined4 *)(curcontextwindows + 0x14),0);
        }
        else {
          XtSetSensitive(*(undefined4 *)(curcontextwindows + 0x18),1);
          XmTextSetEditable(*(undefined4 *)(curcontextwindows + 0x14),1);
        }
        XtManageChild(*(undefined4 *)(curcontextwindows + 0x10));
        uVar3 = XtWindow(*(undefined4 *)(curcontextwindows + 0x10));
        XRaiseWindow(display,uVar3);
      }
      else {
        show_error_dialog("cannot read",(int)curcontext + 0x84c);
        close(iVar1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copy_file_item(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_8c [48];
  int local_5c;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7a84))(**(int **)(unaff_gp + -0x7684) + 0x84c,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(**(int **)(unaff_gp + -0x7684) + 0x84c,*param_2);
  iVar1 = (**(code **)(unaff_gp + -0x7e30))(**(int **)(unaff_gp + -0x7684) + 0x84c,auStack_8c);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x7a8c))
              (*(int *)(unaff_gp + -0x7fa4) + -0x16b0,**(int **)(unaff_gp + -0x7684) + 0x84c);
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7b40))(local_5c + 1);
    iVar1 = (**(code **)(unaff_gp + -0x7e34))(**(int **)(unaff_gp + -0x7684) + 0x84c,0);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7a8c))
                (*(int *)(unaff_gp + -0x7fa4) + -0x16a4,**(int **)(unaff_gp + -0x7684) + 0x84c);
    }
    else {
      iVar2 = (**(code **)(unaff_gp + -0x7e14))(iVar1,local_4,local_5c);
      if (iVar2 == local_5c) {
        *(undefined1 *)(local_4 + local_5c) = 0;
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
        (**(code **)(unaff_gp + -0x7eec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),local_4);
        (**(code **)(unaff_gp + -0x7e8c))(local_4);
        iVar1 = (**(code **)(unaff_gp + -0x7e28))(**(int **)(unaff_gp + -0x7684) + 0x84c,2);
        if (iVar1 < 0) {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),0);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),0);
        }
        else {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),1);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),1);
        }
        (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        uVar3 = (**(code **)(unaff_gp + -0x7c98))
                          (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        (**(code **)(unaff_gp + -0x7e84))(**(undefined4 **)(unaff_gp + -0x75fc),uVar3);
      }
      else {
        (**(code **)(unaff_gp + -0x7a8c))
                  (*(int *)(unaff_gp + -0x7fa4) + -0x1698,**(int **)(unaff_gp + -0x7684) + 0x84c);
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void load_filetype_rules_wrapper(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b4))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
