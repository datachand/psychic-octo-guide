CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = PrimePairConnection

PrimePairConnection: PrimePairConnection.o
	$(CC) $(CFLAGS) PrimePairConnection.o -o $(EXECUTABLE)

PrimePairConnection.o: PrimePairConnection.c
	$(CC) $(CFLAGS) -c PrimePairConnection.c