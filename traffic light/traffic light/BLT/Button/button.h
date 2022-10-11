/*
 * button.h
 *
 * Created: 10/5/2022 5:09:07 PM
 *  Author: MG_laptop
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../Drivers/Drivers.h"

#define BUTTON_1_PORT PORT_D
#define BUTTON_1_PIN PIN2



void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);

void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);



#endif /* BUTTON_H_ */