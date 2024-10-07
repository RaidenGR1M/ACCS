/*
 * File:   adcc.c
 * Author: annas
 *
 * Created on 5 March, 2022, 11:11 AM
 */


#include <xc.h>
#include "adcc.h"


void InitADB4(void){
    ADPCH = 0x0C;
    ADACQ = 0x00;
    ADREF = 0x00;
    ADCON0 = 0x04;
    PIR1bits.ADIF = LO;
    PIE1bits.ADIE = HI;
    INTCON0bits.GIE = HI;
    ADSTATbits.MATH = HI;
    ADCON1bits.DSEN = LO;
    ADCON2bits.PSIS = LO;
    ADCON0bits.GO = HI;
}

uint16_t ReadADB4(void){
    PIR1bits.ADIF = LO;
    return (uint16_t)((ADRESH << 8) + ADRESL);
}