#include "BinarySearchTree.h"

Node * createNode (int value) {
	Node * newNode = (Node *) malloc (sizeof(Node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

Tree * emptyTree () {
	Tree * newTree = (Tree *) malloc (sizeof(Tree));
	newTree->root = NULL;
	return newTree;
}

void Insert (int value, Node * root) {
	if (root == NULL) {
		root = createNode(value);
		printf("Root\n");
	} else if (value <= root->data) {
		printf("Left\n");
		Insert(value, root->left);
	} else if (value > root->data) {
		printf("Right\n");
		Insert(value, root->right);
	}

}

void Search (int value, Node * root) {
	if (root == NULL) printf("%s\n", "Empty Tree");
	else if (value == root->data) printf("Found => %d\n", value);
	else if (value <= root->data) Search(value, root->left);
	else if (value > root->data) Search(value, root->right);
}