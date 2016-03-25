CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = main

main: main.o CircularLinkedList.o
	$(CC) $(CFLAGS) main.o CircularLinkedList.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

CircularLinkedList.o: CircularLinkedList.c
	$(CC) $(CFLAGS) -c CircularLinkedList.c