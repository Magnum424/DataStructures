#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"
#include <iostream>
using namespace std;
//Class definition
class LinkedList{
	private:
		Node<item>* head;
		int listLenght;
	public:
	//Functions definitions
		//Constructor
		LinkedList():head(NULL),listLenght(0){};
		//Add a new node at the beggining of the list
		void addAtThebeggining(item data){
			Node<item>* newNode = new Node<item>(data,head);
			head = newNode;
			listLenght++;
		};
		//Delete the first node of the list, replacing it with the second one.
		void deleteFirstNode(){
			Node<item>* aux = head;
			head = head->getNext();
			delete aux;
			listLenght--;
		};
		//Verify if the list is empty.
		bool isListEmpty(){return listLenght == 0;};
		//Get the data of the head node
		item getNodeData(){
			if(!isListEmpty()){
				return head->getData();
			}
			else{
				return UNDEFINED;
			}
		};
		//Get the lenght of the list
		int getLenght(){return listLenght;};
		//Destructor of the list
		virtual ~LinkedList(){
			for(int i=0; i < listLenght; i++) {
				deleteFirstNode();
			}
		};
		//Write the elements of the list completely without the iterator
		void writeList(){
			cout << "Lista: ";
			for(Node<item>* aux = head;aux != NULL;aux = aux->getNext()){
				cout<<aux->getData()<<" ";
			}
			cout<<endl;
		};
		//Add Iterator as a friend class
		friend class Iterator;
};
#endif /* LINKEDLIST_H_*/
