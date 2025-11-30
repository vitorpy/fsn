/**
 * FUN_0043aef8
 *
 * Extracted from fsn.c lines 78095-78147
 * Ghidra address: 0x0043aef8
 * Category: Other
 */

void FUN_0043aef8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_register_00001040;
  double dVar4;
  byte in_fcsr;
  
  iVar2 = 0;
  if (0 < buffer_size) {
    iVar3 = 0;
    piVar1 = DAT_10017414;
    do {
      if (*piVar1 == -1) {
        *piVar1 = param_1;
        *(undefined4 *)((int)DAT_10017410 + iVar3) = param_2;
        *(undefined1 *)((int)DAT_10017418 + iVar2) = 0;
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      piVar1 = piVar1 + 1;
    } while (iVar2 < buffer_size);
  }
  buffer_size = buffer_size + _DAT_10009e44;
  dVar4 = (double)_DAT_10009e44 * (double)((ulonglong)in_register_00001040 << 0x20);
  iVar3 = iVar2 * 4;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar4 = ROUND(dVar4);
  }
  else {
    dVar4 = FLOOR(dVar4);
  }
  _DAT_10009e44 = (int)dVar4;
  DAT_10017410 = realloc(DAT_10017410,buffer_size * 4);
  DAT_10017414 = (int *)realloc(DAT_10017414,buffer_size << 2);
  DAT_10017418 = realloc(DAT_10017418,buffer_size << 2);
  DAT_10017414[iVar2] = param_1;
  *(undefined4 *)((int)DAT_10017410 + iVar3) = param_2;
  *(undefined1 *)((int)DAT_10017418 + iVar2) = 0;
  iVar2 = iVar2 + 1;
  if (iVar2 < buffer_size) {
    do {
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)((int)DAT_10017414 + iVar3) = 0xffffffff;
    } while (iVar2 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
