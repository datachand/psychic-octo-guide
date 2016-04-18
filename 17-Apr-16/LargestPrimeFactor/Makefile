CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = LargestPrimeFactor

LargestPrimeFactor: LargestPrimeFactor.o
	$(CC) $(CFLAGS) LargestPrimeFactor.o -o $(EXECUTABLE)

LargestPrimeFactor.o: LargestPrimeFactor.c
	$(CC) $(CFLAGS) -c LargestPrimeFactor.c