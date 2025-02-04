prog: main.c
	cc -o prog -Wall main.c

clean:
	rm prog

.PHONY: run
run:
	./prog

