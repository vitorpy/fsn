/**
 * FUN_004307bc
 *
 * Extracted from fsn.c lines 70173-70192
 * Ghidra address: 0x004307bc
 * Category: Other
 */

void FUN_004307bc(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016edc = 0;
  XmTextFieldSetString(search_name_field,&DAT_10013d18);
  XmTextFieldSetString(search_size_field,&DAT_10013d1c);
  XmTextFieldSetString(search_age_field,&DAT_10013d20);
  XtSetSensitive(DAT_10016ef8,0);
  FUN_00430358();
  local_24 = search_xmstring_1;
  local_28 = 0xe3f40b5;
  XtSetValues(search_count_label,&local_28,1);
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
