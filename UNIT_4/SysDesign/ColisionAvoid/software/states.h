/*
 * states.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Saad
 */

#ifndef STATES_H_
#define STATES_H_
//define function with its name take nothing and return void
#define STATE_define(_stateFunc_) void ST_##_stateFunc_()
#define STATE(_stateFunc_)             ST_##_stateFunc_


// state connections
void US_set_distance(int d);
void DC_motor(int s);


#endif /* STATES_H_ */
