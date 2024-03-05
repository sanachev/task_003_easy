CC = gcc
FLAGS = -std=c11 -Wall -Werror -Wextra

all: ip_tools

ip_tools: ip_tools.o
	$(CC) -o ../bin/ip_tools ip_tools.o

ip_tools.o:
	$(CC) $(FLAGS) -c ip_tools.c

clang:
	clang-format -i *.c *.h

check:
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -n *.c *.h

clean:
	rm -f *.o