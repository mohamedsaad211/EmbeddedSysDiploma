/*
 * DC_motor.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "states.h"

enum
{
	DC_idle,
	DC_busy
}DC_state_id;

//state function prototyping
void US_init();
STATE_define(DC_busy);
STATE_define(DC_idle);

//Global variable
extern void (*DC_state)();

#endif /* DC_MOTOR_H_ */
