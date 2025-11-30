/**
 * draw_special
 *
 * Extracted from fsn.c lines 56268-56320
 * Category: Graphics
 */

void draw_special(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined8 in_f4;
  double dVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint unaff_000010a0;
  
  uVar2 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    loadname((int)*(short *)((int)param_1 + 0x5e));
    pushmatrix();
    translate((float)(double)CONCAT44(unaff_000010a0,param_4),(float)(double)CONCAT44(uVar2,param_6)
             );
    rotate((int)-*(short *)(curcontext + 0xe),0x78);
    translate(0,DAT_10017578);
    cpack(DAT_10017600);
    dVar5 = (double)-DAT_10017574;
    fVar6 = (float)(dVar5 / (double)((ulonglong)unaff_000010a0 << 0x20));
    rectf(fVar6,fVar6);
    uVar4 = (uint)((ulonglong)dVar5 >> 0x20);
    pushmatrix();
    dVar5 = (double)-DAT_10017574;
    dVar3 = dVar5 / (double)((ulonglong)unaff_000010a0 << 0x20);
    translate((float)((double)(int)param_1[1] * (double)CONCAT44(uVar4,0x33333334)),
              (float)(dVar3 - (double)((ulonglong)uVar4 << 0x20)));
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    uVar4 = (uint)((ulonglong)dVar5 >> 0x20);
    scale(0x3d4ccccd,0x3d4ccccd);
    FUN_004189b0(*param_1);
    popmatrix();
    pushmatrix();
    sVar1 = strlen(param_2);
    dVar5 = (double)(int)sVar1;
    if ((int)sVar1 < 0) {
      dVar5 = dVar5 + (double)((ulonglong)uVar4 << 0x20);
    }
    translate((float)(dVar5 * (double)CONCAT44(uVar2,0x33333334)),
              (float)((double)DAT_10017574 / (double)((ulonglong)unaff_000010a0 << 0x20) +
                     (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),0x9999999a)));
    scale(0x3d4ccccd,0x3d4ccccd);
    FUN_004189b0(param_2);
    popmatrix();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
