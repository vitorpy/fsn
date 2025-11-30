/**
 * FUN_0041a358
 *
 * Extracted from fsn.c lines 57080-57147
 * Ghidra address: 0x0041a358
 * Category: Other
 */

void FUN_0041a358(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint in_register_00001020;
  int local_40c;
  short local_3f0 [500];
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar5 = -1;
  local_40c = -1;
  (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
  (**(code **)(unaff_gp + -0x7dd0) /* -> EXTERNAL_0x0f1214b8 */)(10,10);
  (**(code **)(unaff_gp + -0x7dd4) /* -> EXTERNAL_0x0f121cb8 */)(local_3f0,500);
  (**(code **)(unaff_gp + -0x7adc) /* -> FUN_0040bfa0 */)();
  (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
            ((float)((double)((ulonglong)in_register_00001020 << 0x20) /
                    (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x34)));
  (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc),0x7a);
  (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
            (-*(float *)**(int **)(unaff_gp + -0x7684) /* -> curcontext */,-((float *)**(int **)(unaff_gp + -0x7684) /* -> curcontext */)[1]
            );
  (**(code **)(unaff_gp + -0x79fc) /* -> FUN_00419424 */)(*(undefined4 *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c),1);
  iVar1 = (**(code **)(unaff_gp + -0x7dd8) /* -> EXTERNAL_0x0f1232b8 */)(local_3f0);
  (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)local_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)local_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        local_40c = (int)local_3f0[iVar3 + 2];
        iVar5 = (int)local_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (local_4 = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)(iVar5), -1 < local_40c)) {
    if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c)) {
      local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_40c * 4);
    }
    else {
      (**(code **)(unaff_gp + -0x7c08) /* -> EXTERNAL_0x0fac7f1c */)
                (*(int *)(unaff_gp + -0x7f68) /* -> EXTERNAL_0x0fb528e4 */ + 0x20,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5164);
      local_4 = 0;
    }
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
