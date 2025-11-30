/**
 * highlightByName
 *
 * Extracted from fsn.c lines 66034-66049
 * Category: Other
 */

void highlightByName(undefined4 param_1)

{
  undefined4 uStack_8;
  int iStack_4;
  
  FUN_0042ab1c(param_1,&iStack_4,&uStack_8);
  if (iStack_4 == 0) {
    FUN_004294cc();
  }
  else {
    FUN_00429640(iStack_4,uStack_8,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
