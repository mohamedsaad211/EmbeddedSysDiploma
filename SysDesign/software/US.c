/*
 * US.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */
#include "US.h"

//LOCAL VARIABLE FOR OUR MODULE
int US_distance=0;

void (*US_state)();

int US_Get_distance_random(int l,int r,int count);


void US_init()
{
	//init US driver
	printf("US_init\n");

}


STATE_define(US_busy)
{
	//State Name
	US_state_id = US_busy;

	//State action
	US_distance= US_Get_distance_random(45,55,1);

	printf("US_wating_state :distance = %d   \n",US_distance);
	US_set_distance(US_distance);
	US_state=STATE(US_busy);
	//Event_check

}

int US_Get_distance_random(int l,int r,int count)
{
	int i;
	for(i=0; i< count; i++)
	{
		int rand_num =(rand()%(r-l+1))+l;
		return rand_num;
	}
}
