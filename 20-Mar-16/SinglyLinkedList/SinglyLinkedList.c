
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

void Delete (int position, List * list) {

	Node * current = NULL;

	if (list->head == NULL) {
		return;
	} else {
		current = list->head;

		if (position == 1) {
			Node *temp = current->next;
			current->data = temp->data;
			current->next = temp->next;
			free(temp);
		} else {

			for (int i = 0; i < position-2; i++) {
				current = current->next;
			}

			Node *temp = current->next;
			current->next = temp->next;
			free(temp);
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

int Count (List * list) {

	Node * current = NULL;
	int count = 0;

	if (list->head == NULL) {
		count = 0;
	} else {
		current = list->head;

		while (current->next != NULL) {
			count++;
			current = current->next;
		}

		count = count + 1;
	}

	return count;

}

void Reverse (List * list) {

	Node * current, * previous, * next;
	current = list->head;
	previous = NULL;

	while (current != NULL) {

		next = current->next;
		current->next = previous;
		previous = current;
		current = next;

	}

	list->head = previous;
}

void RecursionPrintForward (Node * node) {

	if (node == NULL) {
		printf("\n");
		return;
	}
	printf("%d\t", node->data);
	RecursionPrintForward(node->next);

}

void RecursionPrintBackward (Node * node) {
	
	if (node == NULL) {
		return;
	}

	RecursionPrintBackward(node->next);
	printf("%d\t", node->data);

}

void RecursionReverse (List * list, Node * node) {

	if (node->next == NULL) {
		list->head = node;
		return;
	}

	RecursionReverse(list, node->next);

	Node * temp = node->next;
	temp->next = node;
	node->next = NULL;

}