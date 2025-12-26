/**
 * pickWarp
 *
 * Extracted from fsn.c lines 57012-57074
 * Category: Input
 */

void pickWarp(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_register_00001020;
  int iStack_40c;
  short asStack_3f0 [500];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0;
  uStack_8 = 0;
  iVar5 = -1;
  iStack_40c = -1;
  pushmatrix();
  initnames();
  picksize(10,10);
  pick(asStack_3f0,500);
  FUN_0040bfa0();
  scale((float)((double)((ulonglong)in_register_00001020 << 0x20) /
               (double)curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */));
  rotate((int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
  rotate((int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */,0x7a);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  FUN_00419424(curcontext->zoom_mode /* was: *(undefined4 *)(curcontext + 0x3c) */,1);
  iVar1 = endpick(asStack_3f0);
  popmatrix();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)asStack_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)asStack_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        iStack_40c = (int)asStack_3f0[iVar3 + 2];
        iVar5 = (int)asStack_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (iStack_4 = FUN_00411e68(iVar5), -1 < iStack_40c)) {
    if (iStack_4 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
      uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_40c * 4);
    }
    else {
      fprintf((FILE *)0xfb52904,"found file in another dir\n");
      iStack_4 = 0;
    }
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a34c):
     * Function: pickWarp
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls a function via GP indirect (likely sprintf/strcpy with format string at offset -20836), then branches to store results. The 1072/1076/1080/1084/1088(sp) are output parameters passed by pointer - stores computed values to three caller-provided pointers and zeros a fourth.
     * 2. **C pseudocode:**
     * ```c
     * // At 41a5c4: call to string function (GP-31752 with format at GP-32676 offset -20836)
     * some_string_func(param + 32, format_string);
     * // Branch target at 41a5fc - store results to output pointers
     * *out_param1 = local_1076;  // 1076(sp) -> [1080(sp)]
     * *out_param2 = local_1072;  // 1072(sp) -> [1084(sp)]
     * *out_param3 = 0;           // zero -> [1088(sp)]
     * // Epilogue: restore ra, s1, s0, deallocate 1080 bytes stack frame, return
     * ```
     * The path at 41a5e4-41a5f8 (before the branch target) does: `local_1072 = v0[4][t8]` - indexed array lookup from function result, suggesting the string function returns a structure with an array at offset 16.
     */
halt_baddata();
}
