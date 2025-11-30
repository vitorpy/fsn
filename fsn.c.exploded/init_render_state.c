/**
 * init_render_state
 *
 * Extracted from fsn.c lines 50734-50788
 * Category: Graphics
 */

void init_render_state(void)

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
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  (**(code **)(unaff_gp + -0x7c9c))(**(undefined4 **)(unaff_gp + -0x75f0),&local_28,1);
  puVar1 = *(undefined4 **)(unaff_gp + -0x75e8);
  piVar2 = *(int **)(unaff_gp + -0x7688);
  iVar3 = *(int *)(unaff_gp + -0x75c4);
  puVar4 = puVar1 + 7;
  do {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(*piVar2 + 4),iVar3,*puVar1,local_30[0]);
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while (puVar1 != puVar4);
  iVar3 = *(int *)(unaff_gp + -0x75dc);
  if (*(char *)(iVar3 + 4) == '\0') {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x148),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  else {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x14c),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  if (*(int *)(**(int **)(unaff_gp + -0x7678) + 0x2c) != 0) {
    local_24 = (undefined4 *)puVar1[1];
    local_1c = *puVar1;
    local_28 = *(int *)(unaff_gp + -0x7f5c) + 0xd6;
    local_20 = *(int *)(unaff_gp + -0x7f5c) + 0x34;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x2c),&local_28,2);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
            (*(undefined4 *)(iVar3 + 0x174),*(undefined4 *)(unaff_gp + -0x75c0),
             **(undefined4 **)(unaff_gp + -0x75ec),local_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
