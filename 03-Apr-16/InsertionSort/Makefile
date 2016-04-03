CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = InsertionSort

InsertionSort: InsertionSort.o
	$(CC) $(CFLAGS) InsertionSort.o -o $(EXECUTABLE)

InsertionSort.o: InsertionSort.c
	$(CC) $(CFLAGS) -c InsertionSort.c