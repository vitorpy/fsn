/**
 * parse_data_buffer
 *
 * Extracted from fsn.c lines 54957-54976
 * Category: Other
 */

void parse_data_buffer(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  if (((param_1 != 0) &&
      (((iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x25fc))(), param_3 != (int *)0x0 &&
        (iVar2 = *(int *)(iVar1 + 0x24), *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = *(int *)(iVar1 + 0x24), param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    (**(code **)(unaff_gp + -0x7800))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
