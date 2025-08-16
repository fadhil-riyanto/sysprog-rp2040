ENTRY(run)

PHDRS {
        text PT_LOAD FLAGS(5); /* RX */
        data PT_LOAD FLAGS(6); /* RW */
}

SECTIONS {
        .text : { 
                *(.text); 
                *(.text.*) 
        } : text

        .rodata : { 
                *(.rodata); 
                *(.rodata.*) 
        }

        .data : {
                *(.data);
                *(.data.*)
        }

        .bss : {
                *(.bss);
                *(.bss.*)
        }
}