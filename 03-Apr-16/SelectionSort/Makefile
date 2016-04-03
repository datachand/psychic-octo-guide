CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = SelectionSort

SelectionSort: SelectionSort.o
	$(CC) $(CFLAGS) SelectionSort.o -o $(EXECUTABLE)

SelectionSort.o: SelectionSort.c
	$(CC) $(CFLAGS) -c SelectionSort.c