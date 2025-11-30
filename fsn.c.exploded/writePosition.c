/**
 * writePosition
 *
 * Extracted from fsn.c lines 53570-53641
 * Category: Filesystem
 */

void writePosition(undefined2 *param_1,FILE *param_2)

{
  char *pcVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined1 uStack_2;
  
  uStack_30 = *(undefined4 *)(param_1 + 4);
  uStack_2c = *(undefined4 *)(param_1 + 6);
  uStack_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0xe);
  uStack_1c = *(undefined4 *)(param_1 + 0x10);
  uStack_18 = *(undefined4 *)(param_1 + 0x14);
  uStack_14 = *(undefined4 *)(param_1 + 0x16);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *param_1;
  uStack_a = param_1[1];
  uStack_2 = *(undefined1 *)(param_1 + 0x1a);
  if (*(int *)(param_1 + 2) == 0) {
    uStack_8 = 0;
  }
  else {
    pcVar1 = (char *)build_path_string(0,*(int *)(param_1 + 2));
    sVar2 = strlen(pcVar1);
    uStack_8 = (short)sVar2;
  }
  if (*(int *)(param_1 + 10) == 0) {
    uStack_6 = 0;
  }
  else {
    pcVar1 = (char *)build_path_string(0);
    sVar2 = strlen(pcVar1);
    uStack_6 = (short)sVar2;
  }
  if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
    uStack_4 = 0;
  }
  else {
    sVar2 = strlen((char *)**(undefined4 **)(param_1 + 0x12));
    uStack_4 = (short)sVar2;
  }
  fwrite(&uStack_30,0x30,1,param_2);
  if (*(int *)(param_1 + 2) != 0) {
    pvVar3 = (void *)build_path_string(0,*(int *)(param_1 + 2));
    fwrite(pvVar3,1,(size_t)uStack_8,param_2);
  }
  if (*(int *)(param_1 + 10) != 0) {
    pvVar3 = (void *)build_path_string(0);
    fwrite(pvVar3,1,(size_t)uStack_6,param_2);
  }
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    fwrite((void *)**(undefined4 **)(param_1 + 0x12),1,(size_t)uStack_4,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
