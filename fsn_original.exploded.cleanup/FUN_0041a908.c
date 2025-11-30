/**
 * FUN_0041a908
 *
 * Extracted from fsn.c lines 57308-57327
 * Ghidra address: 0x0041a908
 * Category: Other
 */

void FUN_0041a908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
            ((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe8));
  fVar1 = (float)((double)-*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe4) /
                 (double)((ulonglong)in_register_00001080 << 0x20));
  (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
