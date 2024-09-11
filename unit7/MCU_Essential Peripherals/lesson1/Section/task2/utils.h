/*
 * utils.h
 *
 *  Created on: Sep 11, 2024
 *      Author: Farha
 */

#ifndef UTILS_H_
#define UTILS_H_

#define SetBit(reg,bit)    (reg=reg|(1<<bit))
#define ClrBit(reg,bit)    (reg=reg&~(1<<bit))
#define ReadBit(reg,bit)   (reg>>bit)&1)
#define ToggleBit(reg,bit) (reg=reg^(1<<bit))
#endif /* UTILS_H_ */
