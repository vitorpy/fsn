/**
 * isSuperByType__14ByteCodeLoaderFPcT1
 *
 * Extracted from fsn.c lines 73115-73130
 * Category: Other
 */

void isSuperByType__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00434cd0(param_1,param_3);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x30);
    while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
