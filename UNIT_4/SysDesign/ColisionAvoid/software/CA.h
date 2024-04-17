/*
 * CA.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */

#ifndef CA_H_
#define CA_H_
#include "states.h"

enum
{
	CA_waiting,
	CA_driving
}CA_state_id;


//state function prototype
STATE_define(CA_waiting);
STATE_define(CA_driving);

//Global variable
extern void (*CA_state)();


#endif /* CA_H_ */
