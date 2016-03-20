
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

	Insert(5, 3, newList);
	DisplayList(newList);


	Delete(5, newList);
	DisplayList(newList);

	return 0;
}