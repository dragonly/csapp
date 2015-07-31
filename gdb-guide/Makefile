CC = gcc
CFLAGS = -O0 -Wall -g

hello: 
	$(CC) hello.c $(CFLAGS) -o hello

core:
	$(CC) core.c $(CFLAGS) -o core_
	./core_
	gdb -tui -c core core_

.PHONY: gdb gdb-gui rm
gdb: hello
	gdb hello

gdb-gui: hello
	gdb -tui hello

clean:
	rm hello
