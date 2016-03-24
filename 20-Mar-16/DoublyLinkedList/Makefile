CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = main

main: main.o DoublyLinkedList.o
	$(CC) $(CFLAGS) main.o DoublyLinkedList.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

DoublyLinkedList.o: DoublyLinkedList.c
	$(CC) $(CFLAGS) -c DoublyLinkedList.c