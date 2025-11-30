/**
 * layout_db
 *
 * Extracted from fsn.c lines 52646-52709
 * Category: Other
 */

void layout_db(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  uint in_register_00001010;
  double dVar2;
  undefined4 uVar3;
  double in_f6;
  undefined4 in_f11;
  
  FUN_0042df08();
  time(&DAT_100166ac);
  miny = 0.0;
  maxy = 0.0;
  minx = 0.0;
  maxx = 0.0;
  if (displayHeight == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    DAT_100166b0 = 1.0;
  }
  else {
    fVar1 = (float)FUN_00411774(DAT_10000184);
    DAT_100166b0 = DAT_100174f8 / fVar1;
  }
  *(undefined4 *)(topdir + 0x2c) = 0;
  *(undefined4 *)(topdir + 0x30) = 0;
  FUN_00412604(topdir);
  uVar3 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (displayHeight == 0) {
    DAT_100166b0 = 1.0;
  }
  else if (displayDirectoryHeight == 0) {
    DAT_100166b4 = 1.0;
  }
  else if ((displayDirectoryHeight == 1) || (displayDirectoryHeight != 2)) {
    fVar1 = (float)FUN_00411774(DAT_1000018c);
    in_f6 = (double)CONCAT44(uVar3,DAT_100174fc);
    DAT_100166b4 = DAT_100174fc / fVar1;
  }
  else {
    fVar1 = (float)FUN_00411774(*(undefined4 *)(topdir + 0x20));
    in_f6 = (double)DAT_100174fc;
    DAT_100166b4 = (float)(in_f6 / (double)fVar1);
  }
  dVar2 = (double)*(float *)(topdir + 0x3c);
  fVar1 = powf(DAT_10017594,
               (float)((dVar2 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                      (double)DAT_10017598));
  FUN_00412994(topdir,param_2,0,0,in_f11,
               SUB84((double)((ulonglong)dVar2 & 0xffffffff00000000) / (double)fVar1,0));
  FUN_00412bc0(topdir,param_2,0,0);
  maxShrinkage = powf(DAT_10017594,maxy / DAT_10017598);
  maxx = (float)((double)maxx + (double)((ulonglong)in_register_00001010 << 0x20));
  minx = (float)((double)minx - (double)((ulonglong)in_register_00001010 << 0x20));
  dVar2 = (double)maxy;
  maxy = (float)(dVar2 + (double)((ulonglong)in_register_00001010 << 0x20));
  miny = (float)((double)-*(float *)(topdir + 0x3c) /
                 (double)((ulonglong)dVar2 & 0xffffffff00000000) -
                (double)((ulonglong)in_register_00001010 << 0x20));
  FUN_0042e5c4();
  FUN_00421780();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
