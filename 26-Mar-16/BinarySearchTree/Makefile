CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = main

main: main.o BinarySearchTree.o
	$(CC) $(CFLAGS) main.o BinarySearchTree.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

BinarySearchTree.o: BinarySearchTree.c
	$(CC) $(CFLAGS) -c BinarySearchTree.c