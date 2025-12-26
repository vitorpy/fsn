/**
 * FUN_0041aa04
 *
 * Extracted from fsn.c lines 57394-57462
 * Ghidra address: 0x0041aa04
 * Category: Other
 */

void FUN_0041aa04(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  uint in_register_00001090;
  undefined8 uVar8;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c)) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar4 = *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c);
    if (param_3 == iVar4->child_center /* was: *(int *)(iVar4 + 0x28) */) {
      (**(code **)(unaff_gp + -0x79f0) /* -> FUN_0041a908 */)
                ((ulonglong)uVar6 << 0x20,
                 (double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xdc)) /* =FUN_0041a908 */;
    }
    else if (param_3 == iVar4->child_left /* was: *(int *)(iVar4 + 0x2c) */) {
      (**(code **)(unaff_gp + -0x79f0) /* -> FUN_0041a908 */)
                ((double)-*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe0),
                 (double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xdc)) /* =FUN_0041a908 */;
    }
    else if (param_3 == iVar4->child_right /* was: *(int *)(iVar4 + 0x30) */) {
      (**(code **)(unaff_gp + -0x79f0) /* -> FUN_0041a908 */)
                ((double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe0),
                 (double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xdc)) /* =FUN_0041a908 */;
    }
    else {
      iVar3 = iVar4->child_count /* was: *(int *)(iVar4 + 0x14) */;
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = iVar4->child_array /* was: *(int **)(iVar4 + 0x18) */;
        do {
          if (param_3 == *piVar2) {
            fVar5 = *(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0xd0);
            uVar8 = CONCAT44(uVar6,(float)((double)-fVar5 *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) + (double)fVar5 * (double)iVar1));
            /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(uVar8,iVar3,iVar4,0);
            uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
            /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)(0xfffffc7c,0x7a);
            /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
                      (CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x50a4)),
                       CONCAT44(uVar9,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x50a0)));
            uVar9 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x509c);
            /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(uVar9,uVar9);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041aa04):
     * Function: FUN_0041aa04
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Performs a double-precision calculation: `result = (f16 * constant1) + constant2`, converts to single-precision, then calls a function (at GP-32240) with that result as arg3 (a2), while passing f12 as f14. After the call (or loop exit), calls another function (at GP-31528) before returning.
     * **C pseudocode:**
     * ```c
     * // At 41ac08-41ac38: Final iteration of spotlight/warp drawing
     * double temp = some_double * *(double*)&DAT_1000af6c;  // mul.d
     * temp = temp + *(double*)&DAT_1000af74;                 // add.d
     * float z_coord = (float)temp;                           // cvt.s.d
     * linesb(x, y, z_coord, 0.00244140625f);  // 0x3e7ae148 = 1/409.6, f14=f12
     * // At 41ac48-41ac54: Loop increment (v0++, v1+=4, loop while v0 < a0)
     * // At 41ac58-41ac64: Cleanup call
     * popmatrix();  // GP-31528 = popmatrix
     * ```
     * The 0x3e7ae148 constant (≈0.00244) suggests a line width or texture parameter. The double-precision math with conversion to float is typical of the spotlight/warp beam Z-coordinate calculations seen elsewhere in FSN's highlighting code.
     */
halt_baddata();
}
