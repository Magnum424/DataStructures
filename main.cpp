#include <iostream>
#include "Iterator.h"
#include "LinkedList.h"
#include "Stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Driver Node
	/*	
	Node<int>* node = new Node<int>(5);
	Node<int>* secondNode = new Node<int>(10,node);
	cout << node->getData()<<endl;
	cout << secondNode->getData()<<endl;
	cout << node->getNext()<<endl;
	cout << secondNode->getNext()<<endl;
	*/
	//Driver List
	/*
	LinkedList* newList = new LinkedList();
	cout << newList->getLenght() <<endl;
	newList->addAtThebeggining(10);
	cout << newList->getLenght() <<endl;
	cout<<newList->getNodeData();
	*/
	//Driver Stack
	Stack<int> p = Stack<int>(5);
	cout<<p.isStackEmpty()<<endl;
	p.topValue();
	p.push(5);
	cout<<p.isStackEmpty()<<endl;
	p.topValue();
	p.push(20);
	p.topValue();
	p.pop();
	p.topValue();	
	return 0;
}
