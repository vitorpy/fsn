/**
 * FUN_0042ab1c
 *
 * Extracted from fsn.c lines 66916-67047
 * Ghidra address: 0x0042ab1c
 * Category: Other
 */

void FUN_0042ab1c(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int unaff_gp;
  undefined4 *local_110;
  int *local_10c;
  char *local_108 [30];
  char **local_90;
  char *local_8c [30];
  char **local_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)();
  piVar9 = *(int **)(unaff_gp + -0x76d4) /* -> topdir */;
  if (uVar2 <= (uint)((undefined4 *)*piVar9)[1]) {
    uVar3 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_1);
    iVar4 = (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(param_1,*(undefined4 *)*piVar9,uVar3);
    if (iVar4 != 0) {
      halt_baddata();
    }
    *param_2 = *piVar9;
    halt_baddata();
  }
  iVar4 = (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(param_1,*(undefined4 *)*piVar9);
  if (iVar4 != 0) {
    halt_baddata();
  }
  iVar4 = *piVar9;
  pcVar7 = (char *)(param_1 + *(int *)(iVar4 + 4));
  cVar1 = *pcVar7;
  while (cVar1 == '/') {
    pcVar5 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar5;
  }
  pcVar5 = (char *)(**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar7,0x2f);
  while (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
    iVar4 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(iVar4,pcVar7);
    if (iVar4 == 0) {
      *pcVar5 = '/';
      halt_baddata();
    }
    cVar1 = pcVar5[1];
    while (pcVar7 = pcVar5 + 1, cVar1 == '/') {
      cVar1 = pcVar5[2];
      pcVar5 = pcVar7;
    }
    pcVar5 = (char *)(**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar7,0x2f);
  }
  if (*pcVar7 == '\0') {
    *param_2 = iVar4;
    halt_baddata();
  }
  if (*(int *)(iVar4 + 0xc) != 0) {
    local_90 = local_108;
    local_108[0] = pcVar7;
    iVar6 = (**(code **)(unaff_gp + -0x7878) /* -> FUN_0042a9b4 */)
                      (&local_90,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc),4,
                       *(undefined4 *)(unaff_gp + -0x7a64) /* -> compare_files */,&local_110);
    if (iVar6 != 0) {
      *param_2 = iVar4;
      *param_3 = *local_110;
      halt_baddata();
    }
    if (local_110 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*local_110;
      iVar6 = *(int *)(iVar4 + 0x14);
      goto LAB_0042ad4c;
    }
  }
  puVar10 = (undefined4 *)0x0;
  iVar6 = *(int *)(iVar4 + 0x14);
LAB_0042ad4c:
  if (iVar6 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_8c[0] = pcVar7;
    local_14[0] = local_8c;
    iVar6 = (**(code **)(unaff_gp + -0x7878) /* -> FUN_0042a9b4 */)
                      (local_14,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x14),4,
                       *(undefined4 *)(unaff_gp + -0x7a60) /* -> compare_dirs */,&local_10c);
    if (iVar6 != 0) {
      *param_2 = *local_10c;
      halt_baddata();
    }
    puVar8 = (undefined4 *)0x0;
    if (local_10c != (int *)0x0) {
      puVar8 = (undefined4 *)*local_10c;
    }
  }
  if ((puVar8 != (undefined4 *)0x0) && (puVar10 != (undefined4 *)0x0)) {
    iVar6 = (**(code **)(unaff_gp + -0x7f34) /* -> EXTERNAL_0x0fabf768 */)(*puVar10,*puVar8);
    if (iVar6 < 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)0x0;
    }
  }
  if (puVar10 == (undefined4 *)0x0) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar7);
      iVar4 = (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(*puVar8,pcVar7,uVar3);
      if (iVar4 == 0) {
        *param_2 = (int)puVar8;
      }
    }
  }
  else {
    uVar3 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar7);
    iVar6 = (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(*puVar10,pcVar7,uVar3);
    if (iVar6 == 0) {
      *param_2 = iVar4;
      *param_3 = puVar10;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
