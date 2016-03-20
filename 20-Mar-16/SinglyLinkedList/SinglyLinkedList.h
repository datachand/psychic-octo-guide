#ifndef _SINGLYLINKEDLIST_INTEGER_H
#define _SINGLYLINKEDLIST_INTEGER_H

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

void Insert (int value, List * list);

void Delete (int value, List * list);

void DisplayList (List * list);

#endif