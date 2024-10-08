/*
 * ca.h
 *
 *  Created on: Aug 29, 2024
 *      Author: Farha
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

/* Define states */
enum
{
	CA_waiting,
	CA_driving
} CA_state_id;

/* Declare states functions CA */
STATE_define(CA_waiting);
STATE_define(CA_driving);

/* State Pointer (pointer to function) */
extern void (*CA_state)();
extern void(*CA_state) ();
#endif /* CA_H_ */
