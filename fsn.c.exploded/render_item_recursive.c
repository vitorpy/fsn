/**
 * render_item_recursive
 *
 * Extracted from fsn.c lines 42455-42496
 * Category: Graphics
 */

void render_item_recursive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  undefined4 uVar1;
  int unaff_gp;
  undefined8 in_f4;
  
  uVar1 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_1 + 0x5e));
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))((float)(double)CONCAT44(uVar1,param_4));
    if ((int)(param_1[0x1d] << 0xd) < 0) {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x168);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x16c);
    }
    (**(code **)(unaff_gp + -0x7b9c))(uVar1);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b68))(0xfffffc7c,0x7a);
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5104),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5100));
    if (param_5 == '\0') {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50e8);
      (**(code **)(unaff_gp + -0x7df0))(uVar1,uVar1);
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50d0);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
      (**(code **)(unaff_gp + -0x7a08))(*param_1);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50fc);
      (**(code **)(unaff_gp + -0x7e20))(uVar1,uVar1);
    }
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
