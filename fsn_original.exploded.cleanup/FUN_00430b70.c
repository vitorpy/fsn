/**
 * FUN_00430b70
 *
 * Extracted from fsn.c lines 70282-70299
 * Ghidra address: 0x00430b70
 * Category: Other
 */

void FUN_00430b70(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016f04 = DAT_10016f04 == '\0';
  local_28 = 0xe3f40b5;
  if ((bool)DAT_10016f04) {
    local_24 = search_xmstring_2;
  }
  else {
    local_24 = search_xmstring_3;
  }
  XtSetValues(search_size_comp_button,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
