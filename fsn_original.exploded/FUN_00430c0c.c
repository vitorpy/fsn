/**
 * FUN_00430c0c
 *
 * Extracted from fsn.c lines 70305-70322
 * Ghidra address: 0x00430c0c
 * Category: Other
 */

void FUN_00430c0c(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016f05 = DAT_10016f05 == '\0';
  local_28 = 0xe3f40b5;
  if ((bool)DAT_10016f05) {
    local_24 = search_xmstring_2;
  }
  else {
    local_24 = search_xmstring_3;
  }
  XtSetValues(search_age_comp_button,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
