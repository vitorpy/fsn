/**
 * SG_getVisualArgs
 *
 * Extracted from fsn.c lines 71265-71288
 * Category: Other
 */

void SG_getVisualArgs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00432370();
  uVar2 = FUN_00431354(param_1,param_2,uVar1,param_4,param_5);
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x004324ec):
     * Function: SG_getVisualArgs
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This builds an X11/Xt argument list (ArgList). It appends two attribute-value pairs to an array at `a0`, using `v1` as the count pointer. The attributes come from GP-relative data (visual-related Xt resources), values from `a1` and stack. Returns `a1` (the visual).
     * **2. C pseudocode:**
     * ```c
     * // a0 = args array, v1 = &argc, a1 = visual, a2 = depth (from earlier)
     * // t5 from stack offset 40 = colormap
     * int idx = *argc;
     * args[idx].name = XtNvisual;      // or similar resource constant
     * args[idx].value = visual;
     * *argc = idx + 1;
     * idx = *argc;
     * args[idx].name = DAT_gp[-32640] + 104;  // XtNcolormap or XtNdepth
     * args[idx].value = colormap;             // from sp+40
     * *argc = idx + 1;
     * return visual;  // move v0,a1
     * ```
     * The pattern `sll reg,0x3` (shift left 3 = multiply by 8) confirms this is indexing into an `Arg` struct array (each Arg is 8 bytes: name + value pointers). The GP-relative load at offset -32640 + 104 is likely accessing an Xt resource string constant like `XtNcolormap`.
     */
halt_baddata();
}
