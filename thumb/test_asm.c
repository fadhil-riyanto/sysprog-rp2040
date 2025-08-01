#define thumb_asm_volatile(...)                                                \
  __asm__ volatile(".syntax unified\n.thumb\n\n" __VA_ARGS__)

#define A 0xA

int _sbrk() {}

int _write() {}

int _read() {}

int _lseek() {}

int _close() {}

int _exit() {}

int main() {
  int a = 9;
  int b = 2;

  int c = a * b;

  thumb_asm_volatile("mov r2, r9");
}
