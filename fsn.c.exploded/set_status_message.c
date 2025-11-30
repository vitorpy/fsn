/**
 * set_status_message
 *
 * Extracted from fsn.c lines 38689-38720
 * Category: Filesystem
 */

void set_status_message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  
  puVar1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b40))(0xc);
  uVar2 = (**(code **)(unaff_gp + -0x7e90))(param_1);
  *puVar1 = uVar2;
  local_54 = *(int *)(unaff_gp + -0x7f60);
  piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x20);
  iVar4 = *piVar3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = iVar4;
  *piVar3 = (int)puVar1;
  local_54 = local_54 + 0x1d4d;
  local_50 = *puVar1;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6648),&local_54,1);
  if (param_2 != 0) {
    (**(code **)(unaff_gp + -0x7e94))
              (**(undefined4 **)(unaff_gp + -0x7600),param_2,*(undefined4 *)(unaff_gp + -0x7a9c),
               puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
