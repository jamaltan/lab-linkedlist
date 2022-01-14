all:
	$(CC) -Wall -Wextra -o list list.h list.c main.c

clean:
	rm -f list

indent:
	clang-format -i list.c
