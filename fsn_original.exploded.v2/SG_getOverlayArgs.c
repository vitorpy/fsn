/**
 * SG_getOverlayArgs
 *
 * Extracted from fsn.c lines 70966-70995
 * Category: Other
 */

void SG_getOverlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_004314e0(param_1,param_2,&DAT_10009660,3);
  iVar2 = FUN_00432370(param_1,param_2,uVar1,&DAT_10009660,3);
  if (iVar2 < 0) {
    FUN_00432094(param_1,param_2,param_3,param_4);
  }
  else {
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431c80):
     * Function: SG_getOverlayArgs
     *
     * Looking at this assembly:
     * **What it does:**
     * Appends two entries to an array at s1 (likely an Arg/resource list). Each entry is 8 bytes (hence sll by 3 = multiply by 8). Entry 1: stores t6 and v1. Entry 2: stores (gp-32640)+104 and a2. s0 holds the running index counter, incremented after each entry.
     * **C pseudocode:**
     * ```c
     * // s0 = &n (argument count pointer)
     * // s1 = args (XtArgVal array base)
     * // t6 = resource_name_1, v1 = value_1
     * // a2 = value_2
     * // gp-32640 offset 104 = likely XmNvisual or similar Xt resource string
     * int i = *n;
     * args[i].name = resource_name_1;      // t6
     * args[i].value = value_1;             // v1
     * i++;
     * args[i].name = (XtPointer)(DAT_gp_8080 + 104);  // XmN* resource string
     * args[i].value = value_2;             // a2
     * i++;
     * *n = i;
     * return value_1;  // v0 = v1
     * ```
     * The `sll reg,0x3` pattern (shift left 3 = multiply by 8) confirms this is indexing into an array of 8-byte Arg structures (name + value pointers). The gp-relative load at 0x8080+104 is fetching a string constant, likely an Xt/Motif resource name like `XmNvisual` or `XmNcolormap`.
     */
halt_baddata();
}
