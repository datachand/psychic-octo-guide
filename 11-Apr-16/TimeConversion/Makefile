CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = TimeConversion

TimeConversion: TimeConversion.o
	$(CC) $(CFLAGS) TimeConversion.o -o $(EXECUTABLE)

TimeConversion.o: TimeConversion.c
	$(CC) $(CFLAGS) -c TimeConversion.c