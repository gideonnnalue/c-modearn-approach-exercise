CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

remind: main.o readline.o
	$(CC) -o remind main.o readline.o $(CFLAGS)

main.o: main.c readline.h
	$(CC) -c main.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)