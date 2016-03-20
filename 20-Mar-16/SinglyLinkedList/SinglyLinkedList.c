
#include "SinglyLinkedList.h"

Node * CreateNode (int value) {
	Node * newNode = (Node *) malloc(sizeof(Node));
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

List * EmptyList () {
	List * list = (List *) malloc(sizeof(List));
	list->head = NULL;
	return list;
}

void Insert (int value, List * list) {
	Node * current = NULL;

	if (list->head == NULL) {
		list->head = CreateNode(value);
	} else {
		current = list->head;

		if(current->next != NULL) {
			current = current->next;
		}

		current->next = CreateNode(value);
	}

}