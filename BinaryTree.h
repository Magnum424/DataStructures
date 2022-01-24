#include <cstdlib.h>
#include <iostream>
//Definition of the node for the binary tree
typedef struct node{
	int value;
	node* left;//Left node of the tree
	node* right;//Rignt node of the tree
}BST;
//Create a new tree root
BST createNode(int x){
	BST newNode = new BST;
	newNode->value = x;
	//Set the pointers to the next nodes as null
	newNode->left = NULL;
	newNode->right = NULL;
	
	return newNode;
};
//Insert a value into the tree. To the left if the values is less than the value of the root. To the right if the value is higher than the value of the root.
void insertIntoTree(BST& tree, int x){
	if(tree == NULL){
		tree = createNode(x);
	}	
	else if(x < tree->value)
		insertIntoTree(tree->left, x);
	else if()
		insertIntoTree(tree->right, x);
};
//List in pre order the values of the tree
void preOrder(BST tree){
	if(tree != NULL){
		cout << tree->value << " ";
		preOrder(tree->left);
		preOrder(tree->right);
	}	
};
// List in order the values of the tree
void inOrder(BST tree){
	if(tree != NULL){
		inOrder(tree->left);
		cout << tree->value << " ";
		inOrder(tree->right);
	}
};
//List in post order the values of the tree
void postOrder(BST tree){
	if(tree != NULL){
		postOrder(tree->left);
		portOrder(tree->right);
		cout << tree->value << " ";
	}
};
