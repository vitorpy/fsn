/**
 * interpreter.h - Header for interpreter module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_INTERPRETER_H
#define FSN_INTERPRETER_H

#include "fsn_types.h"

void __ct__19FileIconInterpreterFv(int param_1);
void finalize_interpreter(int param_1);
void __dt__19FileIconInterpreterFv(int param_1,uint param_2);
void set_interpreter_mode(int param_1,uint param_2);
void SetFile__19FileIconInterpreterFPc(int param_1,char *param_2);
void reset_icon_interpreter(int param_1,int param_2);
void UnSetFile__19FileIconInterpreterFv(int param_1);
void setState__19FileIconInterpreterFiN41
               (float *param_1,int param_2,int param_3,int param_4,int param_5);
void setColors__19FileIconInterpreterFiN21(int param_1,int param_2,int param_3);
void run__19FileIconInterpreterFPcPvT1(float *param_1,char *param_2,int param_3,int param_4);
void run_icon_interpreter(float *param_1,char *param_2,int param_3,int param_4);

#endif /* FSN_INTERPRETER_H */
