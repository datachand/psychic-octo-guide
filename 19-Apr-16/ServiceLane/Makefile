CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = ServiceLane

ServiceLane: ServiceLane.o
	$(CC) $(CFLAGS) ServiceLane.o -o $(EXECUTABLE)

ServiceLane.o: ServiceLane.c
	$(CC) $(CFLAGS) -c ServiceLane.c