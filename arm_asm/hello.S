.syntax unified
.cpu cortex-m0
.thumb

.globl _start
_start:
        movs r0, #0x20
        movs r1, #0x00

loop:
        adds r1, r1, #1
        cmp r1, r0
        bne loop
        b .