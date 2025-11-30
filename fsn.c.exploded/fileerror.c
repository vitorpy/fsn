/**
 * fileerror
 *
 * Extracted from fsn.c lines 38846-38857
 * Category: Filesystem
 */

void fileerror(char *param_1,char *param_2)

{
  char acStack_434 [1076];
  
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  show_error_message(acStack_434);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
