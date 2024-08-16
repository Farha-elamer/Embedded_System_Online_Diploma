/*
 * platform_types.h
 *
 *  Created on: Aug 16, 2024
 *      Author: Farha
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include "stdbool.h"

/********** BOOLEN***********/
#ifndef _Bool
#define _Bool	unsigned char
#endif

#ifndef  TRUE
#define  TRUE            (boolean) true
#endif

#ifndef  FALSE
#define  FALSE           (boolean) false
#endif

/********* Architecture*******/

#define CPU_TYPE_8        8
#define CPU_TYPE_16       16
#define CPU_TYPE_32       32
#define CPU_TYPE_64       64

#define MSB_FIRST          0
#define LSB_FIRST          1

#define HIGH_BYTE_FIRST    0
#define LOW_BYTE_FIRST     1

/***********ENdianess********/
#define  CPU_TYPE         CPU_TYPE_32
#define  CPU_BIT_ORDER    LSB_FIRST
#define  CPU_BYTE_ORDER   LOW_BYTE_FIRST

/**********Data Types*********/
typedef _Bool	boolean;

typedef unsigned char                   uint8;
typedef unsigned short                  uint16;
typedef unsigned int                    uint32;
typedef unsigned float                  unit32;
typedef unsigned double                 uint64;
typedef unsigned long long              uint64;
typedef unsigned long double            uint80;

typedef signed char                     sint8;
typedef signed short                    sint16;
typedef signed int                      sint32;
typedef signed float                    sint32;
typedef signed double                   sint64;
typedef signed long long                sint64;
typedef signed long double              sint80;

/**************Volatile data types**********/
typedef volatile unsigned char          vuint8;
typedef volatile unsigned short         vuint16;
typedef volatile unsigned int           vuint32;
typedef volatile unsigned float         vunit32;
typedef volatile unsigned double        vuint64;
typedef volatile unsigned long long     vuint64;
typedef volatile unsigned long double   vuint80;

typedef volatile signed char            vint8;
typedef volatile signed short           vint16;
typedef volatile signed int             vint32;
typedef volatile signed float           vint32;
typedef volatile signed double          vint64;
typedef volatile signed long long       vint64;
typedef volatile signed long double     vint80;

#endif /* PLATFORM_TYPES_H_ */
