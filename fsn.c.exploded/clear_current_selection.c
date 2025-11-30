/**
 * clear_current_selection
 *
 * Extracted from fsn.c lines 45202-45228
 * Category: Input
 */

void clear_current_selection(void)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_2c [11];
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x48) != 0) {
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c),0);
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),0);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(*piVar2 + 0x48);
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
    *(undefined4 *)(*piVar2 + 0x48) = 0;
    (**(code **)(unaff_gp + -0x79d4))();
    local_2c[1] = 0;
    local_2c[0] = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84),local_2c,1);
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88),local_2c,1);
    (**(code **)(unaff_gp + -0x79d0))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
