/**
 * isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo
 *
 * Extracted from fsn.c lines 73136-73148
 * Category: Other
 */

void isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_3 + 0x30);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[1];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
