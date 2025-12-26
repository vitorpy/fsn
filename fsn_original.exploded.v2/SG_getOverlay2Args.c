/**
 * SG_getOverlay2Args
 *
 * Extracted from fsn.c lines 71001-71028
 * Category: Other
 */

void SG_getOverlay2Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00432370(param_1,param_2,2,&DAT_10009660,3);
  if (iVar1 < 0) {
    FUN_00432094(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_00431354(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431df0):
     * Function: SG_getOverlay2Args
     *
     * Looking at this assembly:
     * 1. **What it does:** Builds an argument array by storing values and type codes at array[index*8] and array[index*8+4], incrementing the index counter after each pair. Uses a GP-relative pointer (gp-32640 + 104) for one of the values.
     * 2. **C pseudocode:**
     * ```c
     * // s0 = &argcount, s1 = argarray base, t8 from GP = some global struct
     * int idx = *argcount;
     * argarray[idx].value = some_value;      // sw t5,0(s0) context differs
     * argarray[idx].type = 2;
     * idx++;
     * *argcount = idx;
     * argarray[idx].value = (global_ptr + 104);  // gp-relative: likely a widget or string
     * argarray[idx].type = param_a2;             // a2 passed in
     * idx++;
     * *argcount = idx;
     * return 2;
     * ```
     * The structure appears to be 8-byte arg entries: `{void* value, int type}`. The GP load at -32640 offset +104 is likely accessing a field in a global structure (possibly topLevelShell+104 or similar widget offset). Return value 2 in v0.
     */
halt_baddata();
}
