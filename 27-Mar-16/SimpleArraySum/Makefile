CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = SimpleArraySum

SimpleArraySum: SimpleArraySum.o
	$(CC) $(CFLAGS) SimpleArraySum.o -o $(EXECUTABLE)

SimpleArraySum.o: SimpleArraySum.c
	$(CC) $(CFLAGS) -c SimpleArraySum.c