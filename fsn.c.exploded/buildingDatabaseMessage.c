/**
 * buildingDatabaseMessage
 *
 * Extracted from fsn.c lines 52279-52288
 * Category: Other
 */

void buildingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b64);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
