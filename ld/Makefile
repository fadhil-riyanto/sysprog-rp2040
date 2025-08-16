mk_libextern: extern.c
	clang -c extern.c
	ar rc libextern.a extern.o

mk_run: run.c
	clang -c run.c

all: mk_libextern mk_run
	clang run.o -L. -lextern -nostartfiles

all_custom_ld: mk_libextern mk_run
	clang run.o -L. -lextern -nostartfiles -nostdlib -Wl,-T,link.ld -g -ggdb3 -v

clean:
	rm -f a.out
	rm -f libextern.a
	rm -f extern.o
	rm -f run.o
	