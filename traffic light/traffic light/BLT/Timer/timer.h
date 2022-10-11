/*
 * timer.h
 *
 * Created: 10/5/2022 5:09:57 PM
 *  Author: MG_laptop
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Utilites/registers.h"


void TIMER_init();//initialize Timer0
void TIMER_delay(uint16_t millisec); //delay of specific amount default uses 256 prescalar



#endif /* TIMER_H_ */