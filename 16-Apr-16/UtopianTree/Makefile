CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = UtopianTree

UtopianTree: UtopianTree.o
	$(CC) $(CFLAGS) UtopianTree.o -o $(EXECUTABLE)

UtopianTree.o: UtopianTree.c
	$(CC) $(CFLAGS) -c UtopianTree.c