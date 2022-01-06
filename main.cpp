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
	//Driver Stack -- Integer stack
	Stack<int> p1 = Stack<int>(5);
	Stack<int> p2 = Stack<int>(5);
	p1.push(5);
	p1.push(20);		
	p2.push(5);
	p2.push(20);
	cout<< p1.isEqualSeq(p2);
	cout<<p1.topValue();
	return 0;
}
