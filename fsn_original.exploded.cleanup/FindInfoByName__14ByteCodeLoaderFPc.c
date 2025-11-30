/**
 * FindInfoByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72996-73018
 * Category: Other
 */

void FindInfoByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_004357ec(&TheFileIconInterpreter);
  while( true ) {
    if (iVar2 == 0) {
      FUN_00435938(&TheFileIconInterpreter);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (DAT_10009c90 == *(int *)(iVar2 + 0x34))) &&
        (DAT_10009c80 != 0)) &&
       (iVar1 = FUN_00435a28(&TheFileIconInterpreter,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             *(undefined4 *)(iVar2 + 0x10)), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 0x68);
  }
  FUN_00435938(&TheFileIconInterpreter);
  halt_baddata();
}
