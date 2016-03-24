CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = main

main: main.o LinearSearch.o
	$(CC) $(CFLAGS) main.o LinearSearch.o -o $(EXECUTABLE)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

LinearSearch.o: LinearSearch.c
	$(CC) $(CFLAGS) -c LinearSearch.c