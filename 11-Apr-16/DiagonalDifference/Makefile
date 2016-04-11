CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = AVeryBigSum

AVeryBigSum: AVeryBigSum.o
	$(CC) $(CFLAGS) AVeryBigSum.o -o $(EXECUTABLE)

AVeryBigSum.o: AVeryBigSum.c
	$(CC) $(CFLAGS) -c AVeryBigSum.c