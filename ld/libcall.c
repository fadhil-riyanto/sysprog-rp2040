// clang -c libcall.c

extern int random_me;

/* this is .text section */
int lib_call(const char* str) {
        (void)str;

        /* this is .bss */
        static int im_counting;
        im_counting++;
}