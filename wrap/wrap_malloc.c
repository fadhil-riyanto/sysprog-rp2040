#include <stdlib.h>
#include <stdio.h>

void* __real_malloc(size_t __size) {
        // return malloc(__size);
        printf("do?\n");
}

void* __wrap_malloc(size_t __size) {
        printf("wrap malloc called\n");
        return __real_malloc(__size);
}

int main() {
        char* x = malloc(1);

        // free(x);
}