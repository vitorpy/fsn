/**
 * FUN_0040ed40
 *
 * Extracted from fsn.c lines 51102-51134
 * Ghidra address: 0x0040ed40
 * Category: Other
 */

void FUN_0040ed40(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xe3f48f1;
  local_8 = 1;
  if (displayHeight == 0) {
    XtSetValues(DAT_10016670,&local_c,1);
    XtSetSensitive(DAT_1001666c,0);
  }
  else if (displayHeight == 1) {
    XtSetValues(DAT_10016674,&local_c,1);
  }
  else if (displayHeight == 2) {
    XtSetValues(DAT_10016678,&local_c,1);
  }
  if (displayDirectoryHeight == 0) {
    XtSetValues(DAT_1001667c,&local_c,1);
  }
  else if (displayDirectoryHeight == 1) {
    XtSetValues(DAT_10016680,&local_c,1);
  }
  else if (displayDirectoryHeight == 2) {
    XtSetValues(DAT_10016684,&local_c,1);
  }
  if (altcontext[0xc51] != '\0') {
    XtSetValues(DAT_10016668,&local_c,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
