.global _start
_start:
    call main
    mov $60, %rax 
    mov %eax, %edi
    syscall
