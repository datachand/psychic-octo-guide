CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = SolveMeFirst

SolveMeFirst: SolveMeFirst.o
	$(CC) $(CFLAGS) SolveMeFirst.o -o $(EXECUTABLE)

SolveMeFirst.o: SolveMeFirst.c
	$(CC) $(CFLAGS) -c SolveMeFirst.c