CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

qsort: main.o quicksort.o
	$(CC) -o qsort main.o quicksort.o $(CFLAGS)

main.o: main.c quicksort.h
	$(CC) -c main.c $(CFLAGS)

quicksort.o: quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CFLAGS)