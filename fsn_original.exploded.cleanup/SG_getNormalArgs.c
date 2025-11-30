/**
 * SG_getNormalArgs
 *
 * Extracted from fsn.c lines 70896-70922
 * Category: Other
 */

void SG_getNormalArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_004314e0(param_1,param_2,&DAT_10009660,2);
  iVar2 = FUN_00432370(param_1,param_2,uVar1,&DAT_10009660,2);
  if (-1 < iVar2) {
    uVar3 = FUN_00431354(param_1,param_2);
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
