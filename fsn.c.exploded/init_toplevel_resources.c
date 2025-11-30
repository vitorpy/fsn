/**
 * init_toplevel_resources
 *
 * Extracted from fsn.c lines 52530-52574
 * Category: Init
 */

void init_toplevel_resources(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e5c))
            (**(undefined4 **)(unaff_gp + -0x7600),*(int *)(unaff_gp + -0x7f5c) + 0x705,
             *(int *)(unaff_gp + -0x7fa4) + 0x2c2c,*(int *)(unaff_gp + -0x7fe0) + -0x4908,0,0);
  (**(code **)(unaff_gp + -0x7e54))
            (param_1,*(int *)(unaff_gp + -0x7f94) + 0x6e20,*(int *)(unaff_gp + -0x7f94) + -0x76e8,1,
             0,0);
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6e20);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(unaff_gp + -0x7cbc))(9);
    piVar2 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x6e20);
    if (iVar3 < 4) {
      iVar3 = *(int *)(unaff_gp + -0x7fa4) + 0x2c34;
      *piVar2 = iVar3;
    }
    else {
      iVar3 = *(int *)(unaff_gp + -0x7fa4) + 0x2c3c;
      *piVar2 = iVar3;
    }
  }
  if (iVar3 == 0) {
    (**(code **)(unaff_gp + -0x7e54))
              (param_1,*(undefined4 *)(unaff_gp + -0x75dc),*(int *)(unaff_gp + -0x7f98) + 0x7c30,
               0x76,0,0);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7c64))
                      (iVar3,**(undefined4 **)(unaff_gp + -0x7f7c),param_1,0,0);
    (**(code **)(unaff_gp + -0x7e54))
              (uVar1,*(undefined4 *)(unaff_gp + -0x75dc),*(int *)(unaff_gp + -0x7f98) + 0x7c30,0x76,
               0,0);
    (**(code **)(unaff_gp + -0x7ec8))(uVar1);
  }
  (**(code **)(unaff_gp + -0x77f0))
            (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x2c44,*(int *)(unaff_gp + -0x7fa4) + 0x2c4c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
