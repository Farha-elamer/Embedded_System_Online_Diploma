/*linker cortex_m3
ENG:FARHA
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128K
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
	
}
SECTIONS
{
	.text :
	{
	startup.o (.vectors*)
	*(.text*)
	*(.rodata)
	_E_text = .;
	}>flash
	
	.data :
	{
	_S_data = . ;
	*(.data)
	_E_data = . ;	
	}>sram  AT> sram
	.bss :
	{
	_S_bss = . ;
	*(.bss)
	_E_bss = . ;
	}>sram

}