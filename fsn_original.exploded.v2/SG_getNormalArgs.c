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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431b28):
     * Function: SG_getNormalArgs
     *
     * Looking at this assembly:
     * **What it does:**
     * Stores pairs of (pointer, value) into an array at s1, indexed by a counter at s0. Each iteration: stores a pointer, stores a value at offset +4, increments counter. Three pairs total are stored: (t6, v1), (gp_offset+104, a2), then increments counter and returns.
     * **C pseudocode:**
     * ```c
     * // s0 = &argc (argument count pointer)
     * // s1 = argv (argument array base, pairs of 8 bytes each)
     * // Structure: argv[i] = { void* type_ptr, void* value }
     * int idx = *argc;
     * argv[idx].type = t6_ptr;      // some type pointer
     * argv[idx].value = v1;         // first value (likely XtNx or similar)
     * idx++;
     * argv[idx].type = gp[-32640] + 104;  // another Xt resource string
     * argv[idx].value = a2;         // second value (likely XtNy or similar)
     * idx++;
     * *argc = idx;
     * return v1;
     * ```
     * This is building an Xt/Motif argument list (Arg array) for widget creation - the classic `XtSetArg(args[n], XtNresource, value); n++;` pattern, but done manually with pointer arithmetic. Each entry is 8 bytes (pointer to resource name string + 4-byte value).
     */
halt_baddata();
}
