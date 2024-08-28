ENTRY(reset)
MEMORY
{
	MEM(rwx) :ORIGIN = 0X00000000 , LENGTH = 64M
}
SECTIONS
{
	. = 0x10000;
	.startup . :
	{
	stsrtup.o(.text)
	}>MEM
	.text :
	{
	   *(.text)
	}>MEM
	.data :
	{
	  *(.data)
	}>MEM
	.bss :
	{
	  *(.bss)
	}>MEM
	. = . + 0X1000;
	stack_top = . ;	
		
}