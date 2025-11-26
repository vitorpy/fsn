/**
 * status.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "status.h"
#include "fsn_types.h"
#include "fsn_state.h"

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

void display_scan_status(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  (**(code **)(unaff_gp + -0x7ecc))(auStack_434,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,*(int *)(unaff_gp + -0x7fa4) + -0x5938);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a98))(auStack_434,param_3);
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
    deleteMessage(local_4);
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

void set_status_text(void)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = XmStringCreateSimple();
  local_c = 0xe3f40b5;
  local_4 = local_8;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_c,1);
  XmStringFree(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_status_display(undefined4 param_1)

{
  __pid_t _Var1;
  int iVar2;
  itimerval iStack_2c;
  itimerval local_1c;
  undefined1 auStack_4 [4];
  
  _Var1 = fork();
  if (_Var1 != 0) {
    if (-1 < _Var1) {
      iVar2 = wait(auStack_4);
      while ((iVar2 != _Var1 && ((iVar2 != -1 || (_operation_type_code == 4))))) {
        iVar2 = wait(auStack_4);
      }
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  setpgrp();
  iVar2 = 3;
  do {
    close(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 100);
  close(0);
  iVar2 = open("/dev/null",2);
  dup2(iVar2,0);
  if (2 < iVar2) {
    close(iVar2);
  }
  ioctl(0,0x5471,0);
  local_1c.it_interval.tv_sec = 0;
  local_1c.it_interval.tv_usec = 0;
  local_1c.it_value.tv_sec = 0;
  local_1c.it_value.tv_usec = 0;
  setitimer(ITIMER_REAL,&local_1c,&iStack_2c);
  alarm(0);
  execl(s__bin_sh_10009640,&shell_name_arg,&shell_cmd_flag,param_1,0);
                    // WARNING: Subroutine does not return
  _exit(0x7f);
}

void get_file_status(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
