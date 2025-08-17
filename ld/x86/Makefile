mk_extern: extern.c
	clang -c extern.c -o extern.o 

mk_main: main.c
	clang -c main.c -o main.o 

mk_startup: startup.S
	clang -c startup.S -o startup.o 

mk_all: mk_startup mk_main mk_extern
	clang -v -g -ggdb3 -nostdlib -no-pie -T linker2.ld startup.o main.o extern.o -o prog.elf

clean: 
	rm -f main.o
	rm -f extern.o
	rm -f prog.elf
	rm -f startup.o