/**
 * FUN_0042194c
 *
 * Extracted from fsn.c lines 61402-61452
 * Ghidra address: 0x0042194c
 * Category: Other
 */

void FUN_0042194c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (*overviewActive /* was: *(char **)(unaff_gp + -0x76c4) */ /* -> overviewActive */ != '\0') {
    (**(code **)(unaff_gp + -0x799c) /* -> FUN_0041fdb0 */)() /* =FUN_0041fdb0 */;
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) /* -> overlayHighlightColor */ + 2));
    dVar3 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)uVar4 << 0x20);
    /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)
              ((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                      dVar3 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */),
               (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar3));
    iVar2 = param_1->child_center /* was: *(int *)(param_1 + 0x28) */;
    if (iVar2 != 0) {
      local_c = iVar2->pos_x /* was: *(float *)(iVar2 + 0x34) */ + param_1->offset_x /* was: *(float *)(param_1 + 0x4c) */ * param_1->scale /* was: *(float *)(param_1 + 0x58) */;
      local_8 = (float)((double)iVar2->pos_y /* was: *(float *)(iVar2 + 0x38) */ + (double)param_1->offset_y /* was: *(float *)(param_1 + 0x50) */);
      local_14 = param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */;
      local_10 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ +
                        (double)-param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                        (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000));
      /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(&local_c);
      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(&local_14);
      /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
    }
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b78 */ (**(code **)(unaff_gp + -0x7b78) /* -> EXTERNAL_0x0f123238 */)();
    /* TODO: GP:-0x7e10 */ (**(code **)(unaff_gp + -0x7e10) /* -> EXTERNAL_0x0f128180 */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x45a0),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x459c));
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    /* TODO: GP:-0x7da8 */ (**(code **)(unaff_gp + -0x7da8) /* -> EXTERNAL_0x0f125b1c */)(uVar1);
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042194c):
     * Function: FUN_0042194c
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
