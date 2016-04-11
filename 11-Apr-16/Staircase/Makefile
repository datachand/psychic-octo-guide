CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = Staircase

Staircase: Staircase.o
	$(CC) $(CFLAGS) Staircase.o -o $(EXECUTABLE)

Staircase.o: Staircase.c
	$(CC) $(CFLAGS) -c Staircase.c