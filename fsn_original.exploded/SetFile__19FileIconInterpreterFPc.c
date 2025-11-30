/**
 * SetFile__19FileIconInterpreterFPc
 *
 * Extracted from fsn.c lines 73753-73808
 * Category: Filesystem
 */

void SetFile__19FileIconInterpreterFPc(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  ssize_t sVar3;
  
  *(char **)(param_1 + 0x228) = param_2;
  if (param_2 != (char *)0x0) {
    pcVar1 = strrchr(param_2,0x2f);
    *(char **)(param_1 + 0x22c) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x228);
    }
    else {
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
    }
  }
  iVar2 = stat(*(char **)(param_1 + 0x228),(stat *)(param_1 + 0x244));
  *(uint *)(param_1 + 0x230) = (uint)(iVar2 == 0);
  if (((iVar2 == 0) == 0) || ((*(uint *)(param_1 + 600) & 0xf000 | 0x8000) != 0x8000)) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar2 = open(*(char **)(param_1 + 0x228),4);
    *(int *)(param_1 + 0x238) = iVar2;
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x23c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  if (*(int *)(param_1 + 0x23c) == 0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    sVar3 = read(*(int *)(param_1 + 0x238),(void *)(param_1 + 0x20),0x200);
    *(ssize_t *)(param_1 + 0x2cc) = sVar3;
    if (sVar3 < 0) {
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x234) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
