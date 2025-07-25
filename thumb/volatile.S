.thumb

.globl run_asm_volatile

run_asm_volatile:
        mov r2, r1
        add r2, r2, #1
        add r2, r2, #1
        add r2, r2, #1
        mov r1, r2
        