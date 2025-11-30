/**
 * FUN_00417e28
 *
 * Extracted from fsn.c lines 55630-55754
 * Ghidra address: 0x00417e28
 * Category: Other
 */

void FUN_00417e28(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  int unaff_gp;
  undefined1 auStack_94 [20];
  uint local_80;
  int local_64;
  undefined4 local_54;
  int local_c;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    local_c = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1);
    iVar1 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(local_c);
    iVar1 = iVar1 + local_c;
    (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(iVar1,param_2);
    iVar2 = (**(code **)(unaff_gp + -0x7ee0) /* -> EXTERNAL_0x0facbb68 */)(local_c,auStack_94);
    if (-1 < iVar2) {
      bVar5 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar5 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar5 & 0x3f;
      if ((local_80 & 0xf000) == 0x4000) {
        iVar2 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1c04))();
          if (*(int *)(param_1 + 0x14) == 0) {
            uVar4 = (**(code **)(unaff_gp + -0x7c48) /* -> EXTERNAL_0x0fabf188 */)(4);
            *(undefined4 *)(param_1 + 0x18) = uVar4;
          }
          else {
            uVar4 = (**(code **)(unaff_gp + -0x7e74) /* -> EXTERNAL_0x0fac19a8 */)
                              (*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x14) * 4 + 4);
            *(undefined4 *)(param_1 + 0x18) = uVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puVar3;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          bVar5 = *(byte *)(puVar3 + 0x1d);
          iVar2 = *(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */;
          *(byte *)(puVar3 + 0x1d) = bVar5 | 8;
          *(byte *)(puVar3 + 0x1d) = bVar5 | 10;
          uVar4 = (*(code *)(iVar2 + 0x1d68))(param_2);
          *puVar3 = uVar4;
          uVar4 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
          puVar3[1] = uVar4;
          iVar2 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
          puVar3[3] = 0;
          puVar3[5] = 0;
          puVar3[10] = param_1;
          puVar3[2] = local_80;
          bVar7 = *(char *)(iVar2 + 3) != '\0';
          if (bVar7) {
            bVar7 = *(int *)(param_1 + 0x74) << 0xb < 0;
          }
          *(byte *)((int)puVar3 + 0x75) = bVar7 << 4 | *(byte *)((int)puVar3 + 0x75) & 0xef;
          if ((int)(puVar3[0x1d] << 0xb) < 0) {
            (**(code **)(unaff_gp + -0x78ec) /* -> FUN_00427e30 */)(puVar3);
          }
          iVar2 = *(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x80;
          bVar5 = (*(code *)(iVar2 + 0x38e8))(puVar3,local_c,iVar1,0);
          *(byte *)(param_1 + 0x75) = (bVar5 & 1) << 6 | *(byte *)(param_1 + 0x75) & 0xbf;
          if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
            (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x44ec))(param_1);
          }
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7848) /* -> FUN_0042df08 */)();
        iVar1 = (**(code **)(unaff_gp + -0x7a5c) /* -> FUN_00413580 */)(param_1,param_2);
        if (iVar1 == 0) {
          puVar3 = (undefined4 *)(*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x1b84))();
          if (*(int *)(param_1 + 0xc) == 0) {
            uVar4 = (**(code **)(unaff_gp + -0x7c48) /* -> EXTERNAL_0x0fabf188 */)(4);
            *(undefined4 *)(param_1 + 0x10) = uVar4;
          }
          else {
            uVar4 = (**(code **)(unaff_gp + -0x7e74) /* -> EXTERNAL_0x0fac19a8 */)
                              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0xc) * 4 + 4);
            *(undefined4 *)(param_1 + 0x10) = uVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 4) = puVar3;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          iVar1 = *(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */;
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 2;
          *(byte *)((int)puVar3 + 0x29) = *(byte *)((int)puVar3 + 0x29) | 0x80;
          uVar4 = (*(code *)(iVar1 + 0x1d68))(param_2);
          *puVar3 = uVar4;
          uVar4 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
          puVar3[1] = uVar4;
          puVar3[2] = local_80;
          uVar4 = (**(code **)(unaff_gp + -0x77e8) /* -> FUN_00433b44 */)(local_c);
          puVar3[8] = uVar4;
          iVar1 = *(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */;
          *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + local_64) - puVar3[3];
          uVar4 = (*(code *)(iVar1 + 0x18b0))(param_1);
          *(undefined4 *)(param_1 + 0x24) = uVar4;
          iVar1 = *(int *)(unaff_gp + -0x7f98) /* -> small */;
          puVar3[3] = local_64;
          piVar6 = (int *)(iVar1 + 0x184);
          if (*piVar6 < local_64) {
            *piVar6 = local_64;
          }
          piVar6 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x18c);
          if (*piVar6 < *(int *)(param_1 + 0x1c)) {
            *piVar6 = *(int *)(param_1 + 0x1c);
          }
          puVar3[4] = local_54;
          (**(code **)(unaff_gp + -0x7a74) /* -> FUN_00412400 */)(puVar3);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        (**(code **)(unaff_gp + -0x7a30) /* -> FUN_00417c2c */)(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
