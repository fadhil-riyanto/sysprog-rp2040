ENTRY(_start)

SECTIONS {
        . = 0x10000000;
        .text : {
                main.o (.text);
                startup.o (.text);
        }

        .rodata : {
                *(.rodata);
                *(.rodata.*);
                
        }
}