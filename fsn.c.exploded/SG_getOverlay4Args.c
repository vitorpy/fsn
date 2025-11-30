/**
 * SG_getOverlay4Args
 *
 * Extracted from fsn.c lines 55375-55402
 * Category: Other
 */

void SG_getOverlay4Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = read_bytecode_value(param_1,param_2,4,&temp_data_buffer,3);
  if (iVar1 < 0) {
    process_data_recursive(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 4;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
