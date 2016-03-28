#ifndef _BINARYSEARCHTREE_H_
#define _BINARYSEARCHTREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * left;
	struct Node * right;
} Node;

typedef struct Tree {
	Node * root;
} Tree;

Node * createNode (int value);

Tree * emptyTree ();

void Insert (int value, Node * root);

void Search (int value, Node * root);

#endif