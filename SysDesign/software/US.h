/*
 * US.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */

#ifndef US_H_
#define US_H_

#include "states.h"
enum
{
	US_busy
}US_state_id;

//state function prototyping
void US_init();
STATE_define(US_busy);

//Global variable
extern void (*US_state)();

#endif /* US_H_ */
