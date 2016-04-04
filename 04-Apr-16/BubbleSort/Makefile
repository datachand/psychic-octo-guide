CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = BubbleSort

BubbleSort: BubbleSort.o
	$(CC) $(CFLAGS) BubbleSort.o -o $(EXECUTABLE)

BubbleSort.o: BubbleSort.c
	$(CC) $(CFLAGS) -c BubbleSort.c