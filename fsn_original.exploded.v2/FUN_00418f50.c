/**
 * FUN_00418f50
 *
 * Extracted from fsn.c lines 56434-56475
 * Ghidra address: 0x00418f50
 * Category: Other
 */

void FUN_00418f50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  undefined4 uVar1;
  int unaff_gp;
  undefined8 in_f4;
  
  uVar1 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)((int)*(short *)((int)param_1 + 0x5e));
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)((float)(double)CONCAT44(uVar1,param_4));
    if ((int)(param_1[0x1d] << 0xd) < 0) {
      uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x168);
    }
    else {
      uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x16c);
    }
    /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(uVar1);
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)(0xfffffc7c,0x7a);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5104),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5100));
    if (param_5 == '\0') {
      uVar1 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50e8);
      /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(uVar1,uVar1);
      uVar1 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50d0);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
      (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(*param_1) /* =FUN_004189b0 */;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50fc);
      /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)(uVar1,uVar1);
    }
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418f50):
     * Function: FUN_00418f50
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
