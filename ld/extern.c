int lib_call(const char *str) {
        (void)str;

        static int count;
        count++;
}