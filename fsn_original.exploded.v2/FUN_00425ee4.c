/**
 * FUN_00425ee4
 *
 * Extracted from fsn.c lines 63438-63500
 * Ghidra address: 0x00425ee4
 * Category: Other
 */

void FUN_00425ee4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int unaff_gp;
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (param_3->render_flags /* was: *(int *)(param_3 + 0x74) */ << 3 < 0) {
    /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)(2);
    /* TODO: GP:-0x7db0 */ (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)param_3->name_index /* was: *(short *)(param_3 + 0x5e) */);
    if (param_3->depth_indicator /* was: *(short *)(param_3 + 0x76) */ < 0) {
      dVar3 = (double)*maxy /* was: *(float **)(unaff_gp + -0x75c8) */ /* -> maxy */ * (double)((ulonglong)extraout_var << 0x20);
      (**(code **)(unaff_gp + -0x78f8) /* -> FUN_00427a3c */)(0,dVar3) /* =FUN_00427a3c */;
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    uVar4 = CONCAT44(uVar1,param_3->pos_y /* was: *(undefined4 *)(param_3 + 0x38) */);
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(param_3->pos_x /* was: *(undefined4 *)(param_3 + 0x34) */,uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(param_3->scale /* was: *(undefined4 *)(param_3 + 0x58) */);
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    uVar4 = CONCAT44(uVar1,param_3->height /* was: *(undefined4 *)(param_3 + 0x3c) */);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(param_3->height /* was: *(undefined4 *)(param_3 + 0x3c) */,uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(0,0,0x1f) /* =FUN_00422284 */;
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0,(ulonglong)uVar2 << 0x20);
    (**(code **)(unaff_gp + -0x7940) /* -> FUN_00423b3c */)(param_3,1,7,0x1f) /* =FUN_00423b3c */;
    /* TODO: GP:-0x7de8 */ (**(code **)(unaff_gp + -0x7de8) /* -> EXTERNAL_0x0f1266ec */)();
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    if (param_3->child_center /* was: *(int *)(param_3 + 0x28) */ != 0) {
      /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)(1);
      /* TODO: GP:-0x7db0 */ (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)param_3->name_index /* was: *(short *)(param_3 + 0x5e) */);
      local_c = *(float *)(param_3->child_center /* was: *(int *)(param_3 + 0x28) */ + 0x34) + param_3->offset_x /* was: *(float *)(param_3 + 0x4c) */;
      local_10 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4480);
      local_8 = (float)((double)*(float *)(param_3->child_center /* was: *(int *)(param_3 + 0x28) */ + 0x38) +
                       (double)param_3->offset_y /* was: *(float *)(param_3 + 0x50) */);
      local_18 = param_3->pos_x /* was: *(undefined4 *)(param_3 + 0x34) */;
      local_14 = (float)((double)param_3->pos_y /* was: *(float *)(param_3 + 0x38) */ -
                        (double)param_3->height /* was: *(float *)(param_3 + 0x3c) */ /
                        (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000)
                        );
      local_4 = local_10;
      /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_18);
      /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
      /* TODO: GP:-0x7de8 */ (**(code **)(unaff_gp + -0x7de8) /* -> EXTERNAL_0x0f1266ec */)();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425ee4):
     * Function: FUN_00425ee4
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Calls popmatrix() twice (once with sp+100, once with sp+88 as implicit context), then calls swapbuffers(), then calls gflush(). Standard IrisGL cleanup sequence at end of a rendering function.
     * **2. C pseudocode:**
     * ```c
     * popmatrix();    /* GP offset -32192 (0x8240) = popmatrix */
     * popmatrix();    /* GP offset -32192 (0x8240) = popmatrix, different matrix */
     * swapbuffers();  /* GP offset -31636 (0x846c) = swapbuffers */
     * gflush();       /* GP offset -32232 (0x8218) = gflush */
     * return;         /* epilogue: restore ra, s0, adjust sp by 112 */
     * ```
     * Note: The two popmatrix calls with different stack offsets (sp+100 and sp+88) suggest restoring two different matrix contexts that were pushed earlier in the function - likely projection and modelview matrices.
     */
halt_baddata();
}
