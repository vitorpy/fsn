/**
 * highlightSpecialDir
 *
 * Extracted from fsn.c lines 43306-43323
 * Category: Filesystem
 */

void highlightSpecialDir(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  translate((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
            (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  rotate((int)-*(short *)(curcontext + 0xe),0x78);
  translate(0,translate_y_offset);
  fVar1 = (float)((double)-rotation_factor_y / (double)((ulonglong)in_register_00001080 << 0x20));
  rect(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
