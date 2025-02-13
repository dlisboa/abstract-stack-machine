prog: main.c
	$(CC) -std=c23 -Wall -Werror -pedantic -fsanitize=address -o prog main.c

clean:
	rm prog

.PHONY: run
run:
	./prog

