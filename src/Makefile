CC = gcc
FLAGS = -std=c11 -Wall -Werror -Wextra

all: ip_tools

ip_tools:
	$(CC) -o main ip_tools.o

ip_tools.o:
	$(CC) $(FLAGS) -c ip_tools.c ip_tools.h

clean:
	rm -f *.o