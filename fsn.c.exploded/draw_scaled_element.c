/**
 * draw_scaled_element
 *
 * Extracted from fsn.c lines 49857-49928
 * Category: Graphics
 */

void draw_scaled_element(double param_1,double param_2)

{
  int unaff_gp;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (float)param_1;
  dVar3 = (double)CONCAT44((int)((ulonglong)in_f16 >> 0x20),in_stack_0000001c);
  local_4 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
  local_8 = (float)param_2;
  local_18 = (float)(dVar3 - (double)CONCAT44(in_register_00001090,in_stack_00000034));
  dVar3 = dVar3 + (double)CONCAT44(in_register_00001090,in_stack_00000034);
  fVar1 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000024);
  local_1c = (float)(double)CONCAT44(in_register_00001050,in_stack_0000002c);
  local_24 = (float)dVar3;
  local_20 = fVar1;
  local_14 = fVar1;
  local_10 = local_1c;
  if (in_stack_0000003b == '\0') {
    (**(code **)(unaff_gp + -0x7b9c))(in_stack_0000003c);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))(0,0);
    (**(code **)(unaff_gp + -0x7d68))((float)(double)CONCAT44(uVar2,in_stack_0000001c),fVar1);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7d64))(1);
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7b94))();
    (**(code **)(unaff_gp + -0x7d64))(0);
    (**(code **)(unaff_gp + -0x7d1c))(1);
    (**(code **)(unaff_gp + -0x7dc4))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7dbc))();
    (**(code **)(unaff_gp + -0x7d1c))(0);
  }
  else {
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7b94))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
