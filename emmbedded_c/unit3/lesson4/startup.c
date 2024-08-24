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

static unsigned long stack_top[256];

void (*const g_p_fn_vectors[])() __attribute__((sections(".vectors"))) = 
{
	(void(*)()) ((unsigned long )stack_top + sizeof (stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
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