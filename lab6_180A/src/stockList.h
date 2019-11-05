#ifndef STOCKLIST_H
#define STOCKLIST_H

#include "stockNode.h"
class stockList
{
public:
	stockNode* addStockNode(stockNode *head,string s,int p,int no);
	void displayAllStocks(stockNode *head);
	void displayReverse(stockNode *head);
	stockNode* addStockNode_user(stockNode *head);
	stockNode* deleteStock(stockNode *head,string s);
	stockNode* findMid(stockNode *head);
};
#endif
