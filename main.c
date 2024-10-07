/*
 * File:   main.c
 * Author: annas
 *
 * Created on 3 March, 2022, 6:45 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

#include "user.h"
#include "adcc.h"
#include "uart.h"

uint16_t Vread;
unsigned int  Vin;
void main(void) {
    
    Initialize_PMD();
    InitApp();
    InitUART4();
    while(1){
        InitADB4();
        while(!PIR1bits.ADIF);
        Vread = ReadADB4();
        Vin = (unsigned int)((Vread * 500)/4096);
    }
    
    write_U4(Vin);
}
