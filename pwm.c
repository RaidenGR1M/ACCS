/*
 * File:   pwm.c
 * Author: annas
 *
 * Created on 9 March, 2022, 8:20 PM
 */


#include <xc.h>
#include "pwm.h"


void PWM_Gen1(void){
    RC7PPS = 0x15;          //CCP1
}

void PWM_Gen2(void){
    RD4PPS = 0x17;          //CCP3
}

void PWM_Gen3(void){
    RD5PPS = 
}