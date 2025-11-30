/**
 * FUN_0041ac8c
 *
 * Extracted from fsn.c lines 57496-57525
 * Ghidra address: 0x0041ac8c
 * Category: Other
 */

void FUN_0041ac8c(int param_1,int param_2)

{
  int unaff_gp;
  uint in_register_00001040;
  undefined4 uVar1;
  
  if (param_1 == *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c)) {
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (0,(float)((double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)in_register_00001040 << 0x20)));
    (**(code **)(unaff_gp + -0x7908) /* -> FUN_00427300 */)(param_2);
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((*(char *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc50) == '\0') ||
       (*(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 5) == '\0')) {
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
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
