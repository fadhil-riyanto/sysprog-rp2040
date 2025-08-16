ENTRY(run)

PHDRS {
    text PT_LOAD FLAGS(5); /* RX */
    data PT_LOAD FLAGS(6); /* RW */
}

SECTIONS {
    . = 0xFF000;

    .text : {
        *(.text);
        *(.text.*)
    } :text

    .rodata : {
        *(.rodata);
        *(.rodata.*)
    } :text

    .data : {
        *(.data);
        *(.data.*)
    } :data

    .bss : {
        *(.bss);
        *(.bss.*)
        *(COMMON)
    } :data
}
