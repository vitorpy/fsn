/**
 * read_bytecode_value
 *
 * Extracted from fsn.c lines 55517-55562
 * Category: Filesystem
 */

void read_bytecode_value(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    halt_baddata();
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  iVar1 = get_bytecode_context();
  if (param_5 == 0) {
    param_5 = *(int *)(iVar1 + 0x24);
  }
  if (param_3 == 0) {
    if (((param_4 == (int *)0x0) ||
        (*param_4 == *(int *)(iVar1 + *(int *)(iVar1 + 0x24) * 4 + 0x3c))) &&
       (param_5 == *(int *)(iVar1 + 0x24))) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x24);
      iVar4 = *(int *)(iVar1 + 0x18);
      goto LAB_00432460;
    }
    param_3 = read_data_section(param_1,param_2,param_4);
  }
  iVar4 = *(int *)(iVar1 + 0x18);
LAB_00432460:
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = *(int *)(iVar1 + 0x14);
    do {
      if (((param_3 == *(int *)(iVar3 + 0xc)) &&
          ((param_4 == (int *)0x0 || (*(int *)(iVar3 + 0x10) == *param_4)))) &&
         (param_5 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) {
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
