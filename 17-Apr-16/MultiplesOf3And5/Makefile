CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = MultiplesOf3And5

MultiplesOf3And5: MultiplesOf3And5.o
	$(CC) $(CFLAGS) MultiplesOf3And5.o -o $(EXECUTABLE)

MultiplesOf3And5.o: MultiplesOf3And5.c
	$(CC) $(CFLAGS) -c MultiplesOf3And5.c