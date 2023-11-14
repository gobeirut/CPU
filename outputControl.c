/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   outputControl.c
 * Author: nicolai
 * 
 * Created on 14. September 2021, 11:08
 */

#include "outputControl.h"
#include <stdbool.h>

void outputControl(int16_t op, bool* regDst, bool* aluSrc, bool* memToReg, \
        bool* regWrite, bool* memRead, bool* memWrite, bool* branch, bool* jump,\
        bool* aluOp1, bool* aluOp0) {
*regDst = 0;
*aluSrc = 0;
*memToReg = 0;
*regWrite = 0;
*memRead = 0;
*memWrite = 0;
*branch = 0;
*jump = 0;
*aluOp1 = 0;
*aluOp0 = 0;

    switch (op) {
        case 0x0: // R-type instructions
            *regDst = 1;
            *regWrite = 1;
            // ALU operation determined by the funct field
            break;
        case 0x2B: // SW (Store Word)
            *aluSrc = 1;
            *memWrite = 1;
            break;
        case 0x23: // LW (Load Word)
            *aluSrc = 1;
            *memToReg = 1;
            *regWrite = 1;
            *memRead = 1;
            break;

 /*
 Ergänzen Sie die Logik
 */
    }
}
