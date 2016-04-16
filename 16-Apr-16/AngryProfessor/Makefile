CC = gcc
CXX = g++
CFLAGS = -pipe -O2 -std=c11 -W -Wall -g -Wno-unused-variable -Wunused-parameter
EXECUTABLE = AngryProfessor

AngryProfessor: AngryProfessor.o
	$(CC) $(CFLAGS) AngryProfessor.o -o $(EXECUTABLE)

AngryProfessor.o: AngryProfessor.c
	$(CC) $(CFLAGS) -c AngryProfessor.c