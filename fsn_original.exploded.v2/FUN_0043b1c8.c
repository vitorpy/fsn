/**
 * FUN_0043b1c8
 *
 * Extracted from fsn.c lines 78255-78295
 * Ghidra address: 0x0043b1c8
 * Category: Other
 */

void FUN_0043b1c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_4;
  
  piVar1 = (int *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x17a0);
  local_18 = 2;
  local_14 = param_2;
  iVar2 = /* TODO: GP:-0x7c88 */ (**(code **)(unaff_gp + -0x7c88) /* -> EXTERNAL_0x0fad6288 */)(&local_18,param_3,param_4,6);
  local_16 = (undefined2)iVar2;
  if ((iVar2 != 0) && (local_4 = /* TODO: GP:-0x7c6c */ (**(code **)(unaff_gp + -0x7c6c) /* -> EXTERNAL_0x0fad32d8 */)(2,2,0), -1 < local_4)) {
    iVar2 = /* TODO: GP:-0x7c50 */ (**(code **)(unaff_gp + -0x7c50) /* -> EXTERNAL_0x0fad548c */)(local_4,&local_18,0x10);
    if (iVar2 < 0) {
      /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(local_4);
    }
    else {
      iVar2 = *param_1;
      *param_1 = (int)piVar1;
      piVar1[5] = (int)(piVar1 + 7);
      piVar1[6] = (int)(piVar1 + 7);
      *piVar1 = local_4;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[0x2f7] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f8] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f6] = 0;
      piVar1[0x2f5] = 1;
      piVar1[2] = 0;
      piVar1[0x5e7] = 0;
      piVar1[1] = iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b1c8):
     * Function: FUN_0043b1c8
     *
     * ## Analysis
     * **What it does:**
     * Initializes a Client structure (~6KB): links it into a server list, sets up internal buffer pointers (offset +28 points to inline buffer), clears counters/flags, and stores the server pointer. Returns the server pointer on success, -3 on error path.
     * **C pseudocode:**
     * ```c
     * // Error path (from 43b294): calls some function, returns -3
     * // Success path (from 43b2b4):
     * ClientStruct *client = v1;          // allocated client struct
     * ServerStruct **serverList = a2;     // sp+64 = server list head ptr
     * void *server = a3;                  // server being added
     * client->next = *serverList;         // link into list
     * *serverList = client;
     * client->bufferStart = &client->inlineBuffer;  // +28 is inline buffer
     * client->bufferEnd = &client->inlineBuffer;    // +28
     * client->server = server;            // +0
     * client->field_0xc = 0;              // +12
     * client->field_0x10 = 0;             // +16
     * client->buf_0xbdc = server;         // +3036
     * client->buf_0xbe0 = server;         // +3040
     * client->field_0xbd8 = 0;            // +3032
     * client->field_0xbd4 = 1;            // +3028 (enabled flag)
     * client->field_0x8 = 0;              // +8
     * client->field_0x179c = 0;           // +6044
     * client->prev = oldHead;             // +4 (doubly-linked)
     * return server;
     * ```
     * **Structure offsets identified:**
     * - +0: server pointer
     * - +4: prev link
     * - +8: status/flags
     * - +12,+16: counters
     * - +20,+24: buffer pointers → +28 (inline buffer start)
     * - +3028-3040: secondary buffer management
     * - +6044: end marker (struct size ~6KB)
     */
halt_baddata();
}
