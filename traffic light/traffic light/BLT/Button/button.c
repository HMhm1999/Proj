/*
 * button.c
 *
 * Created: 10/5/2022 5:09:18 PM
 *  Author: MG_laptop
 */ 
#include "button.h"


void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin){
	DIO_init(buttonPort,buttonPin,IN);
}


void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value){
	DIO_read(buttonPort,buttonPin,value);
}
