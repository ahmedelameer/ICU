/*
 * Timers_config.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */


#include "Timer_config.h"




Timer_config Timers_setup[MAX_num_of_timers]=
{
		{Timer2,Dis_INT,F_cpu_1024,WG_CTC,50,NPWM_Toggle},
		{Timer1,Dis_INT,F_cpu_1024,WG_Normal,NA,NPWM_Normal}
		//{Timer2,EN_INT,F_cpu_clk,WG_FPWM,Normal}
};




