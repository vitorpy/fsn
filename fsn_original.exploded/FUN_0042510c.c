/**
 * FUN_0042510c
 *
 * Extracted from fsn.c lines 63008-63154
 * Ghidra address: 0x0042510c
 * Category: Other
 */

void FUN_0042510c(char param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int unaff_gp;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(unaff_gp + -0x7f94);
  piVar4 = *(int **)(unaff_gp + -0x7684);
  iVar2 = *piVar4;
  *(undefined4 *)(iVar1 + 0x6c60) = 0;
  *(undefined4 *)(iVar1 + 0x6c64) = 0;
  if (*(int *)(iVar2 + 0x3c) == 0) {
    iVar1 = **(int **)(unaff_gp + -0x76d4);
    if (iVar1 != 0) {
      if (param_1 == '\0') {
        iVar1 = *(int *)(unaff_gp + -0x75dc);
        fVar5 = (float)(**(code **)(unaff_gp + -0x7b64))
                                 (*(undefined4 *)(iVar1 + 0x104),
                                  (*(float *)(iVar2 + 4) -
                                  *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x20) *
                                  *(float *)(iVar2 + 8)) / *(float *)(iVar1 + 0x108));
        fVar5 = (*(float *)(iVar1 + 0x110) * *(float *)(*piVar4 + 0x34)) / fVar5;
        if (*(char *)(iVar1 + 4) == '\0') {
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x148));
          (**(code **)(unaff_gp + -0x7dc4))();
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x448c))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4484))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          iVar1 = **(int **)(unaff_gp + -0x76d4);
        }
        else {
          (**(code **)(unaff_gp + -0x7cc8))(1);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x150));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(0);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x449c))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4494))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(1);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x15c));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x158));
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(0);
          iVar1 = **(int **)(unaff_gp + -0x76d4);
        }
      }
      (**(code **)(unaff_gp + -0x793c))(iVar1,param_1);
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79fc))(*(int *)(iVar2 + 0x3c),param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
