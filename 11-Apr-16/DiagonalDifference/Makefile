CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = DiagonalDifference

DiagonalDifference: DiagonalDifference.o
	$(CC) $(CFLAGS) DiagonalDifference.o -o $(EXECUTABLE)

DiagonalDifference.o: DiagonalDifference.c
	$(CC) $(CFLAGS) -c DiagonalDifference.c