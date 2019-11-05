#ifndef STACK_H
#define STACK_H
#include "node.h"
class stack:public node
{
public:
	node* getTop()
	{
	 return top;
	}
	void setTop(node* x)
	{
		top=x;
	}
	node* push(node* top, int x);
	int pop();
	int peek();
	bool isEmpty();
private:
	node* top;
};
#endif
