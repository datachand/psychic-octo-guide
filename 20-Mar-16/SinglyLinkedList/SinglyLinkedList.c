
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

void Insert (int value, int position, List * list) {
	Node * current = NULL;

	if (list->head == NULL) {
		list->head = CreateNode(value);
	} else {
		current = list->head;
		
		if (position == -1) {

			while (current->next != NULL) {
				current = current->next;
			}

			current->next = CreateNode(value);
		} else {

			Node * temp = CreateNode(value);

			for (int i = 0; i < position-2; i++) {
				current = current->next;
			}

			temp->next = current->next;
			current->next = temp;

		}
	}

}

void DisplayList (List * list) {
	Node * current = NULL;

	if(list->head == NULL) {
		return;
	} else {
		current = list->head;

		while (current->next != NULL) {
			printf("%d\t", current->data);
			current = current->next;
		}

		printf("%d\n", current->data);
	}
}