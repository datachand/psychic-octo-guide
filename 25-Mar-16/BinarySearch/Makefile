CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = main

main: main.o BinarySearch.o
	$(CC) $(CFLAGS) main.o BinarySearch.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

BinarySearch.o: BinarySearch.c
	$(CC) $(CFLAGS) -c BinarySearch.c