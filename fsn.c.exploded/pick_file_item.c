/**
 * pick_file_item
 *
 * Extracted from fsn.c lines 45472-45542
 * Category: Filesystem
 */

void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
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
    show_error_message(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      show_error_message(acStack_464);
    }
    else {
      __s1 = (char *)get_icon_attribute(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        show_error_message(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (wineditor_enabled != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            copy_file_item(param_1,param_2);
            halt_baddata();
          }
        }
        display_scan_status(param_6,pcVar1,2000);
        if (rest_mode_enabled != '\0') {
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
        if (current_dir_path != (char *)0x0) {
          XtFree(current_dir_path);
        }
        current_dir_path = pcVar1;
        uVar4 = get_icon_string(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_file_path != (char *)0x0) {
          XtFree(current_file_path);
        }
        current_file_path = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        update_status_display(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
