/**
 * SG_getOverlayArgs
 *
 * Extracted from fsn.c lines 55269-55298
 * Category: Other
 */

void SG_getOverlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,3);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,3);
  if (iVar2 < 0) {
    setup_menu_resources(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
