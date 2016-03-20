
#include "SinglyLinkedList.h"

int main(int argc, char const *argv[])
{
	List * newList = EmptyList();
	Insert(1, -1, newList);
	Insert(200, -1, newList);
	Insert(45, -1, newList);
	DisplayList(newList);
	return 0;
}