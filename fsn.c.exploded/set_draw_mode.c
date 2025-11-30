/**
 * set_draw_mode
 *
 * Extracted from fsn.c lines 44468-44488
 * Category: Graphics
 */

void set_draw_mode(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = previous_state_char;
  if ((param_1 != previous_state_char) && (iVar2 = 0, cVar1 = param_1, 0 < array_index)) {
    puVar3 = &menu_items_array;
    do {
      XtSetSensitive(*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      cVar1 = param_1;
    } while (iVar2 < array_index);
  }
  previous_state_char = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
