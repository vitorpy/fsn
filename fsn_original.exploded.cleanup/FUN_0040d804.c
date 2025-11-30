/**
 * FUN_0040d804
 *
 * Extracted from fsn.c lines 50712-50743
 * Ghidra address: 0x0040d804
 * Category: Other
 */

void FUN_0040d804(void)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  int local_50;
  int local_4c;
  
  if ((**(char **)(unaff_gp + -0x75e0) /* -> controlsShowing */ != '\0') &&
     (iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */, *(char *)(iVar1 + 0xc53) == '\0')) {
    if (*(short *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x148) != *(short *)(iVar1 + 0xc)) {
      local_50 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x35b;
      iVar2 = *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */;
      *(short *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x148) = *(short *)(iVar1 + 0xc);
      local_4c = (int)*(short *)(iVar1 + 0xc);
      (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(*(undefined4 *)(iVar2 + 0x663c),&local_50,1);
      iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    }
    if (*(short *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x14c) != *(short *)(iVar1 + 0xe)) {
      local_50 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x35b;
      iVar2 = *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */;
      *(short *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x14c) = *(short *)(iVar1 + 0xe);
      local_4c = (int)*(short *)(iVar1 + 0xe);
      (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(*(undefined4 *)(iVar2 + 0x6640),&local_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
