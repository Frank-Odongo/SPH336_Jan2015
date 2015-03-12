/*
 * 4bitLED.h
 *
 *  Created on: Mar 12, 2015
 *      Author: mario
 */

#ifndef FOURBITLED_H_
#define FOURBITLED_H_

#include "gpio.h"


void fourbitLED(char byte1){
	int i,k;
	int LED[4];
	for (i = 0; i < 4; i++) {
		k = (( byte1 << i));
		if (k & 0x08){
			LED[i] = 1;}
		else{
			LED[i] = 0;}
	}

	GPIOA->PDDR.bit_reg.bit11 = LED[0];
	GPIOA->PDDR.bit_reg.bit28 = LED[1];
	GPIOA->PDDR.bit_reg.bit29 = LED[2];
	GPIOA->PDDR.bit_reg.bit10 = LED[3];
	}



#endif /* FOURBITLED_H_ */
