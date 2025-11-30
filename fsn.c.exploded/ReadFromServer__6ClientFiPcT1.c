/**
 * ReadFromServer__6ClientFiPcT1
 *
 * Extracted from fsn.c lines 62733-62797
 * Category: Filesystem
 */

void ReadFromServer__6ClientFiPcT1(int *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iStack_14;
  int aiStack_10 [4];
  
  for (piVar4 = (int *)*param_1; (piVar4 != (int *)0x0 && (param_2 != *piVar4));
      piVar4 = (int *)piVar4[1]) {
  }
  if (piVar4 == (int *)0x0) {
    _operation_type_code = 2;
  }
  else {
    if (piVar4[3] == 0) {
      search_file_entry(param_1,piVar4);
    }
    if ((uint)(piVar4[6] - piVar4[5]) < 4) {
      iStack_14 = 0;
      iVar2 = piVar4[5];
    }
    else {
      getword__FPcPl(piVar4[5],&iStack_14);
      iVar2 = piVar4[5];
    }
    if ((uint)(piVar4[6] - iVar2) < iStack_14 + 4U) {
      _operation_type_code = 0x43;
    }
    else {
      iVar1 = 0;
      if (iStack_14 < param_4) {
        param_4 = iStack_14;
      }
      piVar4[5] = iVar2 + 4;
      if (0 < param_4) {
        do {
          puVar3 = (undefined1 *)(piVar4[5] + iVar1);
          iVar1 = iVar1 + 1;
          *param_3 = *puVar3;
          param_3 = param_3 + 1;
        } while (iVar1 < param_4);
      }
      iVar2 = piVar4[5] + iStack_14;
      piVar4[5] = iVar2;
      if ((uint)(piVar4[6] - iVar2) < 4) {
        piVar4[3] = 0;
      }
      else {
        getword__FPcPl(iVar2,aiStack_10);
        if ((uint)(piVar4[6] - piVar4[5]) < aiStack_10[0] + 4U) {
          piVar4[3] = 0;
        }
        else {
          piVar4[3] = 1;
        }
      }
      piVar4[4] = 0;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
