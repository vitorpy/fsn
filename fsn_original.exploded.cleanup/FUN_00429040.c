/**
 * FUN_00429040
 *
 * Extracted from fsn.c lines 65479-65533
 * Ghidra address: 0x00429040
 * Category: Other
 */

void FUN_00429040(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_gp;
  undefined4 local_30 [2];
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  
  local_24 = local_30;
  local_28 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
  (**(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */)(**(undefined4 **)(unaff_gp + -0x75f0) /* -> toplevel */,&local_28,1);
  puVar1 = *(undefined4 **)(unaff_gp + -0x75e8) /* -> legendLabel */;
  piVar2 = *(int **)(unaff_gp + -0x7688) /* -> dcolorBoxes */;
  iVar3 = *(int *)(unaff_gp + -0x75c4) /* -> labelColors */;
  puVar4 = puVar1 + 7;
  do {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x7340))
              (*(undefined4 *)(*piVar2 + 4),iVar3,*puVar1,local_30[0]);
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while (puVar1 != puVar4);
  iVar3 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
  if (*(char *)(iVar3 + 4) == '\0') {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8) /* -> lhLabelColor */;
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x7340))
              (*(undefined4 *)(iVar3 + 0x148),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x2c),local_30[0]);
  }
  else {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8) /* -> lhLabelColor */;
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x7340))
              (*(undefined4 *)(iVar3 + 0x14c),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x2c),local_30[0]);
  }
  if (*(int *)(**(int **)(unaff_gp + -0x7678) /* -> altcontextwindows */ + 0x2c) != 0) {
    local_24 = (undefined4 *)puVar1[1];
    local_1c = *puVar1;
    local_28 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0xd6;
    local_20 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x34;
    (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) /* -> altcontextwindows */ + 0x2c),&local_28,2);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x7340))
            (*(undefined4 *)(iVar3 + 0x174),*(undefined4 *)(unaff_gp + -0x75c0) /* -> monitorLabelColor */,
             **(undefined4 **)(unaff_gp + -0x75ec) /* -> monitorLabelWidget */,local_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
