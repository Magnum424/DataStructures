#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#define UNDEFINED -9999
using namespace std;

template <typename obj>
class Node{
	private:
		obj data;
		Node* next;
	public:
		//Constructor
		Node(obj _data, Node* _next = NULL):data(_data),next(_next){};
		//Getters-Setters
		obj getData(){return data;};
		Node* getNext(){return next;};
		
		void setData(obj _data){data = _data;};
		void setNext(Node* _next){next = _next;};
		//Destructor
		virtual ~Node(){};
};
#endif /* NODE_H_*/
