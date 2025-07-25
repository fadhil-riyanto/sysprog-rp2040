#include <pico/stdio.h>
#include <stdio.h>

extern void run_asm_volatile();

int main() {
        stdio_init_all();

        run_asm_volatile();
        
        printf("exited\n");
        
}