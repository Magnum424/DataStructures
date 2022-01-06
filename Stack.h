#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#define g_MAX 10
using namespace std;

//Class definition
template <class X>
class Stack{
	//private:
		int top;
		X* array;
		int MAX;
	public:
		//Constructor **
		Stack(int dim){
			if(dim > 0)
				MAX = dim;
			else
				MAX = g_MAX;
			top = -1;
			array = new X[MAX];
		};
		//Boolean verification **
		bool isStackEmpty(){
			if(top == -1){
				return true;
			}
			else{
				return false;
			}
		};
		//Take out the item at the top of the stack **
		void pop(){
			if(top >= 0){
				top--;
			}
			else{
				cout<<"La pila esta vacia"<<endl;
			}
		};
		//Read the value of the item at the top of the stack **
		void topValue(){
			if(!isStackEmpty()){
				cout << array[top] << endl;
			}
			else{
				cout << "The stack is empty" <<endl;
			}
		}
		//Add an item to the top of the stack **
		void push(X item){
			if(top+1 < MAX){
				top++;
				array[top] = item;
			}
			else{
				cout << "Overflow" << endl;
			}
		}
		//Check if the stacks have the same items in the same order (==) (sequential)
		//Check if the stacks have the same items in the same order (==) (recursive)	
		//Stacking stack b over stack a (sequential)
		//Stacking stack b over stack a (recursive)
};
#endif /*STACK_H_*/
