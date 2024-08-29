/*

 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: Farha
 */

#include"stdio.h"
#include"stdlib.h"
#include "ca.h"
#include "state.h"
#include "dc.h"
#include "us.h"

void setup ()
{
	/* Init BLOCKs */
	DC_init();
	US_init();
	/* Set states pointers for each block */
	CA_state = STATE (CA_waiting);
	DC_state = STATE (DC_idle);
	US_state = STATE (US_busy);
}

int main (void)
{
	volatile int d;
 	setup();

	while(1)
	{
		/* Call state for each block */
		US_state();	CA_state();	DC_state();
		/* Delay */
		for (d = 0; d <= 1000; d++);
	}
	return 0;
}
