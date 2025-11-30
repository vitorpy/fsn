/**
 * SG_getPopupArgs
 *
 * Extracted from fsn.c lines 71105-71133
 * Category: Other
 */

void SG_getPopupArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_004314e0(param_1,param_2,&DAT_10009660,4);
  iVar2 = FUN_00432370(param_1,param_2,uVar1,&DAT_10009660,4);
  if (iVar2 < 0) {
    FUN_00431b34(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_00431354(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
