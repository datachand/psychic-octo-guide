CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g
EXECUTABLE = main

main: main.o SinglyLinkedList.o
	$(CC) $(CFLAGS) main.o SinglyLinkedList.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

SinglyLinkedList.o: SinglyLinkedList.c
	$(CC) $(CFLAGS) -c SinglyLinkedList.c