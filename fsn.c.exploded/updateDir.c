/**
 * updateDir
 *
 * Extracted from fsn.c lines 41580-41595
 * Category: Filesystem
 */

void updateDir(int param_1)

{
  size_t sVar1;
  int iVar2;
  char acStack_400 [1024];
  
  build_path_string(acStack_400,*(undefined4 *)(param_1 + 0x28));
  sVar1 = strlen(acStack_400);
  iVar2 = check_directory_flags(param_1,acStack_400,acStack_400 + sVar1,0);
  if (iVar2 != 0) {
    process_child_directory(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
