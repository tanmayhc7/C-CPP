#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class node
{
public:
	node()
	{
		val=0;
		next=NULL;
	}
	int getVal(){
		return val;
	}
	void setVal(int x){
		val=x;
	}
	node* getNext()
	{
		return next;
	}
	void setNext(node* temp)
	{
		next=temp;
	}
private:
	int val;
	node* next;
};
#endif
