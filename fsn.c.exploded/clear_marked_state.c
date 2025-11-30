/**
 * clear_marked_state
 *
 * Extracted from fsn.c lines 45031-45060
 * Category: Filesystem
 */

void clear_marked_state(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x44) != 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fe4);
    *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    (*(code *)(iVar2 + -0x2be8))();
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
    (**(code **)(unaff_gp + -0x79c0))();
    piVar1 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) = *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(*piVar1 + 0x44) = 0;
    *(undefined1 *)(*piVar1 + 0x4c) = 0;
    (**(code **)(unaff_gp + -0x79d4))();
    local_24 = **(undefined4 **)(unaff_gp + -0x75f8);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x20),&local_28,1);
    (**(code **)(unaff_gp + -0x79d0))();
    (**(code **)(unaff_gp + -0x798c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
