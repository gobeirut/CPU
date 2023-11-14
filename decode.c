/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decode.c
 * Author: nicolai
 * 
 * Created on 14. September 2021, 12:10
 */
#include <stdint.h>

void instructionDecode(uint32_t instruction, uint16_t *op, uint16_t *rs, uint16_t *rt, uint16_t *rd, uint16_t *pcControl,uint16_t *shamt, uint16_t *funct, uint32_t *jumpDest) {
   *op = (instruction >> 26) & 0x3F;
   *rs = (instruction >> 21) & 0x1F;
   *rt = (instruction >> 16) & 0x1F;
   *rd = (instruction >> 11) & 0x1F;
   *shamt = (instruction >>6) & 0x1F;
   *funct = (instruction & 0x3F);
   *pcControl = instruction & 0xFFFF;
   *jumpDest = instruction & 0x03FFFFFF;
}
