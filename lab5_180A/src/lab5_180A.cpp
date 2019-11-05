//============================================================================
// Name        : lab5_180A.cpp
// Author      : Tanmay
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "stockList.h"
void menu()
{
	cout<<"-----------MENU------"<<endl;
	cout<<"| 1 | Insert Stock  |"<<endl;
	cout<<"| 2 | Delete Stock  |"<<endl;
	cout<<"| 3 | Display List  |"<<endl;
	cout<<"---------------------"<<endl;
}
int main() {
	stockNode *head=new stockNode();
	stockList *list=new stockList();
	head=list->addStockNode(head,"Apple",100,1);
	head=list->addStockNode(head,"Amazon",1,100);
	head=list->addStockNode(head,"Microsoft",10,100);
	int choice;
	bool flag=1;
	string st;
	while(flag)
	{
		menu();
		cout<<"Enter your choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:	head=list->addStockNode_user(head);
				break;
		case 2:	cout<<"Enter the stock name to be deleted: "<<endl;
				cin>>st;
				head=list->deleteStock(head,st);
				break;
		case 3: list->displayAllStocks(head->getNext());
				break;
		default: flag=0;break;
		}
	}
	stockNode *mid=list->findMid(head);
	cout<<"Middle Node"<<endl;
	list->displayStock(mid);

	return 0;
}
