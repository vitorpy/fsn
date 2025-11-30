/**
 * FindInfoByType__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 73056-73068
 * Category: Other
 */

void FindInfoByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
