/**
 * draw_directories
 *
 * Extracted from fsn.c lines 62881-63002
 * Category: Graphics
 */

void draw_directories(char param_1)

{
  float fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  selected_id_1 = 0;
  selected_id_2 = 0;
  if (*(int *)(curcontext + 0x3c) == 0) {
    if (topdir != 0) {
      if (param_1 == '\0') {
        fVar1 = powf(DAT_10017594,
                     (*(float *)(curcontext + 4) -
                     *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                     *(float *)(curcontext + 8)) / DAT_10017598);
        fVar1 = (DAT_100175a0 * *(float *)(curcontext + 0x34)) / fVar1;
        if (DAT_10017494 == '\0') {
          cpack(DAT_100175d8);
          bgnpolygon();
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          endpolygon();
        }
        else {
          shademodel(1);
          bgnpolygon();
          cpack(DAT_100175e0);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(DAT_100175dc);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
          bgnpolygon();
          cpack(DAT_100175dc);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          endpolygon();
          shademodel(1);
          bgnpolygon();
          cpack(DAT_100175ec);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) - DAT_100175a8;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) - DAT_100175a8;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(DAT_100175e8);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
        }
      }
      FUN_0042425c(topdir,param_1);
    }
  }
  else {
    FUN_00419424(*(int *)(curcontext + 0x3c),param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
