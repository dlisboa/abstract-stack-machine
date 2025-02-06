prog: main.c
	$(CC) -std=c23 -o prog -Wall main.c

clean:
	rm prog

.PHONY: run
run:
	./prog

