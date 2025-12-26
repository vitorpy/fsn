/**
 * FUN_00418c30
 *
 * Extracted from fsn.c lines 56326-56389
 * Ghidra address: 0x00418c30
 * Category: Other
 */

void FUN_00418c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int unaff_gp;
  undefined8 in_f4;
  double dVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint unaff_000010a0;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)((int)*(short *)((int)param_1 + 0x5e));
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              ((float)(double)CONCAT44(unaff_000010a0,param_4),
               (float)(double)CONCAT44(uVar7,param_6));
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe8));
    /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x170));
    dVar4 = (double)-*(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0xe4);
    fVar5 = (float)(dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20));
    /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)(fVar5,fVar5);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    dVar4 = (double)-*(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0xe4);
    dVar2 = dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              ((float)((double)(int)param_1[1] *
                      (double)CONCAT44(uVar3,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5124)
                                      )),(float)(dVar2 - (double)((ulonglong)uVar3 << 0x20)));
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    uVar6 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x5120);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar6,uVar6);
    (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(*param_1) /* =FUN_004189b0 */;
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
    dVar4 = (double)iVar1;
    if (iVar1 < 0) {
      dVar4 = dVar4 + (double)((ulonglong)uVar3 << 0x20);
    }
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              ((float)(dVar4 * (double)CONCAT44(uVar7,*(undefined4 *)
                                                       (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5114))),
               (float)((double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe4) /
                       (double)((ulonglong)unaff_000010a0 << 0x20) +
                      (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),
                                       *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x510c))));
    uVar7 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x5108);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
    (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(param_2) /* =FUN_004189b0 */;
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418c30):
     * Function: FUN_00418c30
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls `rot(angle, angle)` where angle is loaded from a global float, then calls `popmatrix()` via a0 (from stack), then calls `popmatrix()` twice more. Finally restores saved registers and returns.
     * **2. C pseudocode:**
     * ```c
     * // GP-31596 = rot, GP-31528 = popmatrix, GP-32676+(-20744) = global angle
     * float angle = *(float*)(&DAT_1000aef8);  // or similar global
     * rot(angle, angle);      // rotate with same angle for both params (unusual - likely 'a' axis char)
     * popmatrix();            // called via param from stack[44] - possibly indirect
     * popmatrix();
     * popmatrix();
     * // function epilogue - restore $f20, $f21, ra, return
     * ```
     * Note: The `mov.s $f14,$f12` copies the same float to both $f12 and $f14 (first two float args), suggesting `rot(angle, angle)` or `rot(angle, 'a')` where 'a'=0x61 might be axis. The triple popmatrix suggests unwinding 3 nested matrix pushes from earlier in the function.
     */
halt_baddata();
}
