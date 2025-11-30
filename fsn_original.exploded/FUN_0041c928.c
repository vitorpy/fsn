/**
 * FUN_0041c928
 *
 * Extracted from fsn.c lines 58447-58467
 * Ghidra address: 0x0041c928
 * Category: Other
 */

void FUN_0041c928(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = DAT_10006e54;
  if ((param_1 != DAT_10006e54) && (iVar2 = 0, cVar1 = param_1, 0 < array_index)) {
    puVar3 = &menu_items_array;
    do {
      XtSetSensitive(*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      cVar1 = param_1;
    } while (iVar2 < array_index);
  }
  DAT_10006e54 = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
