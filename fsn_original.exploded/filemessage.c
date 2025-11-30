/**
 * filemessage
 *
 * Extracted from fsn.c lines 52058-52079
 * Category: Filesystem
 */

void filemessage(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char acStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  set_status_message(acStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
