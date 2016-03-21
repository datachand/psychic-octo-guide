
#include "SinglyLinkedList.h"

int main(int argc, char const *argv[])
{
	List * newList = EmptyList();
	
	Insert(8, -1, newList);
	Insert(6, -1, newList);
	Insert(1, -1, newList);
	Insert(20, -1, newList);
	Insert(12, -1, newList);
	Insert(2, -1, newList);
	Insert(3, -1, newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));

	Insert(5, 3, newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));


	Delete(5, newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));


	Delete(7, newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));

	Insert(8, -1, newList);
	Insert(6, -1, newList);
	Insert(1, -1, newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));

	Reverse(newList);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));

	RecursionPrintForward(newList->head);
	printf("Count => %d\n", Count(newList));

	RecursionPrintBackward(newList->head);
	printf("\nCount => %d\n", Count(newList));

	RecursionReverse(newList, newList->head);
	DisplayList(newList);
	printf("Count => %d\n", Count(newList));

	return 0;
}