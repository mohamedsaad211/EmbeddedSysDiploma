/*
 * main.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */
#include "CA.h"
#include "DC_motor.h"
#include "US.h"

void setup()
{
	//init all driver
	US_init();
	DC_init();
	//init IQR....
	//init HAL US_Driver & DC_Driver
	//init Block
	//set states pointer for ecah Block (initial state func)
	CA_state=STATE(CA_waiting);
	DC_state=STATE(DC_idle);
	US_state=STATE(US_busy);


}

void main ()
{
	volatile int d;

	setup();


	while(1)
	{

		//call state for each Block
		US_state();
		CA_state();
		DC_state();

		for(d=0;d<10000;d++);

	}


}
