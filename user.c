/*
 * File:   user.c
 * Author: annas
 *
 * Created on 3 March, 2022, 7:01 PM
 */


#include <xc.h>




void Initialize_PMD(void){
    // System clock EN | Fixed Volt Ref EN | Hi/Lo Volt Detect EN | CRC EN | Clock Reference EN | IOC DIS
    PMD0 = 0x01;
    // SMT EN | TMR6 DIS | TMR5 DIS | TMR4 DIS | TMR3 DIS | TMR2 DIS | TMR1 DIS | TMR0 EN
    PMD1 = 0x7E;
    // Active Clock Tuning DIS | DAC DIS | ADC EN | Res | Res | Comparator 2 EN | Comparator 1 EN | Zero Cross DIS
    PMD3 = 0xC1;
    // Res | Waveform Gen 3 DIS | Waveform Gen 2 DIS | Waveform Gen 1 DIS | Digital Signal Mod DIS | Controlled Oscillator 3 DIS | Controlled Oscillator 2 DIS | Controlled Oscillator 1 DIS
    PMD4 = 0x7F;
    //PWM3 DIS | PWM2 DIS | PWM1 DIS | CCP3 DIS | CCP2 DIS | CCP1 DIS
    PMD5 = 0x70;
    //UART5 DIS | UART4 EN | UART3 DIS | UART2 DIS | UART1 DIS | SPI2 DIS | SPI1 DIS | I2C DIS
    PMD6 = 0xBF;
    //CLC8 DIS | CLC7 DIS | CLC6 DIS | CLC5 DIS | CLC4 DIS | CLC3 DIS | CLC2 DIS | CLC1 DIS
    PMD7 = 0xFF;
    //Res | Res | DMA6 DIS | DMA5 DIS | DMA4 DIS | DMA3 DIS | DMA2 DIS | DMA1 DIS
    PMD8 = 0xFF;
}


void InitApp(void){
    TRISA = 0x35;
    PORTA = 0x00;
    LATA = 0x00;
    
    TRISB = 0x21;
    PORTB = 0x00;
    LATB = 0x00;    
      
    TRISC = 0x7C;
    PORTC = 0x00;
    LATC = 0x00;
    
    TRISD = 0xCF;
    PORTD = 0x00;
    LATD = 0x00;
    
    TRISE = 0x03;
    PORTE = 0x00;
    LATE = 0x00;
    
    TRISF = 0xEE;
    PORTF = 0x00;
    LATF = 0x00;
}