/**
 * scan.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "scan.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "delete.h"
#include "messages.h"

void scanDatabase(int param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_400 [1024];

  acStack_400[0] = '\0';
  if (*(int *)((void*)(long)param_1 + 0x28) != 0) {
    build_path_string(acStack_400, (undefined4 *)(*(long*)((void*)(long)param_1 + 0x28)));
  }
  sVar1 = strlen(acStack_400);
  iVar2 = check_directory_flags(param_1,(int)(long)acStack_400,(int)(long)(acStack_400 + sVar1),1);
  if (iVar2 != 0) {
    uVar3 = set_status_message("relaying out file system...please wait",0);
    process_pending_events();
    process_child_directory((void*)(long)param_1);
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
  struct statvfs asStack_124[2];
  struct stat local_88;

  local_128 = set_status_message("rescanning file system",0);
  process_pending_events();
  iVar1 = statvfs((char *)*topdir,asStack_124);
  if (iVar1 < 0) {
    sprintf(acStack_510,"cannot statvfs %s, leaving display unchanged",*topdir);
    set_status_message(acStack_510,1000);
    deleteMessage((undefined4*)local_128);
  }
  else {
    strcpy(fstyp,(char *)&asStack_124[0].f_type);
    localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
    iVar1 = lstat((char *)*topdir,&local_88);
    if (iVar1 < 0) {
      sprintf(acStack_510,"cannot stat %s, leaving display unchanged",*topdir);
      set_status_message(acStack_510,1000);
      deleteMessage((undefined4*)local_128);
    }
    else {
      current_device_id = local_88.st_dev;
      cleanup_directory((int)(long)topdir);
      deleteMessage((undefined4*)local_128);
      set_status_message("file system update complete",2000);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
