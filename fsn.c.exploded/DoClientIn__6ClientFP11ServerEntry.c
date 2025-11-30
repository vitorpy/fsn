/**
 * DoClientIn__6ClientFP11ServerEntry
 *
 * Extracted from fsn.c lines 62606-62662
 * Category: Other
 */

void DoClientIn__6ClientFP11ServerEntry(undefined4 param_1,int *param_2)

{
  ssize_t sVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iStack_4;
  
  if (param_2[4] == 0) {
    piVar2 = (int *)param_2[5];
    piVar4 = param_2 + 7;
    if (piVar4 != piVar2) {
      piVar3 = piVar4;
      if (piVar2 < (int *)param_2[6]) {
        do {
          *(undefined1 *)piVar3 = *(undefined1 *)piVar2;
          piVar2 = (int *)((int)piVar2 + 1);
          piVar3 = (int *)((int)piVar3 + 1);
        } while (piVar2 < (int *)param_2[6]);
      }
      param_2[5] = (int)piVar4;
      param_2[6] = (int)piVar3;
    }
    sVar1 = read(*param_2,(void *)param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (sVar1 != -1) {
      if (sVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + sVar1;
        if (((iVar5 + sVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          getword__FPcPl(param_2[5],&iStack_4);
          if ((uint)(param_2[6] - param_2[5]) < iStack_4 + 4U) {
            param_2[3] = 0;
          }
          else {
            param_2[3] = 1;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
