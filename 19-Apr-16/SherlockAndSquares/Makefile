CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = SherlockAndSquares

SherlockAndSquares: SherlockAndSquares.o
	$(CC) $(CFLAGS) SherlockAndSquares.o -o $(EXECUTABLE)

SherlockAndSquares.o: SherlockAndSquares.c
	$(CC) $(CFLAGS) -c SherlockAndSquares.c