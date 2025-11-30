/**
 * create_gl_window
 *
 * Extracted from fsn.c lines 47060-47097
 * Category: UI
 */

void create_gl_window(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = *(int **)(unaff_gp + -0x76b8);
  iVar4 = *piVar5;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c38);
    do {
      if (param_1 == *piVar1) {
        iVar4 = iVar4 + -1;
        if (iVar3 < iVar4) {
          iVar3 = *(int *)(unaff_gp + -0x7f94);
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < (int *)(iVar4 * 4 + iVar3 + 0x6c38));
        }
        iVar3 = *(int *)(unaff_gp + -0x7fe4);
        *piVar5 = iVar4;
        (*(code *)(iVar3 + 0x1c14))();
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
