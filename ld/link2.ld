SECTIONS 
{
        . = 0x10000;
        .text : {
                *(.text);
        }

        
        . = 0xAC8FFB;                  
        .data : ALIGN(4) {
                *(.data);
        }
        .bss : {
                *(.bss);
        }
}