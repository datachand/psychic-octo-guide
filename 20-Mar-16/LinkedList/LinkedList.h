#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

typedef struct Node {
	int data;
	struct Node * next;	
} List;

struct Node * head;

#endif