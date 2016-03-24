#include "DoublyLinkedList.h"

int main(int argc, char const *argv[])
{
	/* code */
	List * newList = emptyList();
	Insert(2, -1, newList);
	Insert(3, -1, newList);
	Insert(20, -1, newList);
	Insert(40, -1, newList);
	Insert(8, -1, newList);
	Insert(23, -1, newList);
	Insert(91, -1, newList);
	Insert(4, -1, newList);
	Insert(10, -1, newList);
	DisplayList(newList);

	Insert(75, 3, newList);
	DisplayList(newList);
	return 0;
}