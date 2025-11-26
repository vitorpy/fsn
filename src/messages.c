/**
 * messages.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "messages.h"
#include "fsn_types.h"
#include "fsn_state.h"

void deleteMessage(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = current_directory_node;
  if (param_1 == current_directory_node) {
    do {
      current_directory_node = (undefined4 *)puVar1[1];
      XmStringFree(*puVar1);
      XtFree(puVar1);
      if (current_directory_node == (undefined4 *)0x0) break;
      puVar1 = current_directory_node;
    } while (*(char *)(current_directory_node + 2) != '\0');
    if (current_directory_node == (undefined4 *)0x0) {
      local_8 = blankXmString;
    }
    else {
      local_8 = *current_directory_node;
    }
    local_c = 0xe3f40b5;
    XtSetValues(message_widget,&local_c,1);
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  puVar1 = (undefined4 *)XtMalloc(0xc);
  uVar2 = XmStringCreateSimple(param_1);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = current_directory_node;
  uStack_54 = 0xe3f40b5;
  uStack_50 = *puVar1;
  current_directory_node = puVar1;
  XtSetValues(message_widget,&uStack_54,1);
  if (param_2 != 0) {
    XtAppAddTimeOut(app_context,param_2,deleteMessage,puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_status_message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  
  puVar1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b40))(0xc);
  uVar2 = (**(code **)(unaff_gp + -0x7e90))(param_1);
  *puVar1 = uVar2;
  local_54 = *(int *)(unaff_gp + -0x7f60);
  piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x20);
  iVar4 = *piVar3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = iVar4;
  *piVar3 = (int)puVar1;
  local_54 = local_54 + 0x1d4d;
  local_50 = *puVar1;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6648),&local_54,1);
  if (param_2 != 0) {
    (**(code **)(unaff_gp + -0x7e94))
              (**(undefined4 **)(unaff_gp + -0x7600),param_2,*(undefined4 *)(unaff_gp + -0x7a9c),
               puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void show_error_message(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  undefined4 local_4;
  
  local_50 = (**(code **)(unaff_gp + -0x7c24))(param_1,*(undefined4 *)(unaff_gp + -0x7f60));
  local_54 = *(int *)(unaff_gp + -0x7f60) + 0x1f78;
  local_4 = local_50;
  uVar1 = (**(code **)(unaff_gp + -0x7ec0))
                    (**(undefined4 **)(unaff_gp + -0x75f0),*(int *)(unaff_gp + -0x7fa4) + -0x5934,
                     &local_54,1);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,2);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f5c) + 0xa9,*(int *)(unaff_gp + -0x7fe8) + 0xf30,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7e88))(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void display_status_message(char *param_1)

{
  bool bVar1;
  bool bVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  uint __c;
  int iVar6;
  char *__s;
  statvfs asStack_128 [2];
  stat local_8c;
  undefined4 local_4;
  
  bVar2 = false;
  time(&last_operation_time);
  if (db_filepath == (char *)0x0) {
    if (home_directory == (char *)0x0) {
      if (relative_path_flag == '\0') {
        home_directory = getenv("HOME");
        if (home_directory == (char *)0x0) {
          home_directory = ".";
        }
      }
      else {
        home_directory = ".";
      }
    }
    sVar5 = strlen(home_directory);
    sVar3 = strlen(param_1);
    db_filepath = (char *)malloc(sVar3 + sVar5 + 7);
    strcpy(db_filepath,home_directory);
    strcat(db_filepath,"/.FSN_");
    sVar5 = strlen(db_filepath);
    __s = db_filepath + sVar5;
    strcat(db_filepath,param_1);
    pcVar4 = strchr(__s,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '_';
      pcVar4 = strchr(__s,0x2f);
    }
  }
  else {
    if (*db_filepath == '/') {
      home_directory = strdup(db_filepath);
    }
    else {
      pcVar4 = getcwd((char *)0x0,0x400);
      sVar5 = strlen(pcVar4);
      sVar3 = strlen(db_filepath);
      home_directory = (char *)malloc(sVar3 + sVar5 + 2);
      strcpy(home_directory,pcVar4);
      strcat(home_directory,"/");
      strcat(home_directory,db_filepath);
      db_filepath = strdup(home_directory);
      free(pcVar4);
    }
    pcVar4 = strrchr(home_directory,0x2f);
    *pcVar4 = '\0';
  }
  sVar5 = strlen(db_filepath);
  pcVar4 = (char *)malloc(sVar5 + 0x12);
  sprintf(pcVar4,"zcat 2>/dev/null<%s",db_filepath);
  current_file = popen(pcVar4,"r");
  bVar1 = false;
  if (current_file != (FILE *)0x0) {
    if (__iob_func_result == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        __c = __filbuf();
      }
      else {
        __c = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      __c = __semgetc();
    }
    if (__c == 0xffffffff) {
      pclose(current_file);
      bVar1 = false;
    }
    else {
      ungetc(__c,current_file);
      bVar2 = true;
      bVar1 = true;
    }
  }
  if ((bVar1) || (current_file = fopen(db_filepath,"r"), current_file != (FILE *)0x0)) {
    apply_pending_updates();
    local_4 = set_status_message("reading file system database",0);
    reset_display_state();
    *(byte *)(topdir + 0x1d) = *(byte *)(topdir + 0x1d) | 2;
    if (bVar2) {
      pclose(current_file);
    }
    else {
      fclose(current_file);
    }
    deleteMessage((undefined4*)local_4);
    iVar6 = statvfs((char *)*topdir,asStack_128);
    if (iVar6 < 0) {
      fprintf((FILE *)0xfb52904,"Could not statvfs %s, exiting\n",*topdir);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    strcpy(fstyp,(char *)&asStack_128[0].__f_unused);
    localFlag = asStack_128[0].__f_spare[1] & 0x80000000;
    iVar6 = lstat((char *)*topdir,&local_8c);
    if (iVar6 < 0) {
      fprintf((FILE *)0xfb52904,"Could not stat %s, exiting\n",*topdir);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    current_device_id = local_8c.st_dev._0_4_;
  }
  else {
    finalize_update();
    topdir = (undefined4 *)create_root_directory(param_1);
    free(pcVar4);
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

void format_log_message(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *local_408;
  char *local_404;
  char acStack_400 [1024];
  
  local_404 = "UNKNOWN PROGRAM";
  local_408 = "UNKNOWN CLASS";
  XtGetApplicationNameAndClass(param_1,&local_404,&local_408);
  sprintf(acStack_400,param_2,param_3,param_4,param_5,param_6);
  fprintf((FILE *)0xfb52904,(char *)_imsgs._176_4_,local_404,local_408,acStack_400);
  fflush((FILE *)0xfb52904);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void show_controls(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  ui_layout_setup_wrapper();
  XtManageChild(copy_button_widget);
  local_48 = 0xe3f40f2;
  local_44 = copy_button_widget;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
