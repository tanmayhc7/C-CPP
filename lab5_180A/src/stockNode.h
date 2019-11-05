#ifndef STOCKNODE_H
#define STOCKNODE_H

#include "stock.h"
class stockNode
{
public:
	stock s;
	stockNode()
	{
		next=NULL;
	}
	void setNext(stockNode *h)
	{
		next=h;
	}
	stockNode* getNext()
	{
		return next;
	}
private:

	stockNode *next;
};
#endif
