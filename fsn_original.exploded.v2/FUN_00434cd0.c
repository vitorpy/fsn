/**
 * FUN_00434cd0
 *
 * Extracted from fsn.c lines 73074-73088
 * Ghidra address: 0x00434cd0
 * Category: Other
 */

void FUN_00434cd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 &&
         (iVar1 = /* TODO: GP:-0x7f34 */ (**(code **)(unaff_gp + -0x7f34) /* -> EXTERNAL_0x0fabf768 */)(param_2,*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434cd0):
     * Function: FUN_00434cd0
     *
     * ## Analysis
     * **1. What it does:**
     * Traverses a linked list starting at `*a0`, comparing each node's first field (offset 0) against string `a1` using strcmp (GP offset -32564). Returns the node where strcmp returns 0 (match), or NULL if no match found. The next pointer is at offset 104 (0x68) in each node.
     * **2. C pseudocode:**
     * ```c
     * // FindInfoByType - searches linked list for node matching type string
     * // Node structure: { char* type; ... ; Node* next; } where next is at offset 0x68
     * void* FindInfoByType(void** list_head, char* type_name) {
     * void* node = *list_head;
     * while (node != NULL) {
     * char* node_type = *(char**)node;  // offset 0
     * if (strcmp(type_name, node_type) == 0) {
     * return node;  // found match
     * }
     * node = *(void**)((char*)node + 0x68);  // next at offset 104
     * }
     * return NULL;  // not found
     * }
     * ```
     * **GP resolution:** offset -32564 (0xFFFF80CC) = `strcmp`
     */
halt_baddata();
}
