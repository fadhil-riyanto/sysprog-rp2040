mk_all_hello_aarch64: hello_aarch64.S 
	arm-none-eabi-as -mcpu=cortex-a7 -o prog.o hello_aarch64.S
	arm-none-eabi-ld -Ttext=0x8000 -o prog.elf prog.o
	arm-none-eabi-objcopy -O binary prog.elf prog.bin

mk_all_array_sum: array_sum.S 
	arm-none-eabi-as -mcpu=cortex-a7 -o prog.o array_sum.S
	arm-none-eabi-ld -Ttext=0x8000 -o prog.elf prog.o
	arm-none-eabi-objcopy -O binary prog.elf prog.bin
	