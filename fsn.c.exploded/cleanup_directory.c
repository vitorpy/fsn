/**
 * cleanup_directory
 *
 * Extracted from fsn.c lines 40932-40959
 * Category: Filesystem
 */

void cleanup_directory(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  undefined1 local_400 [1024];
  
  local_400[0] = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(unaff_gp + -0x7a84))(local_400);
  }
  iVar1 = (**(code **)(unaff_gp + -0x7c20))(local_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x38e8))(param_1,local_400,local_400 + iVar1,1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(unaff_gp + -0x7a98))(*(int *)(unaff_gp + -0x7fa4) + -0x5804,0);
    (**(code **)(unaff_gp + -0x7a88))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x44ec))(param_1);
    (**(code **)(unaff_gp + -0x7a9c))(uVar2);
    (**(code **)(unaff_gp + -0x7a78))();
  }
  (**(code **)(unaff_gp + -0x79b8))();
  (**(code **)(unaff_gp + -0x7acc))();
  (**(code **)(unaff_gp + -0x7880))();
  (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x4da4))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
