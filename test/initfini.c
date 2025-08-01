#include <stdio.h>
#include <stdint.h>

extern uintptr_t __preinit_array_start;


int main() {
        printf("__preinit_array_start %p", __preinit_array_start);
}