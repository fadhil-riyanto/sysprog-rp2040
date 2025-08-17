int global_var = 42;

extern int lib_call(const char *str);

static inline long sys_write(int fd, const void *buf, unsigned long count) {
        long ret;
        __asm__ volatile("syscall"
                         : "=a"(ret)
                         : "a"(1), "D"(fd), "S"(buf), "d"(count)
                         : "rcx", "r11", "memory");
        return ret;
}

static inline __attribute__((noreturn)) void sys_exit(int status) {
        __asm__ volatile("syscall"
                         :
                         : "a"(60),
                           "D"(status)
                         : "rcx", "r11", "memory");
        __builtin_unreachable();
}

int main(void) {
        lib_call("a"); 
        sys_write(1, "hey\n", 4);
        while (1) {
        }
        return 0;
}
