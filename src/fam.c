/**
 * fam.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "fam.h"
#include "fsn_types.h"
#include "fsn_state.h"

void doneFam(void)

{
  refresh_directory_view();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamInit(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = fam_open_wrapper(&database_root_node), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamDone(void)

{
  if (fsn_resources == '\0') {
    init_database_node(&database_root_node);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamMonitorDir(int param_1)

{
  undefined4 uVar1;
  
  if ((fsn_resources == '\0') && (-1 < *(int *)(param_1 + 0x74) << 10)) {
    uVar1 = build_path_string(0,param_1);
    update_database_entry(&database_root_node,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamUnmonitorDir(int param_1)

{
  if ((fsn_resources == '\0') && (*(int *)(param_1 + 0x74) << 10 < 0)) {
    build_path_string(0,param_1);
    fam_cancel_monitor_wrapper(&database_root_node,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamMonitor(void)

{
  if ((fsn_resources == '\0') && (database_loaded_flag == 0)) {
    database_loaded_flag = XtAppAddInput(app_context,database_root_node,1,database_input_handler,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_fam_monitoring(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) == 0)) {
    uVar1 = (**(code **)(unaff_gp + -0x7f30))
                      (**(undefined4 **)(unaff_gp + -0x7600),
                       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c70),1,
                       *(int *)(unaff_gp + -0x7fe0) + -0x7fbc,0);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirfamUnmonitor(void)

{
  if ((fsn_resources == '\0') && (database_loaded_flag != 0)) {
    XtRemoveInput();
    database_loaded_flag = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMOpen2(int *param_1,int param_2)

{
  int iVar1;
  __uid_t _Var2;
  __gid_t _Var3;
  size_t sVar4;
  char acStack_cc [200];
  int iStack_4;
  
  init_network_state();
  iStack_4 = create_socket(0);
  param_1[1] = iStack_4;
  iVar1 = connect_network(iStack_4,0x7f000001,0x5f75a,1);
  *param_1 = iVar1;
  if ((-1 < iVar1) && (param_2 != 0)) {
    _Var2 = getuid();
    _Var3 = getgid();
    sprintf(acStack_cc,s_dN0__d__d__s_10009e47 + 1,_Var2,_Var3,param_2);
    sVar4 = strlen(acStack_cc);
    write_data_buffer(iStack_4,*param_1,acStack_cc,sVar4 + 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMOpen(undefined4 param_1)

{
  close_connections(param_1,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fam_open_wrapper(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7728))(param_1,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMClose(int param_1)

{
  __dl__FPv(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  size_t sVar2;
  __uid_t _Var3;
  size_t sVar4;
  char *__s;
  __gid_t *p_Var5;
  char cStack_c88;
  char acStack_c87 [3007];
  __gid_t a_Stack_c8 [17];
  char acStack_84 [128];
  undefined4 uStack_4;
  
  uStack_4 = *param_3;
  process_file_data(uStack_4,param_4);
  iVar1 = getgroups(0x10,a_Stack_c8);
  acStack_84[0] = '\0';
  __s = acStack_84;
  if (1 < iVar1) {
    p_Var5 = a_Stack_c8 + 1;
    do {
      if (p_Var5 == a_Stack_c8 + 1) {
        sprintf(__s,&db_format_1,iVar1 + -1);
        sVar2 = strlen(__s);
        __s = __s + sVar2;
      }
      sprintf(__s,&db_format_2,*p_Var5);
      sVar2 = strlen(__s);
      p_Var5 = p_Var5 + 1;
      __s = __s + sVar2;
    } while (p_Var5 < a_Stack_c8 + iVar1);
  }
  if (acStack_84[0] == '\0') {
    _Var3 = getuid();
    sprintf(&cStack_c88,s__c_d__d__d__s_10009e74,param_5,uStack_4,_Var3,a_Stack_c8[0],param_2);
    sVar2 = strlen(&cStack_c88);
    iVar1 = sVar2 + 1;
  }
  else {
    _Var3 = getuid();
    sprintf(&cStack_c88,s__c_d__d__d__s_10009e60,param_5,uStack_4,_Var3,a_Stack_c8[0],param_2);
    sVar2 = strlen(&cStack_c88);
    sprintf(acStack_c87 + sVar2,&db_format_3,acStack_84);
    sVar2 = strlen(acStack_c87 + sVar2);
    sVar4 = strlen(&cStack_c88);
    iVar1 = sVar4 + sVar2 + 2;
  }
  write_data_buffer(param_1[1],*param_1,&cStack_c88,iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fam_monitor_request(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_gp;
  undefined1 uStack_c88;
  undefined1 auStack_c87 [3007];
  undefined4 local_c8 [17];
  char local_84 [128];
  undefined4 local_4;
  
  local_4 = *param_3;
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x5108))(local_4,param_4);
  iVar1 = (**(code **)(unaff_gp + -0x7c2c))(0x10,local_c8);
  local_84[0] = '\0';
  pcVar4 = local_84;
  if (1 < iVar1) {
    iVar7 = *(int *)(unaff_gp + -0x7f94);
    iVar6 = *(int *)(unaff_gp + -0x7f94);
    puVar5 = local_c8 + 1;
    do {
      if (puVar5 == local_c8 + 1) {
        (**(code **)(unaff_gp + -0x7c1c))(pcVar4,iVar6 + -25000,iVar1 + -1);
        iVar2 = (**(code **)(unaff_gp + -0x7c20))(pcVar4);
        pcVar4 = pcVar4 + iVar2;
      }
      (**(code **)(unaff_gp + -0x7c1c))(pcVar4,iVar7 + -0x61a4,*puVar5);
      iVar2 = (**(code **)(unaff_gp + -0x7c20))(pcVar4);
      puVar5 = puVar5 + 1;
      pcVar4 = pcVar4 + iVar2;
    } while (puVar5 < local_c8 + iVar1);
  }
  if (local_84[0] == '\0') {
    uVar3 = (**(code **)(unaff_gp + -0x7cec))();
    (**(code **)(unaff_gp + -0x7c1c))
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) + -0x618c,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    iVar1 = iVar1 + 1;
  }
  else {
    uVar3 = (**(code **)(unaff_gp + -0x7cec))();
    (**(code **)(unaff_gp + -0x7c1c))
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) + -0x61a0,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    (**(code **)(unaff_gp + -0x7c1c))
              (auStack_c87 + iVar1,*(int *)(unaff_gp + -0x7f94) + -0x6190,local_84);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_c87 + iVar1);
    iVar6 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    iVar1 = iVar6 + iVar1 + 2;
  }
  (**(code **)(unaff_gp + -0x7700))(param_1[1],*param_1,&uStack_c88,iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitorDirectory(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = get_file_status();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    sVar2 = strlen(param_2);
    if (sVar2 < 0x401) {
      fam_monitor_request(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      syslog(1,s_path_too_long_10009e84);
      _operation_type_code = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitorDirectory2(void)

{
  fam_monitor_request();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitorFile(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = get_file_status();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    sVar2 = strlen(param_2);
    if (sVar2 < 0x401) {
      fam_monitor_request(param_1,param_2,param_3,param_4,0x57);
    }
    else {
      syslog(1,s_path_too_long_10009e94);
      _operation_type_code = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitorFile2(void)

{
  fam_monitor_request();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMMonitorCollection
               (undefined4 *param_1,char *param_2,int *param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  size_t sVar1;
  int iVar2;
  __uid_t _Var3;
  size_t sVar4;
  char *pcVar5;
  __gid_t *p_Var6;
  char cStack_c88;
  char acStack_c87 [3007];
  __gid_t local_c8 [17];
  char local_84 [128];
  int local_4;
  
  local_4 = get_file_status();
  if (local_4 != -1) {
    *param_3 = local_4;
    sVar1 = strlen(param_2);
    if (sVar1 < 0x401) {
      if (param_4 != 0) {
        process_file_data(local_4,param_4);
      }
      iVar2 = getgroups(0x10,local_c8);
      local_84[0] = '\0';
      pcVar5 = local_84;
      if (1 < iVar2) {
        p_Var6 = local_c8 + 1;
        do {
          if (p_Var6 == local_c8 + 1) {
            sprintf(pcVar5,&db_format_4,iVar2 + -1);
            sVar1 = strlen(pcVar5);
            pcVar5 = pcVar5 + sVar1;
          }
          sprintf(pcVar5,&format_str_1,*p_Var6);
          sVar1 = strlen(pcVar5);
          p_Var6 = p_Var6 + 1;
          pcVar5 = pcVar5 + sVar1;
        } while (p_Var6 < local_c8 + iVar2);
      }
      if (local_84[0] == '\0') {
        _Var3 = getuid();
        sprintf(&cStack_c88,s_F_d__d__d__s_0__d__s_10009ebc,local_4,_Var3,local_c8[0],param_2);
        sVar1 = strlen(&cStack_c88);
        pcVar5 = acStack_c87 + sVar1;
        sprintf(pcVar5,s_0__d__s_10009ed4,param_5,param_6);
      }
      else {
        _Var3 = getuid();
        sprintf(&cStack_c88,s_F_d__d__d__s_10009ee0,local_4,_Var3,local_c8[0],param_2);
        sVar1 = strlen(&cStack_c88);
        pcVar5 = acStack_c87 + sVar1;
        sprintf(pcVar5,s__s__d__s_10009ef0,local_84,param_5,param_6);
      }
      sVar1 = strlen(pcVar5);
      sVar4 = strlen(&cStack_c88);
      write_data_buffer(param_1[1],*param_1,&cStack_c88,sVar4 + sVar1 + 2);
    }
    else {
      syslog(1,s_path_too_long_10009ea4);
      _operation_type_code = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMSuspendMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_S_d__d__d_10009efc,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  write_data_buffer(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMResumeMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_U_d__d__d_10009f08,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  write_data_buffer(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMCancelMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_C_d__d__d_10009f14,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  write_data_buffer(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void fam_cancel_monitor_wrapper(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined1 auStack_bb8 [3000];
  
  uVar1 = (**(code **)(unaff_gp + -0x7cec))();
  uVar2 = (**(code **)(unaff_gp + -0x7c30))();
  (**(code **)(unaff_gp + -0x7c1c))
            (auStack_bb8,*(int *)(unaff_gp + -0x7f94) + -0x60ec,*param_2,uVar1,uVar2);
  iVar3 = (**(code **)(unaff_gp + -0x7c20))(auStack_bb8);
  (**(code **)(unaff_gp + -0x7700))(param_1[1],*param_1,auStack_bb8,iVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMNextEvent(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_c38 [3000];
  uint auStack_80 [32];
  
  bzero(auStack_80,0x80);
  auStack_80[*param_1 >> 5] = auStack_80[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
  piVar2 = (int *)param_1[1];
  if (((*(int *)(*piVar2 + 0xc) != 0) ||
      (((iVar1 = search_file_entry(), iVar1 != -1 && (*(int *)(*piVar2 + 0x179c) == 0)) &&
       (*(int *)(*piVar2 + 0xc) != 0)))) &&
     (iVar1 = read_file_buffer(piVar2,*param_1,auStack_c38,0x400), iVar1 != -1)) {
    process_path_buffer(param_1,auStack_c38,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMPending(uint *param_1)

{
  __fd_mask *p_Var1;
  fd_set fStack_80;
  
  bzero(&fStack_80,0x80);
  p_Var1 = fStack_80.fds_bits + (*param_1 >> 5);
  *p_Var1 = *p_Var1 | 1 << (*param_1 & 0x1f);
  select(0x400,&fStack_80,(fd_set *)0x0,(fd_set *)0x0,(timeval *)&database_dirty_flag);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FAMDebugLevel(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  char acStack_c8 [200];
  
  if (param_2 == 0) {
    uVar1 = 0x45;
  }
  else if (param_2 == 1) {
    uVar1 = 0x44;
  }
  else {
    if (param_2 != 2) {
      halt_baddata();
    }
    uVar1 = 0x56;
  }
  sprintf(acStack_c8,&format_str_4,uVar1);
  sVar2 = strlen(acStack_c8);
  write_data_buffer(param_1[1],*param_1,acStack_c8,sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
