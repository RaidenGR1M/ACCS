/*
 * File:   uart.c
 * Author: annas
 *
 * Created on 5 March, 2022, 11:52 PM
 */
#include <xc.h>
#include "uart.h"

void InitUART4(void){
    U4CON0bits.BRGS = HI;
    U4CON1bits.ON = LO;
    U4BRGH = 0x25;
    U4BRGL = 0x80;
    U4CON2bits.TXPOL = LO;
    U4CON1bits.ON = HI;
    U4CON0bits.TXEN = HI;
    RB6PPS = 0x29;
    
}

void write_U4(unsigned int data){
    unsigned int index;
    U4TXB = 'v';
    for(; data; data /= 10){
        U4TXB = (unsigned char)(data % 10) + '0';
    }
}