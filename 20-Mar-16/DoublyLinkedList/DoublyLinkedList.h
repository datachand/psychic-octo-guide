#ifndef _DOUBLYLINKEDLIST_H_
#define _DOUBLYLINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * prev;
	struct Node * next;
} Node;

typedef struct List {
	Node * head;
} List;

Node * createNode (int value);

List * emptyList ();

void Insert (int value, int position, List * list);

void Remove (int position, List * list);

void DisplayList (List * list);

#endif