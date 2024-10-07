#ifndef ADCC_H
#define	ADCC_H

#include <xc.h> // include processor files - each processor file is guarded.  

#define     LO      0
#define     HI      1

void InitADB4(void);
uint16_t ReadADB4(void);




#endif	/* XC_HEADER_TEMPLATE_H */

