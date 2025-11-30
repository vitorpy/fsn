/**
 * FUN_0040cf9c
 *
 * Extracted from fsn.c lines 50538-50568
 * Ghidra address: 0x0040cf9c
 * Category: Other
 */

void FUN_0040cf9c(undefined8 param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  float fVar4;
  undefined4 in_register_00001010;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar4 = (float)(**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                           (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                            *(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 4) /
                            *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
  piVar3 = *(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  pfVar1 = (float *)*piVar3;
  *pfVar1 = (float)((double)*pfVar1 +
                   ((double)pfVar1[5] * (double)CONCAT44(in_register_00001010,(int)param_1) +
                   (double)pfVar1[6] * (double)CONCAT44(uVar5,param_2)) / (double)fVar4);
  iVar2 = *piVar3;
  *(float *)(iVar2 + 4) =
       (float)((double)*(float *)(iVar2 + 4) +
              (double)-*(float *)(iVar2 + 0x14) * (double)CONCAT44(uVar5,param_2) +
              (double)*(float *)(iVar2 + 0x18) * (double)CONCAT44(in_register_00001010,(int)param_1)
              );
  (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
