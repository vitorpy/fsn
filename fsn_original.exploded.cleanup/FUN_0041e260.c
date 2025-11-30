/**
 * FUN_0041e260
 *
 * Extracted from fsn.c lines 59485-59555
 * Ghidra address: 0x0041e260
 * Category: Memory
 */

void FUN_0041e260(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char *pcVar1;
  char *__s1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_464 [1124];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    sprintf(acStack_464,"Don\'t know how to %s current selection",param_5);
    FUN_00410f74(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      FUN_00410f74(acStack_464);
    }
    else {
      __s1 = (char *)FUN_00433c08(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        FUN_00410f74(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (DAT_10017496 != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            FUN_00429fd4(param_1,param_2);
            halt_baddata();
          }
        }
        FUN_00410e7c(param_6,pcVar1,2000);
        if (DAT_10006e58 != '\0') {
          sVar2 = strlen("REST=");
          XtMalloc(sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        sprintf(acStack_464,"LEADER=%s",pcVar1);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (DAT_10016bdc != (char *)0x0) {
          XtFree(DAT_10016bdc);
        }
        DAT_10016bdc = pcVar1;
        uVar4 = FUN_00433bdc(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (DAT_10016be0 != (char *)0x0) {
          XtFree(DAT_10016be0);
        }
        DAT_10016be0 = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        FUN_0042fda4(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
