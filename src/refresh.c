/**
 * refresh.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "refresh.h"
#include "fsn_types.h"
#include "fsn_state.h"

void refresh_after_change(void)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  FILE *__s_00;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14 [2];
  undefined4 local_10;
  char *local_4;
  
  if (((topdir != 0) && (*(int *)(topdir + 0x74) << 3 < 0)) && (fsn_resources == '\0')) {
    update_database_view();
    local_10 = set_status_message("updating on disk database",0);
    process_pending_events();
    sVar2 = strlen(home_directory);
    local_4 = (char *)malloc(sVar2 + 0xc);
    strcpy(local_4,home_directory);
    strcat(local_4,"/.FSNXXXXXX");
    iVar3 = mkstemp(local_4);
    if (iVar3 < 0) {
      show_error_message("could not open tmp file, not updating");
      free(local_4);
      deleteMessage(local_10);
    }
    else {
      if (file_append_mode == '\0') {
        bVar1 = false;
        __s_00 = fdopen(iVar3,"a");
      }
      else {
        close(iVar3);
        sVar2 = strlen(local_4);
        __s = (char *)malloc(sVar2 + 10);
        sprintf(__s,"compress>%s",local_4);
        __s_00 = popen(__s,"w");
        free(__s);
        if (__s_00 == (FILE *)0x0) {
          __s_00 = fopen(local_4,"w");
          if (__s_00 == (FILE *)0x0) {
            show_error_message("could not open tmp file, not updating");
            free(local_4);
            deleteMessage(local_10);
            halt_baddata();
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      fwrite("FuSioN",6,1,__s_00);
      if (__iob_func_result == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(2,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x02';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(2,__s_00);
      }
      if (__iob_func_result == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(1,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x01';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(1,__s_00);
      }
      dump_directory_tree(__s_00,topdir,0);
      if (__iob_func_result == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(4,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x04';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(4,__s_00);
      }
      write_database_entry(__s_00);
      dump_database_file(__s_00);
      if (__iob_func_result == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(6,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x06';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(6,__s_00);
      }
      local_14[0] = (ushort)(overviewActive != '\0');
      if (legendShowing != '\0') {
        local_14[0] = overviewActive != '\0' | 2;
      }
      if (controlsShowing != '\0') {
        local_14[0] = local_14[0] | 4;
      }
      fwrite(local_14,2,1,__s_00);
      if (__iob_func_result == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(8,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\b';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(8,__s_00);
      }
      local_1c = displayHeight;
      local_18 = displayDirectoryHeight;
      fwrite(&local_1c,8,1,__s_00);
      if (bVar1) {
        pclose(__s_00);
      }
      else {
        fclose(__s_00);
      }
      rename(local_4,db_filepath);
      free(local_4);
      deleteMessage(local_10);
      setup_fam_monitoring();
    }
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

void refresh_context_view(int param_1,int param_2)

{
  int unaff_gp;
  uint in_register_00001040;
  undefined4 uVar1;
  
  if (param_1 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              (0,(float)((double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)in_register_00001040 << 0x20)));
    (**(code **)(unaff_gp + -0x7908))(param_2);
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((*(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) == '\0') ||
       (*(char *)(*(int *)(unaff_gp + -0x75dc) + 5) == '\0')) {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_view(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
    (**(code **)(unaff_gp + -0x79c0))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x79c8))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x7ac0))();
  }
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    iVar1 = **(int **)(unaff_gp + -0x7684);
    if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
      (**(code **)(unaff_gp + -0x79c0))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x79c8))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x7ac0))();
    }
    (**(code **)(unaff_gp + -0x7894))(1);
  }
  (**(code **)(unaff_gp + -0x79d0))();
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x3c1c))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_view_recursive(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7910))();
  }
  else {
    (**(code **)(unaff_gp + -0x79ec))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_legend_colors(void)

{
  uint uVar1;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = **(uint **)(PTR_PTR_100094ec + 4);
  local_4 = uVar1 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_red_scale,&local_8,1);
  local_4 = (int)uVar1 >> 8 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_green_scale,&local_8,1);
  local_4 = (int)uVar1 >> 0x10 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_blue_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_toplevel(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7c98))();
  (**(code **)(unaff_gp + -0x7bb8))(**(undefined4 **)(unaff_gp + -0x75fc),uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
