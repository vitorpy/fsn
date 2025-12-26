/**
 * FindInfoByName__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72996-73018
 * Category: Other
 */

void FindInfoByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_004357ec(&TheFileIconInterpreter);
  while( true ) {
    if (iVar2 == 0) {
      FUN_00435938(&TheFileIconInterpreter);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00434bd8):
     * Function: FindInfoByName__14ByteCodeLoaderFPc
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Searches a linked list for a node whose field at offset 0x34 matches ByteCodeLoader's field at offset 0x240, starting from the head stored at the object passed in a0. Returns matching node's data (offset 4) or NULL.
     * **C pseudocode:**
     * ```c
     * void* FindInfoByName__14ByteCodeLoaderFPc(ByteCodeLoader* loader, char* name) {
     * // s1 = global ByteCodeLoader instance (from GP-30228)
     * ByteCodeLoader* self = g_byteCodeLoader;
     * // Call strlen or similar on self (jalr at 434c04)
     * some_init_func(self);
     * // s0 = loader->head (first node in list)
     * Node* node = loader->head;
     * if (node == NULL) return NULL;
     * while (node != NULL) {
     * void* data = node->data;           // offset 4
     * if (data == NULL) goto next;
     * uint32_t target_id = self->field_240;  // offset 0x240 = 576
     * uint32_t node_id = node->field_34;     // offset 0x34 = 52
     * if (target_id != node_id) goto next;
     * void* field_230 = self->field_230;     // offset 0x230 = 560
     * if (field_230 == NULL) goto next;
     * // Match found - continues with strcmp or similar at 434c4c
     * // ...
     * next:
     * node = node->next;
     * }
     * return NULL;
     * }
     * ```
     * The function iterates a linked list comparing a 32-bit ID at node+0x34 against ByteCodeLoader+0x240, with additional validation that node->data and self->field_230 are non-null before proceeding to string comparison.
     */
halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (DAT_10009c90 == iVar2->pos_x /* was: *(int *)(iVar2 + 0x34) */)) &&
        (DAT_10009c80 != 0)) &&
       (iVar1 = FUN_00435a28(&TheFileIconInterpreter,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             iVar2->file_array /* was: *(undefined4 *)(iVar2 + 0x10) */), iVar1 != 0)) break;
    iVar2 = iVar2->display_mode /* was: *(int *)(iVar2 + 0x68) */;
  }
  FUN_00435938(&TheFileIconInterpreter);
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434bd8):
     * Function: FindInfoByName__14ByteCodeLoaderFPc
     *
     * Looking at GP offsets and control flow:
     * **1. What it does:**
     * Calls a comparison function at GP-30548 with (s1, s0->field_8, s0->field_16). If match found (v0!=0), calls cleanup at GP-30560 and returns s0. Otherwise traverses linked list via s0->next (offset 0x68), returning NULL if exhausted.
     * **2. C pseudocode:**
     * ```c
     * // Continuing from loop...
     * if (strcmp(name, node->name, node->name_len) != 0) {  // GP-30548: strncmp or similar
     * node = node->next;  // offset 0x68
     * if (node) goto loop_start;
     * free(name);  // GP-30560: free/cleanup
     * return NULL;
     * }
     * free(name);
     * return node;  // Found match
     * ```
     * GP offsets to resolve:
     * - GP-30548 (0x88ac): likely `strncmp` or custom string compare
     * - GP-30560 (0x88a0): likely `free` or string cleanup function
     */
halt_baddata();
}
