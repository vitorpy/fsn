/**
 * FUN_0042f8bc
 *
 * Extracted from fsn.c lines 69675-69722
 * Ghidra address: 0x0042f8bc
 * Category: Other
 */

void FUN_0042f8bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_gp;
  short local_8 [4];
  
  piVar6 = (int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6adc);
  iVar3 = 0;
  if (0 < *piVar6) {
    piVar5 = *(int **)(unaff_gp + -0x7f64) /* -> EXTERNAL_0x0fb51f00 */;
    iVar2 = 0;
    piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6ae0);
    do {
      if (*piVar5 == 0) {
        iVar1 = *param_1;
        *param_1 = iVar1 + -1;
        if (iVar1 + -1 < 0) {
          (**(code **)(unaff_gp + -0x7d78) /* -> EXTERNAL_0x0fad42ac */)(7,param_1);
          iVar1 = *piVar4;
        }
        else {
          *(undefined1 *)param_1[1] = 7;
          param_1[1] = param_1[1] + 1;
          iVar1 = *piVar4;
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7d7c) /* -> EXTERNAL_0x0fadf928 */)(7,param_1);
        iVar1 = *piVar4;
      }
      local_8[0] = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(*(undefined4 *)(iVar1 + iVar2 + 0x38));
      (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)(local_8,2,1,param_1);
      (**(code **)(unaff_gp + -0x7d74) /* -> EXTERNAL_0x0fae05a4 */)
                (*(undefined4 *)(*piVar4 + iVar2 + 0x38),1,(int)local_8[0],param_1);
      (**(code **)(unaff_gp + -0x7830) /* -> FUN_0042e9b4 */)(iVar3 * 0x40 + *piVar4,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *piVar6);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
