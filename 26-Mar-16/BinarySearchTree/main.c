#include "BinarySearchTree.h";

int main(int argc, char const *argv[])
{
	/* code */
	Tree * newTree = emptyTree();
	Insert(15, newTree->root);
	Insert(10, newTree->root);
	Insert(20, newTree->root);

	Search(10, newTree->root);
	return 0;
}