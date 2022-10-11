/*
 * timer.c
 *
 * Created: 10/5/2022 5:10:11 PM
 *  Author: MG_laptop
 */ 
#include "timer.h"
#include <math.h>
#include "../../Utilites/bit_manipulation.h"

void TIMER_init(){
	TCCR0 = 0x00; 
}
void TIMER_delay(uint16_t millisec){
	uint16_t Noverflows,TimerInitial;
	double Tmaxdelay,Ttick;
	uint32_t overFlowcnt=0;
	Ttick = 256.0/1000.0; 
	Tmaxdelay= 65.536; 
	if(millisec<Tmaxdelay){
		TimerInitial = (Tmaxdelay-millisec)/Ttick;
		Noverflows = 1;
		
		}else if(millisec == (int)Tmaxdelay){
		TimerInitial=0;
		Noverflows=1;
		}else{
		Noverflows = ceil((double)millisec/Tmaxdelay);
		TimerInitial = (1<<8) - ((double)millisec/Ttick)/Noverflows;
		
	}
	TCNT0 = TimerInitial;
	TCCR0 |= (1<<2); 
	while(overFlowcnt<Noverflows){
		
		while(READ_BIT(TIFR,0)==0);
		
		SET_BIT(TIFR,0);
		overFlowcnt++;
	}
	TCCR0 = 0x00;
}