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
  
  (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(*(undefined2 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x32));
  (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  pfVar1 = (float *)**(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  fVar2 = pfVar1[0xf];
  if (fVar2 == 0.0) {
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*pfVar1 - pfVar1[5] * pfVar1[8] * pfVar1[2],
               pfVar1[1] - pfVar1[6] * pfVar1[8] * pfVar1[2]);
    uVar3 = extraout_var_00;
  }
  else {
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(undefined4 *)((int)fVar2 + 0x34),*(undefined4 *)((int)fVar2 + 0x38));
    uVar3 = extraout_var;
  }
  (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
            ((float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6bf0)),
             (float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6bf4)));
  (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(3);
  (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
  (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ecc);
  (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ed4);
  (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
  (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6edc);
  (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ee4);
  (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
  (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
