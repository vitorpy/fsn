/**
 * readingDatabaseMessage
 *
 * Extracted from fsn.c lines 52246-52255
 * Category: Filesystem
 */

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
