#@Copyright : Farha
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -gdwarf-2
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
Project_name = learn_in_depth_cortex_m4

all: $(Project_name).bin
	@echo " ******BUILD IS DONE*****"

%.o: %.s 
	$(CC)as.exe $(CFLAGS) $< -o $@ 

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T  linker.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_file.map 
	cp $(Project_name).elf $(Project_name).axf
$(Project_name).bin:	$(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@ 

clean_all:
	rm *.o *.elf *.bin 

clean:
	rm *.elf *.bin 
	