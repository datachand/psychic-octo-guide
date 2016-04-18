CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = KElementSequences

KElementSequences: KElementSequences.o
	$(CC) $(CFLAGS) KElementSequences.o -o $(EXECUTABLE)

KElementSequences.o: KElementSequences.c
	$(CC) $(CFLAGS) -c KElementSequences.c