#include "stack.h"
node* stack::push(node* top,int val)
{
		if(!top)
		{
			cout<<"Top is NULL"<<endl;
			return NULL;
		}
		node* temp=new node();
		cout << val << " pushed into stack"<<endl;
		temp->setNext(top->getNext());
		temp->setVal(val);
		top->setNext(temp);
		return top;
}

int stack::pop()
{
	if (top->getNext()==NULL) {
		cout << "Stack Underflow"<<endl;
		return 0;
	}
	else {
		node* temp=top->getNext();
		int x = temp->getVal();
		top->setNext(temp->getNext());
		delete temp;
		return x;
	}
}
int stack::peek()
{
	if (!top->getNext()) {
		cout << "stack is Empty";
		return 0;
	}
	else {
		return top->getNext()->getVal();
	}
}

bool stack::isEmpty()
{
	return (top->getNext()==NULL?0:1);
}
