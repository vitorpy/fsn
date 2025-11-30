/**
 * FUN_0042087c
 *
 * Extracted from fsn.c lines 60854-60897
 * Ghidra address: 0x0042087c
 * Category: Other
 */

void FUN_0042087c(void)

{
  float *pfVar1;
  float fVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  uint uVar3;
  
  (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(**(int **)(unaff_gp + -0x767c) + 0x32));
  (**(code **)(unaff_gp + -0x7b48))();
  pfVar1 = (float *)**(int **)(unaff_gp + -0x7684);
  fVar2 = pfVar1[0xf];
  if (fVar2 == 0.0) {
    (**(code **)(unaff_gp + -0x7b60))
              (*pfVar1 - pfVar1[5] * pfVar1[8] * pfVar1[2],
               pfVar1[1] - pfVar1[6] * pfVar1[8] * pfVar1[2]);
    uVar3 = extraout_var_00;
  }
  else {
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)((int)fVar2 + 0x34),*(undefined4 *)((int)fVar2 + 0x38));
    uVar3 = extraout_var;
  }
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf0)),
             (float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf4)));
  (**(code **)(unaff_gp + -0x7e0c))(3);
  (**(code **)(unaff_gp + -0x7b7c))();
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ecc);
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ed4);
  (**(code **)(unaff_gp + -0x7b94))();
  (**(code **)(unaff_gp + -0x7b7c))();
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6edc);
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ee4);
  (**(code **)(unaff_gp + -0x7b94))();
  (**(code **)(unaff_gp + -0x7e0c))(1);
  (**(code **)(unaff_gp + -0x7b28))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
