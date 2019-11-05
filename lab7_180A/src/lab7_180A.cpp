//============================================================================
// Name        : lab7_180A.cpp
// Author      : Tanmay
// Version     :
// Copyright   : 
// Description : Stack Implementation
//============================================================================
#include "stack.h"

int main() {
	stack s;
	s.pop();
	s.setTop(s.push(s.getTop(),10));
	s.setTop(s.push(s.getTop(),20));
	s.setTop(s.push(s.getTop(),30));
	cout << s.pop() << " Popped from stack\n";
	cout << s.peek() << " is at the top of the stack\n";
	s.isEmpty()==0? cout<<"Stack is Empty"<<endl: cout<<"Stack is not empty"<<endl;
	return 0;

}
