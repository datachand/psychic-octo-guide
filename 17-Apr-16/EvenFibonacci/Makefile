CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = EvenFibonacci

EvenFibonacci: EvenFibonacci.o
	$(CC) $(CFLAGS) EvenFibonacci.o -o $(EXECUTABLE)

EvenFibonacci.o: EvenFibonacci.c
	$(CC) $(CFLAGS) -c EvenFibonacci.c