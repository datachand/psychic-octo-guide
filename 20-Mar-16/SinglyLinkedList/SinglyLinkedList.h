#ifndef _SINGLYLINKEDLIST_INTEGER_H
#define _SINGLYLINKEDLIST_INTEGER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * next;
} Node;

typedef struct List {
	Node * head;
} List;

Node * CreateNode (int value);

List * EmptyList ();

void Insert (int value, int position, List * list);

void Delete (int position, List * list);

void DisplayList (List * list);

#endif