/**
 * draw_entry
 *
 * Extracted from fsn.c lines 49563-49605
 * Category: Graphics
 */

void draw_entry(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  
  if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c60)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c64);
    (**(code **)(unaff_gp + -0x7b60))
              (*(float *)(iVar1 + 0x14) - (*(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74)),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24))();
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f28);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f30);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f38);
    (**(code **)(unaff_gp + -0x7d20))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
  else if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c64)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c60);
    (**(code **)(unaff_gp + -0x7b60))
              (*(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24))();
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f10);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f18);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f20);
    (**(code **)(unaff_gp + -0x7d20))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
