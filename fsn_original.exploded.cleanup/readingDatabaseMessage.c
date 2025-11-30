/**
 * readingDatabaseMessage
 *
 * Extracted from fsn.c lines 67116-67125
 * Category: Filesystem
 */

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(DAT_10016e10);
  XmTextInsert(DAT_10016e10,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
