CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = Pairs

Pairs: Pairs.o
	$(CC) $(CFLAGS) Pairs.o -o $(EXECUTABLE)

Pairs.o: Pairs.c
	$(CC) $(CFLAGS) -c Pairs.c