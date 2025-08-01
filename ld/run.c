extern int  lib_call(const char* str);

void run(void) {
        /* this will be .data */
        static int data = 5;

        data = lib_call("im a .rodata");
}