/**
 * parse_data_multi
 *
 * Extracted from fsn.c lines 55039-55079
 * Category: Other
 */

void parse_data_multi(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context();
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      piVar3 = *(int **)(iVar1 + 0x20);
      do {
        if (param_4 == *piVar3) {
          iVar2 = *(int *)(iVar1 + 0x14) + iVar4 * 0x28;
          if ((param_3 == (int *)0x0) || (*(int *)(iVar2 + 0x10) == *param_3)) {
            if (param_5 == *(int *)(iVar2 + 0xc)) {
              halt_baddata();
            }
            iVar2 = *(int *)(iVar1 + 0x18);
          }
          else {
            iVar2 = *(int *)(iVar1 + 0x18);
          }
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x18);
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar2);
    }
    parse_data_buffer(param_1,param_2,param_3,param_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
