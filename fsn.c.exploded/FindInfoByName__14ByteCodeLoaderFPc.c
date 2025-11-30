/**
 * FindInfoByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 57299-57321
 * Category: Other
 */

void FindInfoByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  reset_icon_interpreter(&TheFileIconInterpreter);
  while( true ) {
    if (iVar2 == 0) {
      reset_icon_interpreter(&TheFileIconInterpreter);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (icon_cache_capacity == *(int *)(iVar2 + 0x34))) &&
        (icon_loader_instance != 0)) &&
       (iVar1 = run_icon_interpreter(&TheFileIconInterpreter,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             *(undefined4 *)(iVar2 + 0x10)), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 0x68);
  }
  reset_icon_interpreter(&TheFileIconInterpreter);
  halt_baddata();
}
