/**
 * FindIconByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72925-72953
 * Category: Other
 */

void FindIconByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_004357ec(&TheFileIconInterpreter);
  if ((DAT_10009c90 == 0) && (DAT_10009c8c == 0)) {
    FUN_00435938(&TheFileIconInterpreter);
    FUN_004349f8(param_1,s_Unknown_10009a20);
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      if ((((*(int *)(iVar2 + 4) != 0) && (DAT_10009c90 == *(int *)(iVar2 + 0x34))) &&
          (DAT_10009c80 != 0)) &&
         (iVar1 = FUN_00435a28(&TheFileIconInterpreter,*(int *)(iVar2 + 4),
                               *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x10)), iVar1 != 0
         )) {
        FUN_00435938(&TheFileIconInterpreter);
        FUN_00435034(0,iVar2);
        halt_baddata();
      }
    }
    FUN_00435938(&TheFileIconInterpreter);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
