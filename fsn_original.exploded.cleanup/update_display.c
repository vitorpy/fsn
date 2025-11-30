/**
 * update_display
 *
 * Extracted from fsn.c lines 52715-52806
 * Category: Graphics
 */

void update_display(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_gp;
  float fVar4;
  undefined4 uVar5;
  uint in_register_00001010;
  double dVar6;
  double in_f6;
  float fVar7;
  undefined4 in_f11;
  
  (**(code **)(unaff_gp + -0x7848) /* -> FUN_0042df08 */)();
  (**(code **)(unaff_gp + -0x7f20) /* -> EXTERNAL_0x0fad4960 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66ac);
  piVar1 = *(int **)(unaff_gp + -0x76dc) /* -> displayHeight */;
  **(undefined4 **)(unaff_gp + -0x75cc) /* -> miny */ = 0;
  iVar2 = *piVar1;
  **(undefined4 **)(unaff_gp + -0x75c8) /* -> maxy */ = 0;
  **(undefined4 **)(unaff_gp + -0x75d4) /* -> minx */ = 0;
  **(undefined4 **)(unaff_gp + -0x75d0) /* -> maxx */ = 0;
  if (iVar2 == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b0) = 0x3f800000;
  }
  else {
    fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1774))
                             (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x184));
    *(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b0) =
         *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x68) / fVar4;
  }
  piVar1 = *(int **)(unaff_gp + -0x76d4) /* -> topdir */;
  *(undefined4 *)(*piVar1 + 0x2c) = 0;
  *(undefined4 *)(*piVar1 + 0x30) = 0;
  (**(code **)(unaff_gp + -0x7a70) /* -> FUN_00412604 */)(*piVar1);
  uVar5 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (**(int **)(unaff_gp + -0x76dc) /* -> displayHeight */ == 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b0) = 0x3f800000;
  }
  else {
    iVar2 = **(int **)(unaff_gp + -0x76d8) /* -> displayDirectoryHeight */;
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b4) = 0x3f800000;
    }
    else if ((iVar2 == 1) || (iVar2 != 2)) {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1774))
                               (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x18c));
      fVar7 = *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x6c);
      in_f6 = (double)CONCAT44(uVar5,fVar7);
      *(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b4) = fVar7 / fVar4;
    }
    else {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1774))
                               (*(undefined4 *)(*piVar1 + 0x20));
      in_f6 = (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x6c);
      *(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x66b4) = (float)(in_f6 / (double)fVar4);
    }
  }
  dVar6 = (double)*(float *)(*piVar1 + 0x3c);
  fVar4 = (float)(**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                           (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                            (float)((dVar6 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                                   (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108)));
  (**(code **)(unaff_gp + -0x7a6c) /* -> FUN_00412994 */)
            (*piVar1,param_2,0,0,in_f11,
             SUB84((double)((ulonglong)dVar6 & 0xffffffff00000000) / (double)fVar4,0));
  (**(code **)(unaff_gp + -0x7a68) /* -> FUN_00412bc0 */)(*piVar1,param_2,0,0);
  uVar5 = (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                     **(float **)(unaff_gp + -0x75c8) /* -> maxy */ /
                     *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
  **(undefined4 **)(unaff_gp + -0x75b8) /* -> maxShrinkage */ = uVar5;
  pcVar3 = *(code **)(unaff_gp + -0x783c) /* -> FUN_0042e5c4 */;
  **(float **)(unaff_gp + -0x75d0) /* -> maxx */ =
       (float)((double)**(float **)(unaff_gp + -0x75d0) /* -> maxx */ +
              (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75d4) /* -> minx */ =
       (float)((double)**(float **)(unaff_gp + -0x75d4) /* -> minx */ -
              (double)((ulonglong)in_register_00001010 << 0x20));
  dVar6 = (double)**(float **)(unaff_gp + -0x75c8) /* -> maxy */;
  **(float **)(unaff_gp + -0x75c8) /* -> maxy */ =
       (float)(dVar6 + (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75cc) /* -> miny */ =
       (float)((double)-*(float *)(*piVar1 + 0x3c) / (double)((ulonglong)dVar6 & 0xffffffff00000000)
              - (double)((ulonglong)in_register_00001010 << 0x20));
  (*pcVar3)();
  (**(code **)(unaff_gp + -0x7978) /* -> FUN_00421780 */)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
