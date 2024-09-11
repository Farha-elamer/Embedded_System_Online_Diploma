/*
 * Mem-map.h
 *
 *  Created on: Sep 11, 2024
 *      Author: Farha
 */

#ifndef MEM_MAP_H_
#define MEM_MAP_H_


#define DDRA  *((volatile unsigned char*)0x3A)
#define PORTA *((volatile unsigned char*)0x3B)
#define PINA  *((volatile unsigned char*)0x39)


#define DDRB  *((volatile unsigned char*)0x35)
#define PORTB *((volatile unsigned char*)0x34)
#define PINB  *((volatile unsigned char*)0x33)

#endif /* MEM_MAP_H_ */
