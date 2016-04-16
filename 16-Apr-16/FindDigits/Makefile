CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = FindDigits

FindDigits: FindDigits.o
	$(CC) $(CFLAGS) FindDigits.o -o $(EXECUTABLE)

FindDigits.o: FindDigits.c
	$(CC) $(CFLAGS) -c FindDigits.c