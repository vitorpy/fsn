/**
 * SG_getVisualArgs
 *
 * Extracted from fsn.c lines 55568-55591
 * Category: Other
 */

void SG_getVisualArgs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = read_bytecode_value();
  uVar2 = eval_bytecode_instruction(param_1,param_2,uVar1,param_4,param_5);
  *(undefined4 *)(param_6 + *param_7 * 8) = 0xf6615ba;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar2;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf6615c3;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = param_3;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf661fe4;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar1;
  *param_7 = *param_7 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
