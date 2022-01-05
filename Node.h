#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#define UNDEFINED -9999
using namespace std;

typedef int item;
template <typename item>
class Node{
	private:
		item data;
		Node* next;
	public:
		//Constructor
		Node(item _data, Node* _next = NULL):data(_data),next(_next){};
		//Getters-Setters
		item getData(){return data;};
		Node* getNext(){return next;};
		
		void setData(item _data){data = _data;};
		void setNext(Node* _next){next = _next;};
		//Destructor
		virtual ~Node(){};
};
#endif /* NODE_H_*/
