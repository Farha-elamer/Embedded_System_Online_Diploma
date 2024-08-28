#include "uart.h"

unsigned char String_Buffer[100] = "Learn-in-depth : <Farha>";

void main(void){
	Uart_Send_String(String_Buffer);	
}