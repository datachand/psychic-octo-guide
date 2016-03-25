#ifndef _CIRCULARLINKEDLIST_H_
#define _CIRCULARLINKEDLIST_H_

typedef struct Node {
	int data;
	struct Node * next;
} Node;

typedef struct List {
	struct Node * head;
} List;

Node * createNode (int value);

List * emptyList ();

void Insert (int value, int position, List * list);

void Remove (int position, List * list);

void DisplayList (List * list);

#endif