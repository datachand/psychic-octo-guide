#include "DoublyLinkedList.h"


Node * createNode (int value) {
	Node * newNode = (Node *) malloc(sizeof(Node));
	newNode->data = value;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

List * emptyList () {
	List * list = (List *) malloc(sizeof(List));
	list->head = NULL;
	return list;
}

void Insert (int value, int position, List * list) {
	Node * current = NULL;


	if (list->head == NULL) {
		list->head = createNode(value);
	} else {
		current = list->head;

		if (position == -1) {


			while (current->next != NULL) {
				current = current->next;
			}

			Node * temp = createNode(value);
			temp->prev = current;
			current->next = temp;



		} else {

			for (int i = 0; i < position-2; i++) {
				current = current->next;
			}

			Node * temp = createNode(value);

			temp->next = current->next;
			temp->prev = current->prev;
			current->next->prev = temp;
			current->next = temp;

		}
	}
}

void Remove (int position, List * list) {
	Node * current = NULL;

	if (list->head == NULL) {
		return;
	} else {
		current = list->head;

		for (int i = 0; i < position-2; i++) {
			current = current->next;
		}

		Node * temp = current->next;
		current->next = temp->next;
		current->prev = temp->prev;
		free(temp);

	}
}

void DisplayList (List * list) {
	Node * current = NULL;

	if(list->head == NULL) {
		return;
	} else {
		current =  list->head;

		while (current->next != NULL) {
			printf("%d\t", current->data);
			current = current->next;
		}

		printf("%d\n", current->data);
	}
	

}