/*
 * main.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */
#include "CA.h"


void setup()
{
	//init all driver
	//init IQR....
	//init HAL US_Driver & DC_Driver
	//init Block
	//set states pointer for ecah Block (initial state func)
	CA_state=STATE(CA_waiting);

}

void main ()
{

	setup();


	while(1)
	{

		//call state for each Block
		CA_state();


	}


}
