/**
 * database_io.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "database_io.h"
#include "fsn_types.h"
#include "fsn_state.h"

void init_database_state(void)

{
  char *pcVar1;
  size_t sVar2;
  char acStack_104 [260];
  
  pcVar1 = getenv("WINEDITOR");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = getenv("EDITOR");
    if (pcVar1 == (char *)0x0) {
      putenv("WINEDITOR=jot");
    }
    else {
      sprintf(acStack_104,"WINEDITOR=winterm -c %s",pcVar1);
      sVar2 = strlen(acStack_104);
      pcVar1 = (char *)XtMalloc(sVar2 + 1);
      pcVar1 = strcpy(pcVar1,acStack_104);
      putenv(pcVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void write_database_entry(undefined4 param_1)

{
  gl_push_state();
  set_context_state(0,1);
  write_file_entry(param_1);
  set_context_state(1,1);
  write_file_entry(param_1);
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dumpDatabaseCB(void)

{
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void databaseDumpTimeout(void)

{
  refresh_after_change();
  init_database_display();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void scheduleDatabaseDumpTimeout(void)

{
  XtAppAddTimeOut(app_context,900000,databaseDumpTimeout,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_database_display(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e94))
            (**(undefined4 **)(unaff_gp + -0x7600),900000,*(undefined4 *)(unaff_gp + -0x7a4c),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void scanDatabase(int param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_400 [1024];
  
  acStack_400[0] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    build_path_string(acStack_400, (undefined4 *)(*(long*)(param_1 + 0x28)));
  }
  sVar1 = strlen(acStack_400);
  iVar2 = check_directory_flags(param_1,acStack_400,acStack_400 + sVar1,1);
  if (iVar2 != 0) {
    uVar3 = set_status_message("relaying out file system...please wait",0);
    process_pending_events();
    process_child_directory(param_1);
    deleteMessage((undefined4*)uVar3);
    update_display();
  }
  refresh_view();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void rescanDatabase(void)

{
  int iVar1;
  char acStack_510 [1000];
  undefined4 local_128;
  statvfs asStack_124 [2];
  stat local_88;
  
  local_128 = set_status_message("rescanning file system",0);
  process_pending_events();
  iVar1 = statvfs((char *)*topdir,asStack_124);
  if (iVar1 < 0) {
    sprintf(acStack_510,"cannot statvfs %s, leaving display unchanged",*topdir);
    set_status_message(acStack_510,1000);
    deleteMessage((undefined4*)local_128);
  }
  else {
    strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
    localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
    iVar1 = lstat((char *)*topdir,&local_88);
    if (iVar1 < 0) {
      sprintf(acStack_510,"cannot stat %s, leaving display unchanged",*topdir);
      set_status_message(acStack_510,1000);
      deleteMessage((undefined4*)local_128);
    }
    else {
      current_device_id = local_88.st_dev._0_4_;
      cleanup_directory(topdir);
      deleteMessage((undefined4*)local_128);
      set_status_message("file system update complete",2000);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_database_view(void)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) != 0)) {
    (**(code **)(unaff_gp + -0x7f2c))();
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void buildingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b64);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dump_database_file(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_gp;
  short local_8 [4];
  
  piVar6 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6adc);
  iVar3 = 0;
  if (0 < *piVar6) {
    piVar5 = *(int **)(unaff_gp + -0x7f64);
    iVar2 = 0;
    piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
    do {
      if (*piVar5 == 0) {
        iVar1 = *param_1;
        *param_1 = iVar1 + -1;
        if (iVar1 + -1 < 0) {
          (**(code **)(unaff_gp + -0x7d78))(7,param_1);
          iVar1 = *piVar4;
        }
        else {
          *(undefined1 *)param_1[1] = 7;
          param_1[1] = param_1[1] + 1;
          iVar1 = *piVar4;
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7d7c))(7,param_1);
        iVar1 = *piVar4;
      }
      local_8[0] = (**(code **)(unaff_gp + -0x7c20))(*(undefined4 *)(iVar1 + iVar2 + 0x38));
      (**(code **)(unaff_gp + -0x7d74))(local_8,2,1,param_1);
      (**(code **)(unaff_gp + -0x7d74))
                (*(undefined4 *)(*piVar4 + iVar2 + 0x38),1,(int)local_8[0],param_1);
      (**(code **)(unaff_gp + -0x7830))(iVar3 * 0x40 + *piVar4,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *piVar6);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_database_node(int param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b34))(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_database_entry(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x5218))();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    uVar2 = (**(code **)(unaff_gp + -0x7c20))(param_2);
    if (uVar2 < 0x401) {
      (**(code **)(unaff_gp + -0x771c))(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      (**(code **)(unaff_gp + -0x7c38))(1,*(int *)(unaff_gp + -0x7f94) + -0x617c);
      **(undefined4 **)(unaff_gp + -0x7f70) = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dump_directory_tree(FILE *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 local_a;
  byte local_9;
  
  process_pending_events();
  if (__iob_func_result == 0) {
    iVar1 = param_1->_flags + -1;
    param_1->_flags = iVar1;
    if (iVar1 < 0) {
      __flsbuf(2,param_1);
      local_14 = param_2[2];
    }
    else {
      *param_1->_IO_read_ptr = '\x02';
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
      local_14 = param_2[2];
    }
  }
  else {
    __semputc(2,param_1);
    local_14 = param_2[2];
  }
  local_10 = (undefined2)param_2[1];
  local_e = (undefined2)param_2[5];
  local_a = (undefined1)param_3;
  local_9 = 0;
  local_c = (undefined2)param_2[3];
  iVar1 = param_2[0x1d];
  if (iVar1 << 0xb < 0) {
    local_9 = 2;
    iVar1 = param_2[0x1d];
  }
  if (iVar1 << 0xd < 0) {
    local_9 = local_9 | 1;
  }
  fwrite(&local_14,0xc,1,param_1);
  fwrite((void *)*param_2,1,param_2[1],param_1);
  local_18 = (undefined1)(param_3 + 1);
  iVar1 = 0;
  if (0 < (int)param_2[3]) {
    iVar5 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar3 = param_1->_flags + -1;
        param_1->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(3,param_1);
          iVar3 = param_2[4];
        }
        else {
          *param_1->_IO_read_ptr = '\x03';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
          iVar3 = param_2[4];
        }
      }
      else {
        __semputc(3,param_1);
        iVar3 = param_2[4];
      }
      puVar4 = *(undefined4 **)(iVar3 + iVar5);
      local_28 = puVar4[3];
      local_24 = puVar4[4];
      local_20 = puVar4[2];
      local_1c = (undefined2)puVar4[1];
      if (puVar4[8] == 0) {
        local_1a = 0;
      }
      else {
        local_2c = (char *)get_icon_string();
        sVar2 = strlen(local_2c);
        local_1a = (short)sVar2;
      }
      fwrite(&local_28,0x14,1,param_1);
      fwrite((void *)*puVar4,1,puVar4[1],param_1);
      if (puVar4[8] != 0) {
        fwrite(local_2c,1,(size_t)local_1a,param_1);
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[3]);
  }
  iVar1 = 0;
  iVar5 = 0;
  if (0 < (int)param_2[5]) {
    do {
      dump_directory_tree(param_1,*(undefined4 *)(param_2[6] + iVar5),param_3 + 1);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[5]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dumpMarks(FILE *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_8 [4];
  
  iVar3 = 0;
  if (0 < selection_count) {
    iVar2 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar4 = param_1->_flags + -1;
        param_1->_flags = iVar4;
        if (iVar4 < 0) {
          __flsbuf(7,param_1);
        }
        else {
          *param_1->_IO_read_ptr = '\a';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(7,param_1);
      }
      sVar1 = strlen(*(char **)(selection_buffer + iVar2 + 0x38));
      asStack_8[0] = (short)sVar1;
      fwrite(asStack_8,2,1,param_1);
      fwrite(*(void **)(selection_buffer + iVar2 + 0x38),1,(int)asStack_8[0],param_1);
      copy_selection_data(iVar3 * 0x40 + selection_buffer,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < selection_count);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
