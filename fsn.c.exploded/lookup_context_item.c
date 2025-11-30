/**
 * lookup_context_item
 *
 * Extracted from fsn.c lines 44241-44302
 * Category: Other
 */

void lookup_context_item(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf000;
  if (uVar1 == 0x1000) {
    file_type_char = 0x70;
  }
  else if (uVar1 == 0x2000) {
    file_type_char = 99;
  }
  else if (uVar1 == 0x4000) {
    file_type_char = 100;
  }
  else if (uVar1 == 0x6000) {
    file_type_char = 0x62;
  }
  else if (uVar1 == 0x8000) {
    file_type_char = 0x2d;
  }
  else if (uVar1 == 0xa000) {
    file_type_char = 0x6c;
  }
  else if (uVar1 == 0xc000) {
    file_type_char = 0x73;
  }
  else {
    file_type_char = 0x3f;
  }
  strcpy(&perm_owner_str,(&permission_string_table)[param_1 >> 6 & 7]);
  strcpy(&perm_group_str,(&permission_string_table)[param_1 >> 3 & 7]);
  strcpy(&perm_other_str,(&permission_string_table)[param_1 & 7]);
  if ((param_1 & 0x800 | 0x600) != 0) {
    if ((param_1 & 0x800) != 0) {
      if ((param_1 & 0x40) == 0) {
        perm_setuid_char = 0x53;
      }
      else {
        perm_setuid_char = 0x73;
      }
    }
    if ((param_1 & 0x400) != 0) {
      if ((param_1 & 8) == 0) {
        perm_setgid_char = 0x6c;
      }
      else {
        perm_setgid_char = 0x73;
      }
    }
    if ((param_1 & 0x200) != 0) {
      if ((param_1 & 1) == 0) {
        perm_sticky_char = 0x54;
      }
      else {
        perm_sticky_char = 0x74;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
