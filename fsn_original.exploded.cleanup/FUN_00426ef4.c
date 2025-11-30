/**
 * FUN_00426ef4
 *
 * Extracted from fsn.c lines 64148-64204
 * Ghidra address: 0x00426ef4
 * Category: Other
 */

void FUN_00426ef4(int param_1)

{
  int iVar1;
  int unaff_gp;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44)) {
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
                (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    fVar3 = (float)((double)-*(float *)(param_1 + 0x3c) /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(fVar3,fVar3);
    (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      local_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      local_10 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x447c);
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      local_8 = (float)dVar2;
      local_18 = *(undefined4 *)(param_1 + 0x34);
      local_14 = (float)((double)*(float *)(param_1 + 0x38) -
                        (double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)dVar2 & 0xffffffff00000000));
      local_4 = local_10;
      (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
      (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
      (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_18);
      (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
      (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
      (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38))
      ;
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(*(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x58));
      (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(0,0,0x1f);
      (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
