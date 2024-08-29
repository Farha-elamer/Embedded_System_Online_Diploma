/*
 * state.h
 *
 *  Created on: Aug 29, 2024
 *      Author: Farha
 */

#ifndef STATE_H_
#define STATE_H_

#include"stdio.h"
#include"stdlib.h"

#include <stdio.h>
#include <stdlib.h>

/* Automatic state function generated */
#define STATE_define(_statefun_)  void ST_##_statefun_()
#define STATE(_statefun_) ST_##_statefun_


/* States connection */
void US_Get_Distance (int d); /* Argument: distance */
void DC_Motor_Set(int s);     /* Argument: speed */
#endif /* STATE_H_ */
