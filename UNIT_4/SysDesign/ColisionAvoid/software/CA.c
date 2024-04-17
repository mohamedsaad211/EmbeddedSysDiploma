/*
 * CA.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */
#include "CA.h"
//LOCAL VARIABLE FOR OUR MODULE
int CA_speed=0;
int CA_distance=0;
const int CA_threshold=50;

//STATE pointer to state function
void (*CA_state)();


void US_set_distance(int d)
{
	CA_distance=d;
	(CA_distance<=CA_threshold) ? (CA_state=STATE(CA_waiting)) : (CA_state=STATE(CA_driving));
	printf("US--------distance =%d------->CA \n",CA_distance);
}



STATE_define(CA_waiting)
{
	//State Name
	CA_state_id = CA_waiting;
	printf("CA_wating_state : distance =%d   speed = %d\n",CA_distance,CA_speed);


	//State action
	CA_speed=0;
	DC_motor(CA_speed);
	//DC_Motor(CA_speed)

	//Event_check
	//US_get_distance(CA_distance)
//	CA_distance=US_Get_distance_random(45,55,1);


}

STATE_define(CA_driving)
{
	//State Name
	CA_state_id = CA_driving;
	printf("CA_Driving_state : distance =%d   speed = %d \n",CA_distance,CA_speed);

	//State action
	CA_speed=30;
	DC_motor(CA_speed);
	//DC_Motor(CA_speed)

	//Event_check
	//US_get_distance(CA_distance)
//	CA_distance=US_Get_distance_random(45,55,1);
//
//	(CA_distance<=CA_threshold) ? (CA_state=STATE(CA_waiting)) : (CA_state=STATE(CA_driving));

}


