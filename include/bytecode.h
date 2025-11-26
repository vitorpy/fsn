/**
 * bytecode.h - Header for bytecode module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_BYTECODE_H
#define FSN_BYTECODE_H

#include "fsn_types.h"

void eval_bytecode_instruction(int param_1,int param_2,int param_3);
void read_bytecode_value(int param_1,int param_2,int param_3,int *param_4,int param_5);
void get_bytecode_context(int param_1,int param_2);
void __ct__14ByteCodeLoaderFv(undefined4 *param_1);
void LoadFileTypingRules__14ByteCodeLoaderFPc(int *param_1,char *param_2);
void FindIconByType__14ByteCodeLoaderFPc(int *param_1,char *param_2);
void FindIconByName__14ByteCodeLoaderFPc(int *param_1);
void FindInfoByName__14ByteCodeLoaderFPc(int *param_1);
void FindInfoByType__14ByteCodeLoaderFPc(int *param_1,char *param_2);
void isSuperByName__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3);
void isSuperByType__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3);
void isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo(undefined4 param_1,char *param_2,int param_3);
void __dt__14ByteCodeLoaderFv(int *param_1,uint param_2);
void __ct__13ByteCodedIconFP8RuleInfo(undefined1 *param_1,int param_2);
void __dt__13ByteCodedIconFv(int param_1,uint param_2);
void setState__13ByteCodedIconFiN41
               (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5);
void setColors__13ByteCodedIconFiN21(int param_1,undefined4 param_2,undefined4 param_3);
void draw__13ByteCodedIconFv(undefined1 *param_1);
void typeName__13ByteCodedIconFv(void);
void setMatrix__13ByteCodedIconFRA4_A4_Cf(int param_1,void *param_2);
void scale__13ByteCodedIconFf(int param_1,float param_2);
void icon_bytecode_eval_wrapper(undefined4 *param_1);

#endif /* FSN_BYTECODE_H */
