/**
 * scanDatabase
 *
 * Extracted from fsn.c lines 54282-54309
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
  iVar2 = FUN_004138e8(param_1,acStack_400,acStack_400 + sVar1,1);
  if (iVar2 != 0) {
    uVar3 = set_status_message("relaying out file system...please wait",0);
    FUN_00411998();
    FUN_004144ec(param_1);
    deleteMessage(uVar3);
    update_display();
  }
  FUN_0041dba0();
  redraw_gl_scene();
  FUN_0042a8e4();
  FUN_00414da4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
