/**
 * scanDatabase
 *
 * Extracted from fsn.c lines 40899-40926
 * Category: Filesystem
 */

void scanDatabase(int param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_400 [1024];
  
  acStack_400[0] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    build_path_string(acStack_400);
  }
  sVar1 = strlen(acStack_400);
  iVar2 = check_directory_flags(param_1,acStack_400,acStack_400 + sVar1,1);
  if (iVar2 != 0) {
    uVar3 = set_status_message("relaying out file system...please wait",0);
    process_pending_events();
    process_child_directory(param_1);
    deleteMessage(uVar3);
    update_display();
  }
  refresh_view();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
