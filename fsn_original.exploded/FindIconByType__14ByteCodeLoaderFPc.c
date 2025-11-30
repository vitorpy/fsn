/**
 * FindIconByType__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72876-72894
 * Category: Other
 */

void FindIconByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
  FUN_00435034(0,puVar2);
  halt_baddata();
}
