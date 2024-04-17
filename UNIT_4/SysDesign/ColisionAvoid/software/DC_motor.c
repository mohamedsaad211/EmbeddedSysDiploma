/*
 * main.c
 *
 *  Created on: Apr 16, 2024
 *      Author: top10
 */
#include "DC_motor.h"
void (*DC_state)();
//LOCAL VARIABLE FOR OUR MODULE
int DC_speed=0;

void DC_init()
{
	//init PWM to set speed of motor
	printf("DC_motor driver init \n");
}

void DC_motor(int s)
{
	DC_speed = s;
	DC_state=STATE(DC_busy);
	printf("CA--------Speed =%d------->DC \n",DC_speed);

}



STATE_define(DC_idle)
{
	//State Name
	DC_state_id = DC_idle;

	//State actions
//call PWM to make speed = DC_speed
	DC_speed=50;
	printf("DC_idle_state :Speed = %d   \n",DC_speed);

		//Event_check
}

STATE_define(DC_busy)
{
	//State Name
	DC_state_id = DC_busy;

	//State action
	DC_state= STATE(DC_idle);
	printf("DC_Busy_state :Speed = %d   \n",DC_speed);


	//Event_check
}
