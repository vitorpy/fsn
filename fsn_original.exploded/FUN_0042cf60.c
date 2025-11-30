/**
 * FUN_0042cf60
 *
 * Extracted from fsn.c lines 67972-68048
 * Ghidra address: 0x0042cf60
 * Category: Memory
 */

void FUN_0042cf60(undefined4 param_1,char param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  FILE *local_18;
  
  pcVar2 = (char *)XmTextFieldGetString(DAT_10016e48);
  if (pcVar2 != (char *)0x0) {
    local_18 = fopen(pcVar2,"a");
    XtFree(pcVar2);
  }
  if (local_18 == (FILE *)0x0) {
    FUN_00410f74("Could not open save file");
  }
  else {
    ppuVar5 = &PTR_s_shrinkOnZoom_10008950;
    puVar4 = PTR_s_shrinkOnZoom_10008950;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (*(char *)(ppuVar5 + 3) != *ppuVar5[1])) {
        if (*ppuVar5[1] == '\0') {
          pcVar2 = "FALSE";
        }
        else {
          pcVar2 = "TRUE";
        }
        fprintf(local_18,"Fsn*%s: %s\n",*ppuVar5,pcVar2);
        *(undefined *)(ppuVar5 + 3) = *ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 5;
      ppuVar5 = ppuVar5 + 5;
      puVar4 = *ppuVar1;
    }
    ppuVar5 = &PTR_s_monitorTimeout_100089f0;
    puVar4 = PTR_s_monitorTimeout_100089f0;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (ppuVar5[5] != *(undefined **)ppuVar5[1])) {
        fprintf(local_18,"Fsn*%s: %d\n",*ppuVar5,*(undefined4 *)ppuVar5[1]);
        ppuVar5[5] = *(undefined **)ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 7;
      ppuVar5 = ppuVar5 + 7;
      puVar4 = *ppuVar1;
    }
    ppuVar5 = &PTR_s_mouseSpeed_10008b5c;
    puVar4 = PTR_s_mouseSpeed_10008b5c;
    while (puVar4 != (undefined *)0x0) {
      if (param_2 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      fprintf(local_18,"Fsn*%s: %f\n",*ppuVar5);
      puVar4 = ppuVar5[8];
      ppuVar5[6] = *(undefined **)ppuVar5[1];
      ppuVar5 = ppuVar5 + 8;
    }
    ppuVar5 = &PTR_s_groundColor_1000935c;
    puVar4 = PTR_s_groundColor_1000935c;
    while (puVar4 != (undefined *)0x0) {
      if ((param_2 != '\0') || (ppuVar5[2] != *(undefined **)ppuVar5[1])) {
        uVar3 = *(uint *)ppuVar5[1];
        fprintf(local_18,"Fsn*%s: #%02x%02x%02x\n",*ppuVar5,uVar3 & 0xff,(int)uVar3 >> 8 & 0xff,
                (int)uVar3 >> 0x10 & 0xff);
        ppuVar5[2] = *(undefined **)ppuVar5[1];
      }
      ppuVar1 = ppuVar5 + 4;
      ppuVar5 = ppuVar5 + 4;
      puVar4 = *ppuVar1;
    }
    fclose(local_18);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
