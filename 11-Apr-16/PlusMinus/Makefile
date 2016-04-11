CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = PlusMinus

PlusMinus: PlusMinus.o
	$(CC) $(CFLAGS) PlusMinus.o -o $(EXECUTABLE)

PlusMinus.o: PlusMinus.c
	$(CC) $(CFLAGS) -c PlusMinus.c