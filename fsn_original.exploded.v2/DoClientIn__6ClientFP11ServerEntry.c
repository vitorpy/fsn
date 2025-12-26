/**
 * DoClientIn__6ClientFP11ServerEntry
 *
 * Extracted from fsn.c lines 78344-78400
 * Category: Other
 */

void DoClientIn__6ClientFP11ServerEntry(undefined4 param_1,int *param_2)

{
  ssize_t sVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iStack_4;
  
  if (param_2[4] == 0) {
    piVar2 = (int *)param_2[5];
    piVar4 = param_2 + 7;
    if (piVar4 != piVar2) {
      piVar3 = piVar4;
      if (piVar2 < (int *)param_2[6]) {
        do {
          *(undefined1 *)piVar3 = *(undefined1 *)piVar2;
          piVar2 = (int *)((int)piVar2 + 1);
          piVar3 = (int *)((int)piVar3 + 1);
        } while (piVar2 < (int *)param_2[6]);
      }
      param_2[5] = (int)piVar4;
      param_2[6] = (int)piVar3;
    }
    sVar1 = read(*param_2,(void *)param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (sVar1 != -1) {
      if (sVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + sVar1;
        if (((iVar5 + sVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          getword__FPcPl(param_2[5],&iStack_4);
          if ((uint)(param_2[6] - param_2[5]) < iStack_4 + 4U) {
            param_2[3] = 0;
          }
          else {
            param_2[3] = 1;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b3ac):
     * Function: DoClientIn__6ClientFP11ServerEntry
     *
     * ## Analysis
     * **1. What the assembly does:**
     * Checks if remaining buffer space (write_ptr - read_ptr) is < 4 bytes. If so, sets ready=0 and returns. Otherwise calls a function (likely to get message length), then checks if buffer has enough space for (msg_len + 4). Sets ready=1 if enough space, else ready=0.
     * **2. C pseudocode:**
     * ```c
     * // a3 = ServerEntry* entry, a0 = some_ptr (likely read position)
     * int remaining = entry->write_ptr - some_ptr;  // t7=entry[24], t8=t7-a0
     * if (remaining < 4) {
     * entry->ready = 0;  // entry[12] = 0
     * return 0;
     * }
     * int msg_len;
     * get_message_length(&msg_len);  // jalr via gp[-30452], result in t2=sp[60]
     * int available = entry->write_ptr - entry->read_ptr;  // t9=entry[24] - t0=entry[20]
     * if (available < msg_len + 4) {
     * entry->ready = 0;  // not enough space
     * } else {
     * entry->ready = 1;  // ready to process
     * }
     * return 0;
     * ```
     * **Structure offsets for ServerEntry:**
     * - +12: ready flag (int)
     * - +20: read_ptr
     * - +24: write_ptr
     */
halt_baddata();
}
