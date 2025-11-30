/**
 * FUN_00429640
 *
 * Extracted from fsn.c lines 65881-65957
 * Ghidra address: 0x00429640
 * Category: Other
 */

void FUN_00429640(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  int unaff_gp;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_f4;
  
  uVar4 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7994);
  if ((param_2 != (undefined4 *)*piVar1) ||
     (param_1 != *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7990))) {
    *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7990) = param_1;
    *piVar1 = (int)param_2;
    (**(code **)(unaff_gp + -0x7ae0) /* -> FUN_0040bc28 */)();
    (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) /* -> overlayHighlightColor */ + 2));
    (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)((int)*(short *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x26));
    (**(code **)(unaff_gp + -0x7ccc) /* -> EXTERNAL_0x0f1282d0 */)(0);
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
              ((float)((double)((ulonglong)uVar4 << 0x20) /
                      (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x34)));
    (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc),0x7a);
    pfVar2 = (float *)**(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    if (pfVar2[0xf] == 0.0) {
      uVar3 = (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                        (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                         (pfVar2[1] - pfVar2[6] * pfVar2[8] * pfVar2[2]) /
                         *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3);
      pfVar2 = (float *)**(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    }
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(-*pfVar2,-pfVar2[1]);
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        (**(code **)(unaff_gp + -0x790c) /* -> FUN_0042728c */)(param_1);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7900) /* -> FUN_004277fc */)(param_1,param_2);
    }
    (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
    if (param_1 == 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6b9c))();
    }
    else {
      uVar3 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6c18))(uVar3);
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(uVar3,*param_2);
        (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x6c18))(uVar3);
      }
    }
    (**(code **)(unaff_gp + -0x7ccc) /* -> EXTERNAL_0x0f1282d0 */)(1);
    if (param_1 == 0) {
      (**(code **)(unaff_gp + -0x7984) /* -> FUN_00420b70 */)();
    }
    else {
      (**(code **)(unaff_gp + -0x7974) /* -> FUN_0042194c */)();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
