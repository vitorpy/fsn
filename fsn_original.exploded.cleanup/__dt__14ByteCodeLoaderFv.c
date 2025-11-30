/**
 * __dt__14ByteCodeLoaderFv
 *
 * Extracted from fsn.c lines 73154-73188
 * Category: Other
 */

void __dt__14ByteCodeLoaderFv(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x68);
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    iVar1 = param_1[2];
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x10);
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    puVar2 = (undefined4 *)param_1[4];
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar2[1];
      __dl__FPv(*puVar2);
      __dl__FPv(puVar2);
      puVar2 = puVar4;
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
