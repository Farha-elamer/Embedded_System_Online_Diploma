/*
 * lifo.h
 *
 *  Created on: Aug 28, 2024
 *      Author: Farha
 */

#ifndef LIFO_H_
#define LIFO_H_
#define NULL 0
//type defintion
typedef struct
{
	unsigned int  length ;
	unsigned int  count;
	unsigned int  *base;
	unsigned int  *head;
} LIFO_Buf_t;
typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_Null,
}LIFO_status;
//APIS
LIFO_status LIFO_Add_Item(LIFO_Buf_t *lifo_buf, unsigned int item);
LIFO_status LIFO_Get_Item(LIFO_Buf_t *lifo_buf, unsigned int* item);
LIFO_status LIFO_init(LIFO_Buf_t *lifo_buf, unsigned int *buf ,unsigned int length);

#endif /* LIFO_H_ */
