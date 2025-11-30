/**
 * FUN_00430448
 *
 * Extracted from fsn.c lines 70101-70167
 * Ghidra address: 0x00430448
 * Category: Memory
 */

void FUN_00430448(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_44 [56];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00430358();
  DAT_10016edc = 0;
  pattern_match_enabled = 0;
  DAT_10016f08 = (char *)XmTextFieldGetString(search_name_field);
  if ((DAT_10016f08 != (char *)0x0) && (*DAT_10016f08 != '\0')) {
    pattern_match_enabled = pattern_match_enabled | 1;
  }
  pbVar1 = (byte *)XmTextFieldGetString(search_size_field);
  if (pbVar1 != (byte *)0x0) {
    iVar2 = isdigit((uint)*pbVar1);
    if (iVar2 != 0) {
      pattern_match_enabled = pattern_match_enabled | 2;
      search_number_value = atoi((char *)pbVar1);
    }
  }
  if (pbVar1 != (byte *)0x0) {
    XtFree(pbVar1);
  }
  pbVar1 = (byte *)XmTextFieldGetString(search_age_field);
  if (pbVar1 != (byte *)0x0) {
    iVar2 = isdigit((uint)*pbVar1);
    if (iVar2 != 0) {
      pattern_match_enabled = pattern_match_enabled | 4;
      DAT_10016f10 = atoi((char *)pbVar1);
    }
  }
  if (pbVar1 != (byte *)0x0) {
    XtFree(pbVar1);
  }
  if (pattern_match_enabled != 0) {
    FUN_0042ffd8(topdir);
  }
  if (DAT_10016f08 != (char *)0x0) {
    XtFree();
  }
  if (DAT_10016edc == 0) {
    sprintf(acStack_44,"Search: no matches");
    XtSetSensitive(DAT_10016ef8,0);
  }
  else if (DAT_10016edc == 1) {
    sprintf(acStack_44,"Search: 1 match");
    XtSetSensitive(DAT_10016ef8,1);
  }
  else {
    sprintf(acStack_44,"Search: %d matches");
    XtSetSensitive(DAT_10016ef8,1);
  }
  uVar3 = XmStringCreate(acStack_44,&default_charset);
  local_c = 0xe3f40b5;
  local_8 = uVar3;
  XtSetValues(search_count_label,&local_c,1);
  XmStringFree(uVar3);
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
