CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

inventory: inventory.o quicksort.o readline.o
	$(CC) -o inventory inventory.o quicksort.o readline.o $(CFLAGS)

inventory.o: inventory.c inventory.h readline.h quicksort.h
	$(CC) -c inventory.c $(CFLAGS)

quicksort.o: quicksort.c quicksort.h inventory.h
	$(CC) -c quicksort.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)