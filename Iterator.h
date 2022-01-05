#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "LinkedList.h"
using namespace std;

class Iterator{
	private:
		const LinkedList &list;
		Node<item>* node;
	public:
		//Iterator constructor
		Iterator(const LinkedList &l):list(l),node(l.head){};
		//Verification
		bool isEmpty(){
			return node != NULL;
		};
		//Data getter
		item nodeData(){
			return node->getData();
		};
		//Advance
		void nextNode(){
			node = node->getNext();
		};
};
#endif /*ITERATOR_H_*/
