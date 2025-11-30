/**
 * spotlight
 *
 * Extracted from fsn.c lines 49781-49851
 * Category: Graphics
 */

void spotlight(double param_1,double param_2)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 in_register_00001040;
  undefined4 in_register_00001050;
  undefined8 in_f16;
  undefined4 in_register_00001090;
  undefined4 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000034;
  char in_stack_0000003b;
  undefined4 in_stack_0000003c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_c = (float)param_1;
  dVar3 = (double)CONCAT44((int)((ulonglong)in_f16 >> 0x20),in_stack_0000001c);
  fStack_4 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
  fStack_8 = (float)param_2;
  fStack_18 = (float)(dVar3 - (double)CONCAT44(in_register_00001090,in_stack_00000034));
  dVar3 = dVar3 + (double)CONCAT44(in_register_00001090,in_stack_00000034);
  fVar1 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000024);
  fStack_1c = (float)(double)CONCAT44(in_register_00001050,in_stack_0000002c);
  fStack_24 = (float)dVar3;
  fStack_20 = fVar1;
  fStack_14 = fVar1;
  fStack_10 = fStack_1c;
  if (in_stack_0000003b == '\0') {
    cpack(in_stack_0000003c);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    pushmatrix();
    translate(0,0);
    circf((float)(double)CONCAT44(uVar2,in_stack_0000001c),fVar1);
    popmatrix();
    linesmooth(1);
    bgnline();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endline();
    linesmooth(0);
    setpattern(1);
    bgnpolygon();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endpolygon();
    setpattern(0);
  }
  else {
    bgnline();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endline();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
