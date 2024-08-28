// startup.c
//ENG FARHA

#include <stdint.h>
void Reset_Handler();
extern int main();
void Defult_Handler(){
	Reset_Handler();
}
void NMI_Handler(void)__attribute__((weak,alias("Defult_Handler")));
void H_Fault_Handler(void)__attribute__((weak,alias("Defult_Handler")));
void Bus_Handler(void)__attribute__((weak,alias("Defult_Handler")));
void Usage_Fault_Handler(void)__attribute__((weak,alias("Defult_Handler")));
void MM_Handler(void)__attribute__((weak,alias("Defult_Handler")));
extern unsigned char _stack_top;

uint32_t vectors[] __attribute__((sections(".vectors"))) = {
	
(uint32_t) &_stack_top,
(uint32_t) &Reset_Handler,
(uint32_t) &NMI_Handler,
(uint32_t) &H_Fault_Handler,
(uint32_t) &Bus_Handler,
(uint32_t) &Usage_Fault_Handler,
(uint32_t) &MM_Handler,	
};
extern unsigned int _S_data ;
extern unsigned int _E_data ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;
extern unsigned int _E_text ;

void Reset_Handler()
{
	unsigned int DATA_SIZE = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* p_src = (unsigned char*)&_E_text;
	unsigned char* p_dst = (unsigned char*)&_S_data;
	for(int i= 0; i<DATA_SIZE ;i++)
	{
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);
	}
	unsigned int bss_SIZE = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst=(unsigned char *)&_S_bss ;
	for(int i =0 ; i < bss_SIZE ;i++)
	{
		*((unsigned char*)p_dst++)=(unsigned char)0;
	}
	
	main();
	
}