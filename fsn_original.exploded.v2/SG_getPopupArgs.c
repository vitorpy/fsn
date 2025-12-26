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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00432088):
     * Function: SG_getPopupArgs
     *
     * Looking at this assembly:
     * **What it does:**
     * Builds an Xt/Motif argument list (Arg array). Each entry is 8 bytes (resource name pointer + value). Stores XmNuserData resource at `gp[-32640]+104` with value from `a2`, increments the arg count stored at `*s0`, then returns the count from stack offset 56.
     * **C pseudocode:**
     * ```c
     * // s0 = &argcount, s1 = arglist base, a2 = userData value
     * int idx = *argcount;
     * arglist[idx].name = XmNuserData;  // gp[-32640]+104 = string "userData"
     * arglist[idx].value = 2;           // XmNuserData resource type
     * idx++;
     * *argcount = idx;
     * arglist[idx].name = XmNuserData;  // redundant store pattern
     * arglist[idx].value = userData;    // a2 parameter
     * idx++;
     * *argcount = idx;
     * return sp[56];  // return final arg count
     * ```
     * Actually, looking closer at the 8-byte stride pattern (`sll by 3` = multiply by 8), this is standard `XtSetArg()` macro expansion where `Arg` struct is `{String name, XtArgVal value}`. The `gp[-32640]+104` resolves to a resource string constant (likely `XmNuserData`).
     */
halt_baddata();
}
