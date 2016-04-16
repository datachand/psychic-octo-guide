CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = SherlockAndTheBeast

SherlockAndTheBeast: SherlockAndTheBeast.o
	$(CC) $(CFLAGS) SherlockAndTheBeast.o -o $(EXECUTABLE)

SherlockAndTheBeast.o: SherlockAndTheBeast.c
	$(CC) $(CFLAGS) -c SherlockAndTheBeast.c