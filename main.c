/*
 * timer_test02.c
 *
 * Created: 9/26/2019 2:26:56 PM
 * Author : M_Moawad
 */ 


#include "EX_INT.h"
#include "Timers.h"
#include"LCD.h"

int main(void)
{
	uint8_t distance;

     DDRD|=(1<<7);

	SREG  |= (1<<7);//enable global interrupts in MC by setting the I-Bit.

	 LCD_init();
	 timer_init();
	 EX_INT_init(); //start the timer.


	 EX_INT2_Sensing_Ctrl(INT_Rising);
	 INT2_to_timer_CallBack(ICU_SW_EX_INT2);

	while(1)
	{
		LCD_displayStrRowCol(0,0,"Dis =");
		//LCD_IntToStr(Time_Diff);
		distance=(Time_Diff*34)/2;
		LCD_IntToStr(distance);
		LCD_displayStrRowCol(0,7,"cm");
		Wait_Trigger(1);
	}
}
