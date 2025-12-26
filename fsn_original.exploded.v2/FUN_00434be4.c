/**
 * FUN_00434be4
 *
 * Extracted from fsn.c lines 73024-73050
 * Ghidra address: 0x00434be4
 * Category: Other
 */

void FUN_00434be4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar3 = TheFileIconInterpreter /* was: *(int *)(unaff_gp + -0x7614) */ /* -> TheFileIconInterpreter */;
  iVar2 = *param_1;
  (**(code **)(unaff_gp + -0x7764) /* -> FUN_004357ec */)(iVar3) /* =FUN_004357ec */;
  while( true ) {
    if (iVar2 == 0) {
      (**(code **)(unaff_gp + -0x7760) /* -> FUN_00435938 */)(iVar3) /* =FUN_00435938 */;
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00434be4):
     * Function: FUN_00434be4
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a global context pointer (s1), calls a function via GP offset -30564, then iterates through a linked list checking if node field at offset +52 matches context field at offset +576, and if context field at offset +560 is non-null before calling another function with node fields.
     * 2. **C pseudocode**:
     * ```c
     * void FUN_00434be4(void **list_ptr) {
     * Context *ctx = g_context;        // GP[-30228] -> s1
     * some_func(ctx);                  // GP[-30564](ctx)
     * Node *node = *list_ptr;          // s0 = a0[0]
     * while (node != NULL) {
     * void *next = node->field_04;
     * if (next != NULL &&
     * ctx->field_240 == node->field_34 &&  // ctx[576] == node[52]
     * ctx->field_230 != NULL) {            // ctx[560] != 0
     * // GP[-30548](???, node->field_08, node->field_10)
     * another_func(???, node->field_08, node->field_10);
     * }
     * node = next;  // continue iteration
     * }
     * }
     * ```
     * The function name from symbols (`FindInfoByName__14ByteCodeLoaderFPc`) suggests this is a C++ method `ByteCodeLoader::FindInfoByName(char*)` that searches a linked list for a node matching some criteria in the current context.
     */
halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar3 + 0x240) == iVar2->pos_x /* was: *(int *)(iVar2 + 0x34) */)) &&
        (*(int *)(iVar3 + 0x230) != 0)) &&
       (iVar1 = (**(code **)(unaff_gp + -0x7754) /* -> FUN_00435a28 */)
                          (iVar3,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                           iVar2->file_array /* was: *(undefined4 *)(iVar2 + 0x10) */) /* =FUN_00435a28 */, iVar1 != 0)) break;
    iVar2 = iVar2->display_mode /* was: *(int *)(iVar2 + 0x68) */;
  }
  (**(code **)(unaff_gp + -0x7760) /* -> FUN_00435938 */)(iVar3) /* =FUN_00435938 */;
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434be4):
     * Function: FUN_00434be4
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is the tail of a linked list search loop. After calling strcmp (at gp-30560), if match found (v0!=0), it calls free(s1) and returns the current node (s0). If no match, it follows the next pointer at offset 0x68, loops back, or returns NULL after freeing s1.
     * **C pseudocode:**
     * ```c
     * // ... continuing from loop that calls strcmp(s0->name, s1) ...
     * if (strcmp_result != 0) {
     * free(s1);           // gp-30560 = free
     * return s0;          // found match
     * }
     * s0 = s0->next;          // offset 0x68 is next pointer
     * } while (s0 != NULL);       // loop back to 434c18
     * free(s1);
     * return NULL;                // not found
     * ```
     * The structure has: offset 0x10 = name field (passed to strcmp earlier), offset 0x68 = next pointer in linked list. GP offset -30560 (0x88a0) resolves to `free()`.
     */
halt_baddata();
}
