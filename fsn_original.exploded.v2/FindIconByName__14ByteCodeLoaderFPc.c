/**
 * FindIconByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72925-72953
 * Category: Other
 */

void FindIconByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_004357ec(&TheFileIconInterpreter);
  if ((DAT_10009c90 == 0) && (DAT_10009c8c == 0)) {
    FUN_00435938(&TheFileIconInterpreter);
    FUN_004349f8(param_1,s_Unknown_10009a20);
  }
  else {
    for (; iVar2 != 0; iVar2 = iVar2->display_mode /* was: *(int *)(iVar2 + 0x68) */) {
      if ((((*(int *)(iVar2 + 4) != 0) && (DAT_10009c90 == iVar2->pos_x /* was: *(int *)(iVar2 + 0x34) */)) &&
          (DAT_10009c80 != 0)) &&
         (iVar1 = FUN_00435a28(&TheFileIconInterpreter,*(int *)(iVar2 + 4),
                               *(undefined4 *)(iVar2 + 8),iVar2->file_array /* was: *(undefined4 *)(iVar2 + 0x10) */), iVar1 != 0
         )) {
        FUN_00435938(&TheFileIconInterpreter);
        FUN_00435034(0,iVar2);
            /*
     * BADDATA ANALYSIS (from binary @ 0x00434a7c):
     * Function: FindIconByName__14ByteCodeLoaderFPc
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Loads a ByteCodeLoader object pointer from GP, calls a method on it (likely getting the loader instance), checks if two fields at offsets 576 (0x240) and 572 (0x23c) are both NULL. If both are NULL, calls another function to initialize/load the icon database before proceeding with the icon lookup.
     * **C pseudocode:**
     * ```c
     * void* FindIconByName_14ByteCodeLoaderFPc(char* name) {
     * ByteCodeLoader* loader = g_bytecode_loader;  // GP-30228
     * some_init_func(loader);                       // GP-30564
     * if (loader->field_240 == NULL && loader->field_23c == NULL) {
     * load_icon_database(loader);               // GP-30560
     * }
     * // continues with icon lookup using name and GP-32660, GP-30640...
     * }
     * ```
     * The fields at 0x23c and 0x240 are likely icon table pointers - the code lazy-loads the icon database on first access if neither table is initialized.
     */
halt_baddata();
      }
    }
    FUN_00435938(&TheFileIconInterpreter);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434a7c):
     * Function: FindIconByName__14ByteCodeLoaderFPc
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Compares s0->field_52 with t9 (hash/type check), then if equal AND s1->field_560 is non-null, calls three functions via GP-indirect calls: first with (s1, s0->field_8, s0->field_16), then if that returns non-zero, calls another function with s1, then calls a third with (NULL, s0). Finally loads s0 = s0->next (offset 104).
     * **C pseudocode:**
     * ```c
     * if (t9 == node->type && loader->icon_table != NULL) {
     * if (CheckIconMatch(loader, node->name, node->size)) {
     * FinalizeIcon(loader);
     * RegisterIcon(NULL, node);
     * goto cleanup;  // branch to epilogue
     * }
     * }
     * node = node->next;  // linked list traversal at offset 0x68
     * ```
     * The GP offsets (-30548, -30560, -30620) are indirect calls through the GOT - likely to functions like a matching/comparison function, a finalization function, and a registration/callback function. The structure at s0 appears to be an icon definition node in a linked list (next pointer at offset 0x68=104).
     */
halt_baddata();
}
