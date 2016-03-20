CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g
EXECUTABLE = LinkedListExecutable

main: test.o LinkedList.o
	$(CC) $(CFLAGS) test.o LinkedList.o -o $(EXECUTABLE)

test.o: test.c
	$(CC) $(CFLAGS) -c test.c

LinkedList.o: LinkedList.h LinkedList.c
	$(CC) $(CFLAGS) -c LinkedList.c