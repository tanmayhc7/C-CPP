#ifndef STOCKNODE_H
#define STOCKNODE_H

#include "stock.h"
class stockNode: public stock
{
public:
	stockNode()
	{
		next=NULL;
		prev=NULL;
	}
	void setNext(stockNode *h)
	{
		next=h;
	}
	stockNode* getNext()
	{
		return next;
	}
	void setPrev(stockNode *h)
	{
		prev=h;
	}
	stockNode* getPrev()
	{
		return prev;
	}
private:
	stockNode *prev;
	stockNode *next;
};
#endif
