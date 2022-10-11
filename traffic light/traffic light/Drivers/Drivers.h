/*
 * Drivers.h
 *
 * Created: 10/5/2022 4:51:51 PM
 *  Author: MG_laptop
 */ 


#ifndef DRIVERS_H_
#define DRIVERS_H_

#include "../Utilites/registers.h"
#include "../Utilites/bit_manipulation.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
#define IN 0
#define OUT 1
#define LOW 0
#define HIGH 1

void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value); 
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber); 
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t* value); 




#endif /* DRIVERS_H_ */