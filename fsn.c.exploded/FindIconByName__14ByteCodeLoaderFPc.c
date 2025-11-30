/**
 * FindIconByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 57228-57256
 * Category: Other
 */

void FindIconByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  reset_icon_interpreter(&TheFileIconInterpreter);
  if ((icon_cache_capacity == 0) && (icon_cache_size == 0)) {
    reset_icon_interpreter(&TheFileIconInterpreter);
    load_context_data(param_1,s_Unknown_10009a20);
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      if ((((*(int *)(iVar2 + 4) != 0) && (icon_cache_capacity == *(int *)(iVar2 + 0x34))) &&
          (icon_loader_instance != 0)) &&
         (iVar1 = run_icon_interpreter(&TheFileIconInterpreter,*(int *)(iVar2 + 4),
                               *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x10)), iVar1 != 0
         )) {
        reset_icon_interpreter(&TheFileIconInterpreter);
        setup_icon_entry(0,iVar2);
        halt_baddata();
      }
    }
    reset_icon_interpreter(&TheFileIconInterpreter);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
