/**
 * FUN_0042425c
 *
 * Extracted from fsn.c lines 62791-62875
 * Ghidra address: 0x0042425c
 * Category: Other
 */

void FUN_0042425c(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  double dVar6;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 0x74) << 3 < 0) {
    local_18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44dc);
    if ((((*(uint *)(param_2 + 0x74) >> 0x1e & **(uint **)(unaff_gp + -0x7670) /* -> curcontextflag */) != 0) ||
        ((int)(*(uint *)(param_2 + 0x74) << 2) < 0)) || ((*(ushort *)(param_2 + 0x74) & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar5 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
    local_c = local_18;
    if (*(short *)(param_2 + 0x76) < 0) {
      (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      (**(code **)(unaff_gp + -0x78f8) /* -> FUN_00427a3c */)
                (param_1 & 0xffffffff00000000,
                 (double)**(float **)(unaff_gp + -0x75c8) /* -> maxy */ *
                 (double)((ulonglong)extraout_var << 0x20));
      (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_2 + 0x18) + iVar4);
        if (*(int *)(iVar3 + 0x74) << 3 < 0) {
          (**(code **)(unaff_gp + -0x793c) /* -> FUN_0042425c */)(iVar3,param_3);
          (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)*(short *)(iVar3 + 0x5e));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x178);
          }
          else if (*(int *)(iVar3 + 0x74) << 0xd < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x168);
          }
          else {
            uVar2 = *(undefined4 *)(iVar5 + 0x17c);
          }
          (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(uVar2);
          dVar6 = (double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar3 + 0x4c);
          local_14 = (float)dVar6;
          local_10 = *(float *)(param_2 + 0x38) + *(float *)(iVar3 + 0x50);
          local_20 = *(undefined4 *)(iVar3 + 0x34);
          local_1c = (float)((double)*(float *)(iVar3 + 0x38) -
                            (double)*(float *)(iVar3 + 0x3c) /
                            (double)((ulonglong)dVar6 & 0xffffffff00000000));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(3);
          }
          (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_14);
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_20);
          (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
          }
          if ((param_3 == '\0') &&
             ((*(int *)(param_2 + 0x74) << 2 < 0 || (*(int *)(iVar3 + 0x74) << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          (**(code **)(unaff_gp + -0x7de8) /* -> EXTERNAL_0x0f1266ec */)();
          iVar1 = *(int *)(param_2 + 0x14);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
