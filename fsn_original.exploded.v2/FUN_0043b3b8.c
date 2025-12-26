/**
 * FUN_0043b3b8
 *
 * Extracted from fsn.c lines 78406-78464
 * Ghidra address: 0x0043b3b8
 * Category: Other
 */

void FUN_0043b3b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_gp;
  int local_4;
  
  if (param_2[4] == 0) {
    puVar2 = (undefined4 *)param_2[5];
    puVar4 = param_2 + 7;
    if (puVar4 != puVar2) {
      puVar3 = puVar4;
      if (puVar2 < (undefined4 *)param_2[6]) {
        do {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (puVar2 < (undefined4 *)param_2[6]);
      }
      param_2[5] = puVar4;
      param_2[6] = puVar3;
    }
    iVar1 = /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)
                      (*param_2,param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + iVar1;
        if (((iVar5 + iVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          (**(code **)(unaff_gp + -0x76f4) /* -> getword__FPcPl */)(param_2[5],&local_4) /* =getword__FPcPl */;
          if ((uint)(param_2[6] - param_2[5]) < local_4 + 4U) {
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
     * BADDATA ANALYSIS (from binary @ 0x0043b3b8):
     * Function: FUN_0043b3b8
     *
     * ## Analysis
     * **1. What it does:**
     * Checks if buffer has space for incoming data. If (write_pos - read_pos) < 4, sets ready=0 and returns. Otherwise calls a function (likely read/recv) to get data size, then checks if buffer can hold (size+4) bytes, setting ready=1 if yes, 0 if no.
     * **2. C pseudocode:**
     * ```c
     * // a3 = client struct, a3+24 = write_pos, a3+20 = read_pos, a3+12 = ready_flag
     * int DoClientIn(Client *client, ServerEntry *entry) {
     * int avail = client->write_pos - client->read_pos;  // t7 - a0 -> t8
     * if (avail < 4) {
     * client->ready = 0;
     * return 0;
     * }
     * int msg_size;
     * some_read_func(&msg_size);  // jalr t9, result in t2 via sp+60
     * avail = client->write_pos - client->read_pos;  // recalc after call
     * if (avail < msg_size + 4) {
     * client->ready = 0;
     * } else {
     * client->ready = 1;
     * }
     * return 0;
     * }
     * ```
     * **Key offsets:** client+12=ready_flag, client+20=read_pos, client+24=write_pos. The GP-indirect call at 0x43b4cc is likely `read()` or a network receive function (gp-0x890c = gp offset -30452).
     */
halt_baddata();
}
