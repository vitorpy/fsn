/**
 * FUN_0042757c
 *
 * Extracted from fsn.c lines 64352-64377
 * Ghidra address: 0x0042757c
 * Category: Other
 */

void FUN_0042757c(int param_1,int param_2)

{
  int unaff_gp;
  undefined4 uVar1;
  
  (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38))
  ;
  (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(*(undefined4 *)(param_1 + 0x58));
  (**(code **)(unaff_gp + -0x7908) /* -> FUN_00427300 */)(param_2);
  (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18))
  ;
  if (((*(char *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc50) == '\0') ||
      (*(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 5) == '\0')) ||
     (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44))) {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
